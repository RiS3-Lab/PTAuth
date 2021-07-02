//
// Created by Reza Mirzazade on 1/2/21.
//

#ifndef INSTRUMENT_PASSUTILS_H
#define INSTRUMENT_PASSUTILS_H

#include <cstdint>
#include <string>
#include "llvm/IR/Instructions.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/Support/raw_ostream.h"
#include <set>
#include <malloc.h>
#include <string.h>
#include <sstream>
#include <queue>
#include <map>
#include <list>
#include <iterator>
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string> // for string class

using namespace llvm;
using namespace std;

class passutils
{
public:
    passutils(){};
    static void instrumentStore(llvm::StoreInst* SI);
    static void instrumentCalls(llvm::CallInst* CI);
    static void instrumentAlloc(llvm::AllocaInst*);
    static void instrumentReturn(llvm::ReturnInst*);
    static void instrumentGEP(llvm::GetElementPtrInst*);
    static void instrumentLoad(llvm::LoadInst*);
    static void replaceFuncionWith(llvm::Function& func, const Twine &);
    static void checkAlloc(llvm::LoadInst*, llvm::Instruction*);
    static string getString(llvm::Type*);
    static bool isPointerToPointer(const llvm::Value*);
    static void instrumentCMP(llvm::CmpInst*);
    static void optimizer(llvm::Function&);
};

#endif //INSTRUMENT_PASSUTILS_H
