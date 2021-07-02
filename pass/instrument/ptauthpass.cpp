#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/CallSite.h"
#include "llvm/IR/Attributes.h"
#include "llvm/IR/LLVMContext.h"
#include <set>
#include <malloc.h>
#include "llvm/Transforms/Utils/Cloning.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/Transforms/Utils/BasicBlockUtils.h"
#include "llvm/IR/Instructions.h"
#include <string.h>
#include <sstream>
#include "llvm/Object/StackMapParser.h"
#include <queue>
#include <map>
#include <list>
#include <iterator>
#include <iostream>
#include <bits/stdc++.h>
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include <vector>
#include "llvm/IR/GlobalValue.h"
#include "llvm/IR/GlobalVariable.h"
#include <iostream>
#include <string>
#include "passutils.h"
#include "ptauthTypes.h"
#define OPTIMIZATION 1

using namespace llvm;
using namespace std;

namespace {
    class PTAuthpass : public ModulePass {
    public:
        static char ID;
        std::vector<Function *> to_replace_functions;
        PTAuthpass() : ModulePass(ID) {}
        bool runOnModule(Module &m) override;
    };
}

char PTAuthpass::ID = 0;
bool isPrevAlloca = false;
AllocaInst *prevAI;
bool allocaFinished = false;

Value* GlobalObjectsArr[100]={0};

size_t GlobalObjectsArrSize = 0;
size_t InternalCall = 0;
size_t GlobalPointer = 0;
size_t NestedPointer = 0;
std::unordered_set <string> optimizedList = {""};

size_t FlagFreeCalled = 0 ;
struct functionProperties funcProperties;

vector<pointerProperties> pointers;
vector<GEPProperties> GEPS;

Function *__loadCheck;
Function *__GEPCheck;
Function *__nestedGEPCheck;
Function *__storeCheck;
Function *__xpac = nullptr;
Function *__noCheck;
Type *Int8Ty;
Type *VoidType;
Type *VoidPtrTy;

bool PTAuthpass::runOnModule(Module &m) {
    DataLayout *dl = new DataLayout(&m);
    int counter=0;
    Module::FunctionListType &functions = m.getFunctionList();

    // Replacing functions
    for (Module::FunctionListType::iterator it = functions.begin(),
                 it_end = functions.end(); it != it_end; ++it) {
        counter++;
        Function &func = *it;

        //Replacing malloc with __ptauth_malloc
        if (func.getName() == "malloc") {
            passutils::replaceFuncionWith(func, "__ptauth_malloc");
        }

        //Replacing calloc with __ptauth_calloc
        if (func.getName() == "calloc") {
            passutils::replaceFuncionWith(func, "__ptauth_calloc");
        }

        //Replacing calloc with __ptauth_realloc
        if (func.getName() == "realloc") {
            passutils::replaceFuncionWith(func, "__ptauth_realloc");
        }

        //Replacing calloc with __ptauth_free
        if (func.getName() == "free") {
            passutils::replaceFuncionWith(func, "__ptauth_free");
        }

        // TODO: Handle more APIs(). Custom APIs also can be added here.
        if (func.getName() == "aligned_alloc") {
            //passutils::replaceFuncionWith(func, "__ptauth_aligned_alloc");
        }
        if (func.getName() == "memalign") {
            //passutils::replaceFuncionWith(func, "__ptauth_memalign");
        }
        if (func.getName() == "posix_memalign") {
            //passutils::replaceFuncionWith(func, "__ptauth_posix_memalign");
        }
        if (func.getName() == "valloc") {
            //passutils::replaceFuncionWith(func, "__ptauth_valloc");
        }
        if (func.getName() == "pvalloc") {
            //passutils::replaceFuncionWith(func, "__ptauth_pvalloc");
        }

    } // End of replacing functions

    //----------------Inserting runtime libraries checks
    Int8Ty = Type::getInt8Ty(m.getContext());
    VoidPtrTy = PointerType::getUnqual(Type::getInt8Ty(m.getContext()));
    VoidType = Type::getVoidTy(m.getContext());

    FunctionType *FTy = FunctionType::get(VoidPtrTy, {VoidPtrTy}, false);
    Constant *hookFunc = m.getOrInsertFunction("__loadCheck", FTy);
    __loadCheck = cast<Function>(hookFunc);

    FTy = FunctionType::get(VoidPtrTy, {VoidPtrTy}, false);
    hookFunc = m.getOrInsertFunction("__GEPCheck", FTy);
    __GEPCheck = cast<Function>(hookFunc);

    FTy = FunctionType::get(VoidPtrTy, {VoidPtrTy}, false);
    hookFunc = m.getOrInsertFunction("__nestedGEPCheck", FTy);
    __nestedGEPCheck = cast<Function>(hookFunc);

    Type *VoidTy33 = PointerType::getUnqual(Int8Ty);
    FunctionType *FTy33 = FunctionType::get(VoidTy33, {VoidPtrTy}, false);
    hookFunc = m.getOrInsertFunction("__storeCheck", FTy33);
    __storeCheck = cast<Function>(hookFunc);

    Type *VoidTy8 = PointerType::getUnqual(Int8Ty);
    FunctionType *FTy12 = FunctionType::get(VoidPtrTy, {VoidPtrTy}, false);
    hookFunc = m.getOrInsertFunction("__xpac", FTy12);
    __xpac = cast<Function>(hookFunc);

    Type *VoidTy88 = PointerType::getUnqual(Int8Ty);
    FunctionType *FTy128 = FunctionType::get(VoidPtrTy, {VoidPtrTy}, false);
    hookFunc = m.getOrInsertFunction("__noCheck", FTy12);
    __noCheck = cast<Function>(hookFunc);

    // This avoid-list is only compatible with Top-Byte Ignore
    // This list of functions is totally safe in single-threaded applications. In the following functions, there is no global pointers to heap section.
    // Also, the pointers are neither passed to other functions in the applications (which guarantees they are not freed) nor freed by free() API.

    //std::unordered_set <string> avoidList = {"mainQSort3", "mainSort", "primal_start_artificial", "primal_update_flow",
    // "bea_is_dual_infeasible","primal_update_flow","primal_start_artificial","insert_new_arc","replace_weaker_arc","primal_feasible","price_out_impl","primal_bea_mpp"};
    std::unordered_set <string> avoidList = {"mainQSort3", "mainSort", "price_out_impl", "primal_bea_mpp","read_min","getopt_internal","writeSyntaxElement_fixed"};
                                                           //"primal_feasible", "insert_new_arc","replace_weaker_arc","primal_start_artificial","primal_update_flow","bea_is_dual_infeasible"};


    // iterate over the module
    for (auto &F : m) { // iterate over the basic functions

        if (F.getBasicBlockList().size()){

#if OPTIMIZATION
            passutils::optimizer(F);
#endif
            if ((avoidList.count(F.getName())>0) || (optimizedList.count(F.getName())>0)){
                continue;
            }
            errs() << "Instrumenting function = " << F.getName() << "\n";

            for (auto &B : F) {
                for (auto &I : B) {

                    if (isPrevAlloca) {
                        isPrevAlloca = false;
                        prevAI = nullptr;
                    } // End of prev allocation

                    if (allocaFinished) {
                        allocaFinished = false;
                    } // End of allocaFinished

                    if (AllocaInst *AI = dyn_cast<AllocaInst>(&I)) {
                        passutils::instrumentAlloc(AI);
                    }

                    else if (ReturnInst *RI = dyn_cast<ReturnInst>(&I)) {
                        passutils::instrumentReturn(RI);
                    }

                    else if (StoreInst *SI = dyn_cast<StoreInst>(&I)) {
                        passutils::instrumentStore(SI);
                    }

                    else if (LoadInst *LI = dyn_cast<LoadInst>(&I)) {
                        passutils::instrumentLoad(LI);
                    }

                    else if (GetElementPtrInst *GEP = dyn_cast<GetElementPtrInst>(&I)) {
                        passutils::instrumentGEP(GEP);
                    }

                    else if (CallInst *CI = dyn_cast<CallInst>(&I)) {
                        passutils::instrumentCalls(CI);
                    }

                } // End of iterate over the basic blocks

            } // End of iterate over the functions

        }
    } // End of iterate over the module

    return false;
}//End of runOnModule

static RegisterPass<PTAuthpass> X("ptauth", "PTAuth pass mitigates the temporal memory corruption attacks in the heap", false, false);
