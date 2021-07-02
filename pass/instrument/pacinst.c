#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>
#include "config.h"

void* __xpac(void* ptr);
int   __pacga(long val, long sizeid);
void* __pacia(void* ptr,unsigned long id);
void* __autia(void* ptr,unsigned long id, char type);

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __xpac(void* ptr){
#else
void* __xpac(void* ptr) {
#endif
    DEBUG_PRT("\n\n\n\t---__xpac---\n");
#if PACENABLED
void* retPtr=ptr;
asm (
    "xpaci %x0\n"
    : "=r" (retPtr)
    );
    return retPtr;
#else
    return (void*)((long)ptr & MASKLOWBIT);
#endif

}

#if INLINEFUNCTIONS
__attribute__((always_inline)) int __pacga(long val,  long sizeid) {
#else
int __pacga(long val, long sizeid) {
#endif
    // To simulate 4 CPU cycles
    asm (
    "eor x0,x0,#0x2\n"
    );
    asm (
    "eor x0,x0,#0x3\n"
    );
    asm (
    "eor x0,x0,#0x2\n"
    );
    asm (
    "eor x0,x0,#0x4\n"
    );

    DEBUG_PRT("\n\n\n\t---__pacga---\n");
    DEBUG_PRT("val is = %d\n",val);
    DEBUG_PRT("sizeid is = %d\n",sizeid);
    DEBUG_PRT("__pacga: val | sizeid is = %d\n",(int)(val ^ sizeid));
    return (int)(val^sizeid);
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __pacia(void* ptr,unsigned long id){
#else
    void* __pacia(void* ptr,unsigned long id){
#endif
// To simulate 4 CPU cycles
//    asm (
//    "eor x0,x0,#0x2\n"
//    );
//    asm (
//    "eor x0,x0,#0x3\n"
//    );
//    asm (
//    "eor x0,x0,#0x2\n"
//    );
//    asm (
//    "eor x0,x0,#0x4\n"
//    );

    DEBUG_PRT("\n\n\n\t---__pacia---\n");
#if PACENABLED
void* retPtr=ptr;
asm (
	"mov %x0,%0\n"
	:
	: "r" (retPtr)
	);
asm(
	"pacia %x0, %x1\n"
	: "=r" (retPtr)
	: "r" (id)
	);
	return retPtr;
#else
    // Note: Signature generation in this implementation is totally predictable! NOT SAFE!
    unsigned long long ptrbits7= (unsigned long long)ptr & MASK7BITS;
    unsigned long long idbits7 = id & MASK7BITS;
    unsigned long long signature = ptrbits7 ^ idbits7;
    signature = signature << SHIFT;
    unsigned long long ptrWithSign = (unsigned long long)ptr | signature;
    DEBUG_PRT("__pacia: ptr with signature is = %p\n",ptrWithSign);
    return (void*)ptrWithSign;

#endif

}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __autia(void* ptr,unsigned long id, char type){
#else
    void* __autia(void* ptr,unsigned long id, char type) {
#endif

// To simulate 4 CPU cycles
//    asm (
//    "eor x0,x0,#0x2\n"
//    );
//    asm (
//    "eor x0,x0,#0x3\n"
//    );
//    asm (
//    "eor x0,x0,#0x2\n"
//    );
//    asm (
//    "eor x0,x0,#0x4\n"
//    );

#if PACENABLED
    asm (
	"mov %x0,%0\n"
	:
	: "r" (ptr)
	);
	asm (
	"autia %x0, %x1\n"
	: "=r" (ptr)
	: "r" (id)
	);
	return ptr;
#else

    DEBUG_PRT("\n\n\n\t---__autia---\n");
    unsigned long long signature= (unsigned long long)ptr & ~MASKLOWBIT;
    signature =signature >> SHIFT;
    void* xpacedPtr= __xpac(ptr);
    void* ptrWithSign= __pacia(xpacedPtr,id);
    unsigned long long signatureptrWithSign= (unsigned long long)ptrWithSign & ~MASKLOWBIT;
    unsigned long long shiftedSignature=signatureptrWithSign >> SHIFT;
    if(shiftedSignature == signature)
    {
        DEBUG_PRT("Authentication is successful\n");
        return xpacedPtr;
    }
    else
    {
        switch(type) {
            case 'F' :
                DEBUG_PRT("Authentication Failed in free()!\n");
                break;
            case 'L' :
                DEBUG_PRT("Authentication Failed in load!\n");
                break;
            case 'S' :
                DEBUG_PRT("Authentication Failed in store!\n");
                break;

            default :
                DEBUG_PRT("Authentication failed for unknown reason!\n" );
        }
        return NULL;
    }

#endif

}
