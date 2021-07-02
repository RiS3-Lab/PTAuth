#include <stdio.h>
#include "metadata.h"
#include <string.h>
#include <malloc.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdarg.h>
#include <wchar.h>
#include <time.h>
#include <fcntl.h>
#include <signal.h>
#include <execinfo.h>
#include <sys/prctl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <limits.h>
#include "utils.h"
#include "config.h"
#include "pacinst.h"

#if TOPBYTEIGNORE
unsigned long long MASKHIGHBIT = 0b1111111111111111000000000000000000000000000000000000000000000000;
unsigned long long MASKLOWBIT  = 0b0000000000000000111111111111111111111111111111111111111111111111;
unsigned long long MASK7BITS   = 0b0000000000000000000000000000000000000000000000000000000011111111;
#else
unsigned long long MASKHIGHBIT = 0b1111111111111111000000000000000000000000000000000000000000000000;
unsigned long long MASKLOWBIT  = 0b0000000000000000111111111111111111111111111111111111111111111111;
unsigned long long MASK7BITS   = 0b0000000000000000000000000000000000000000000000000000000001111111;
#endif

void* __ptauth_malloc(size_t size);
void* __ptauth_calloc(size_t item, size_t sizeBlock);
void  __ptauth_free(void* ptr);
void* __ptauth_realloc(void *ptr, size_t size);
// TODO
//void* __ptauth_aligned_alloc(size_t, size_t);
//void* __ptauth_memalign(size_t,size_t);
//int   __ptauth_posix_memalign (void **, size_t,size_t);
//void* __ptauth_valloc(size_t);
//void* __ptauth_pvalloc(size_t);

int checkTBI();
void* __loadCheck(void*);
void* __GEPCheck(void*);
void* __nestedGEPCheck(void*);
void* __storeCheck(void*);
void* __noCheck(void*);
void* validatePointer(void*, char);
void  initMD(struct Metadata*, int);
void*  backward_search(void*, struct Metadata*, char type);

unsigned long NestedGEPHasSignature = 0;
unsigned long NestedGEPHasNoSignature = 0;
unsigned long GEPHasSignature = 0;
unsigned long GEPHasNoSignature = 0;

// Call this function to get a backtrace.
//void backtrace1(void){
//    printf("my backtrace\n");
//    return;
//}

int checkTBI(){
    return !prctl(55, PR_TAGGED_ADDR_ENABLE, 0, 0, 0);
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* backward_search(void* ptr, struct Metadata* meta, char type) {
#else
void* backward_search(void* ptr, struct Metadata* meta, char type){
#endif

#if RETURN
    return;
#endif
    void* tempPtr = ptr;
    void* xpacedPtr = __xpac(ptr);
    unsigned long threshold  = LONG_MAX;

    if (BKTHREASHOLDENABLED){
        threshold = 1024;
    }

    for(int i=1;i<threshold;i=i+1){
        if (((long)xpacedPtr-i)%16!=0){ //  optimization
            i +=  (((long)xpacedPtr-i)%16)-1;
            continue;
        }

        tempPtr = ptr-i+8;  // The data part of object starts here
        meta = xpacedPtr-i; // ID is located here
        unsigned long id = meta->id;

        void* p = __autia(tempPtr, id, type);
        if (id!=0 && (p)) {
            switch(type) {
                case 'L' :
                    DEBUG_PRT("ID is validated by PACIA in Backward Search for Load!\n");
                    DEBUG_PRT("p is = %p\n",p);
                    break;
                case 'S' :
                    DEBUG_PRT("ID is validated by PACIA in Backward Search for Store!\n");
                    DEBUG_PRT("p is = %p\n",p);
                    break;
                default :
                    DEBUG_PRT("ID is validated by PACIA in Backward Search for nothing!\n");
                    DEBUG_PRT("p is = %p\n",p);
            }
            return xpacedPtr;
        }
    }
    if (ENABLELOG) {
        DEBUG_PRT("Threshold has been reached!\n");
    }
    else {
        abort();
    }

    return ptr;
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __noCheck(void* ptr){
#else
void* __noCheck(void* ptr){
#endif

#if RETURN
    return ptr;
#endif

#if TOPBYTEIGNORE
    return ptr;
#endif
    void* ptrTemp=ptr;

#if PACENABLED
    asm (
		"xpaci %x0\n"
		: "=r" (ptrTemp)
		);
#else
    ptrTemp= __xpac(ptrTemp);
#endif
    return ptrTemp;
}

void initMD(struct Metadata* meta, int size){
#if RETURN
    return;
#endif
    unsigned long num;
    srand(time(0));
    num = rand();
    num = (num << 32) | rand();
    num = (num % (999999999 - 100000000)) + 100000000;
    meta->id= num; // Needs a secure random generator
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __ptauth_malloc(size_t size) {
#else
void* __ptauth_malloc(size_t size) {
#endif

#if RETURN
    return malloc(size);
#endif
    if (!checkTBI()) {
        printf("Your OS does not support Top-Byte Ignore.\n");
        exit(1);
    }

    DEBUG_PRT("\n\n\n\t---__ptauth_malloc--- ...!\n");
    size_t alignment = 32;
    int offset =alignment - 1 + sizeof(void*);
    uint64_t alloc_size = size + 8;
    struct Metadata* meta = malloc(alloc_size);
    DEBUG_PRT("meta location is = %p \n",meta );
    initMD(meta,size);
    DEBUG_PRT("id After initMD  is = %d\n", meta->id);
    unsigned long id = meta->id;
    void* retPtr = (void*)((int*)meta+2);
    DEBUG_PRT("object pointer location is  = %p\n", retPtr);

#if PACENABLED
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
#else
    retPtr =__pacia(retPtr,id);

#endif
    return retPtr;
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __ptauth_calloc(size_t item, size_t sizeBlock) {
#else
void* __ptauth_calloc(size_t item, size_t sizeBlock) {
#endif

#if RETURN
    return calloc(item, size);
#endif
    if (!checkTBI()) {
        printf("Your OS does not support Top-Byte Ignore.\n");
        exit(1);
    }
    DEBUG_PRT("\n\n\n\t---__ptauth_calloc---!\n");
    DEBUG_PRT("\n__ptauth_calloc: size is = %d \n",item*sizeBlock);

    struct Metadata* meta = calloc(item,sizeBlock+ sizeof(long));
    initMD(meta,sizeBlock);
    unsigned long id = meta->id;
    void* retPtr = (void*)((int*)meta+2);

#if PACENABLED
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
#else
    retPtr =__pacia(retPtr,id);
#endif
    return retPtr;
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void __ptauth_free(void* ptr) {
#else
void __ptauth_free(void* ptr) {
#endif

#if RETURN
    free(ptr);
#else
    if (!ptr){
        return;
    }

    struct Metadata* meta = (void*)((int*)ptr-2);
    DEBUG_PRT("__ptauth_free:meta ptr is = %p\n",meta );

	meta = ((void *)((unsigned long long)meta & ~MASKHIGHBIT));
    DEBUG_PRT("__ptauth_free:meta ptr after stripping is = %p\n",meta );
    unsigned long id = meta->id;
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
    #else
    ptr = __autia(ptr,id, 'F');
    #endif

    DEBUG_PRT("check the free pointer \n");
    unsigned long long ptrViolation= (unsigned long long)ptr & ~MASKLOWBIT;
    DEBUG_PRT("ptrViolation after unPACing is = %p \n",ptrViolation );
    //
    if (ptrViolation)
    {
        printf("Pointer is 0x20000000000000 !\n");
        printf("\t****** __ptauth_free! Pointer is not Valid! ****** \n");
        exit(0);
    }

	meta->id = 2;
    free((int*)ptr-2);
#endif
}

#if INLINEFUNCTIONS
__attribute__((always_inline))  void* __ptauth_realloc(void* ptr, size_t size) {
#else
void* __ptauth_realloc(void *ptr, size_t size) {
#endif
    if (!checkTBI()) {
        printf("Your OS does not support Top-Byte Ignore.\n");
        exit(1);
    }
	DEBUG_PRT("\n\n\n\t---Custom Realloc ...!\n");
	void* placeholderptr = ptr;

	// workaround for Calloc()
//    DEBUG_PRT("check the free pointer \n");
//    unsigned long long ptrSignature= (unsigned long long)ptr & ~MASKLOWBIT;
//    DEBUG_PRT("ptrViolation after unPACing is = %p \n",ptrSignature );
//    if(!ptrSignature){
//        return realloc(__xpac(ptr), size);
//    }

    ptr = ((void *)((unsigned long long)ptr & ~MASKHIGHBIT));

    DEBUG_PRT("__ptauth_realloc: ptr after strip is %p\n", ptr);
    void* tmpptr=realloc(ptr-8, size);
    DEBUG_PRT("__ptauth_realloc: ptr after realloc() %p\n", tmpptr);

    if (ptr-8!=tmpptr){
        DEBUG_PRT("__ptauth_realloc: ptr are not equals! = %p\n", tmpptr);

        struct Metadata* meta = tmpptr;
        initMD(meta,size);
        unsigned long id = meta->id;
        void* retPtr = (void*)((int*)meta+2);
        DEBUG_PRT("__ptauth_realloc: object pointer location after realloc is  = %p\n", retPtr);

#if PACENABLED
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
#else
        retPtr =__pacia(retPtr,id);
        //meta->id_signature= __pacga(id, (long)meta);
#endif
        DEBUG_PRT("__ptauth_realloc: ptr after realloc and pacia is  = %p\n", retPtr);

       // abort();
        return retPtr;
    }

    else {
        return placeholderptr;
    }


    // Should be implemented!
	//return ptr;
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* validatePointer(void *ptr, char type){
#else
void* validatePointer(void *ptr, char type){
#endif

#if RETURN
    return ptr;
#endif
    if(!ptr){
        return ptr;
    }
    DEBUG_PRT("\n\n\n\t--- validatePointer ...!\n");
	struct Metadata* meta = (struct Metadata*)((char*)ptr-8);
	DEBUG_PRT("metadata location is = %p \n", meta);
	meta = ((void *)((unsigned long long)meta & ~MASKHIGHBIT));
    void* tempPtr = ptr;
    void* xpacedPtr = __xpac(ptr);
    DEBUG_PRT("metadata location  after striping is = %p \n", meta);
    unsigned long id = meta->id;

    if (id!=0 && (__autia(ptr, id, type) == xpacedPtr)) {
        #if TOPBYTEIGNORE
            return ptr;
        #endif
        return xpacedPtr;
    }

    else {
        void* q = backward_search(ptr, meta, type);
        #if TOPBYTEIGNORE
            return ptr;
        #endif
        return q;
    }
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __GEPCheck(void *ptr){
#else
    void* __GEPCheck(void *ptr) {
#endif

#if RETURN
    return ptr;
#endif

    //printf("Pointer in ---GEPCheck is = ! %p\n",ptr);
    unsigned long long signature= (unsigned long long)ptr & ~MASKLOWBIT;
    if(signature){
//        _Z10backtrace1v();
        void* q= validatePointer(ptr, 'L');
        #if TOPBYTEIGNORE
            return ptr;
        #endif
        return q;
    }
    return ptr;
}


#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __nestedGEPCheck(void *ptr){
#else
    void* __nestedGEPCheck(void *ptr) {
#endif

#if RETURN
    return ptr;
#endif

    //printf("Pointer in ---__nestedGEPCheck is = ! %p\n",ptr);
    unsigned long long signature= (unsigned long long)ptr & ~MASKLOWBIT;
    if(signature){
        void* q= validatePointer(ptr, 'L');
#if TOPBYTEIGNORE
        return ptr;
#endif
        return q;
    }
    return ptr;
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __loadCheck(void *ptr){
#else
void* __loadCheck(void *ptr) {
#endif

#if RETURN
    return ptr;
#endif
    //printf("Pointer in ---LoadCheck is = ! %p\n",ptr);
    unsigned long long signature= (unsigned long long)ptr & ~MASKLOWBIT;

    if(signature){
        void* q= validatePointer(ptr, 'L');
        #if TOPBYTEIGNORE
                return ptr;
        #endif
        return q;
    }

#if BACKTRACER
    _Z10backtrace1v();
#endif

#if CRASH
    int* crash = NULL;
    int c = *crash;
#endif
    return ptr;
}

#if INLINEFUNCTIONS
__attribute__((always_inline)) void* __storeCheck(void *ptr){
#else
void* __storeCheck(void *ptr){
#endif

#if RETURN
    return ptr;
#endif
    DEBUG_PRT("\n\n\n\t---__storeCheck---\n");
    unsigned long long signature= (unsigned long long)ptr & ~MASKLOWBIT;

    if(signature){
        void* q= validatePointer(ptr, 'S');
        return q;
    }
    return ptr;
}
