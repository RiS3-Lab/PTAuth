#ifndef INSTRUMENT_CONFIG_H
#define INSTRUMENT_CONFIG_H

extern unsigned long long MASKHIGHBIT;
extern unsigned long long MASKLOWBIT;
extern unsigned long long MASK7BITS;


#define DEBUG 0                // Verbose mode to print detailed information about pointers and objects
#define PACENABLED 0           // Software implementation of PAC instructions VS actual ARMv8.3 PAC instructions
#define RETURN 0               // Turn functions of NOP functions for testing and debugging purposes
#define INLINEFUNCTIONS  1     // To make the functions inline
#define BKTHREASHOLDENABLED 1  // Enable Threshold for backward search
#define TOPBYTEIGNORE 1        // To enable Top-Byte Ignore
#define PERFORMANCE 0
#define ENABLELOG 1
#define PR_TAGGED_ADDR_ENABLE        (1UL << 0)

#if TOPBYTEIGNORE
    #define SHIFT 56
#else
    #define SHIFT 48
#endif

#if DEBUG
# define DEBUG_PRT printf("\t");printf
#else
# define DEBUG_PRT(...)
#endif


#if PERFORMANCE
#define TICK(X) clock_t X = clock()
#define TOCK_ALL(X,Y) Y=((double)(clock() - (X)) / CLOCKS_PER_SEC)+Y; //printf("%s:%f\n", (#Y), Y)
#else
#define TICK(...)
#define TOCK(...)
#define TOCK_ALL(...)
#endif

#endif //INSTRUMENT_CONFIG_H
