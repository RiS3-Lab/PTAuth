//
// Created by Reza Mirzazade on 1/2/21.
//

#ifndef INSTRUMENT_PTAUTHTYPES_H
#define INSTRUMENT_PTAUTHTYPES_H

#include <cstdint>
#include <string>
#include "llvm/IR/Instructions.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/Support/raw_ostream.h"
#include <iostream>
#include <vector>

struct functionProperties {
    int paramNums;

};

class pointerProperties {

    public:
        unsigned int Numuse;
        Value *Operand0;
        Value *Operand1;
        bool isPassedToFunctionBefore;
        void printProperties() {
            errs() << "Operand 0 = " << *Operand0 << "\n";
            errs() << "Operand 1 = " << *Operand1 << "\n";
            errs() << "isPassedToFunctionBefore = " << isPassedToFunctionBefore  << "\n";
        }
        bool isCheckedBefore;
};

class GEPProperties {
    public:
        Type *type;
        bool isCheckedBefore;
};

extern vector<pointerProperties> pointers;
extern vector<GEPProperties> GEPS;

extern Type *Int8Ty;
extern Type *VoidType;
extern Type *VoidPtrTy;

extern Function *__loadCheck;
extern Function *__storeCheck;
extern Function *__xpac;
extern Function *__noCheck;
extern Function *__GEPCheck;
extern Function *__nestedGEPCheck;


extern bool isPrevAlloca;
extern AllocaInst *prevAI;
extern bool allocaFinished;


extern Value* GlobalObjectsArr[100];
extern size_t GlobalObjectsArrSize;
extern size_t FlagFreeCalled;

// Optimization flags
extern size_t InternalCall;
extern size_t GlobalPointer;
extern size_t NestedPointer;
extern size_t Optimization;
extern std::unordered_set <string> optimizedList;

#endif //INSTRUMENT_PTAUTHTYPES_H
