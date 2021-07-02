#define __STDC_FORMAT_MACROS
#include <inttypes.h>

#define UNW_LOCAL_ONLY
#include <libunwind.h>

//#include <cxxabi.h>

#include <stdio.h>
#include <stdlib.h>

#define STDERROR 1
#define STDOUTPUT 0

// How to extract the bitcodes
// /home/ubuntu/clang+llvm-6.0.1-aarch64-linux-gnu/bin/clang++  -c -emit-llvm backtrace.c  -o backtrace.bc -g

#if STDERROR
#define STREAM stderr
#endif

#if STDOUTPUT
# define STREAM stdout
#endif

void backtrace1() {

  fprintf(STREAM," Backtrace ...\n");

  unw_cursor_t cursor;
  unw_context_t context;

  // Initialize cursor to current frame for local unwinding.
  unw_getcontext(&context);
  unw_init_local(&cursor, &context);

  // Unwind frames one by one, going up the frame stack.
  while (unw_step(&cursor) > 0) {
    unw_word_t offset, pc;
    unw_get_reg(&cursor, UNW_REG_IP, &pc);
    if (pc == 0) {
      break;
    }
    fprintf(STREAM,"\t 0x%lx:", pc);

    char sym[256];
    if (unw_get_proc_name(&cursor, sym, sizeof(sym), &offset) == 0) {
      fprintf(STREAM,"\t (%s+0x%lx)\n", sym, offset);
    } else {
      fprintf(STREAM," -- error: unable to obtain symbol name for this frame\n");
    }
  }
}

void backtrace2()
{
  unw_cursor_t cursor;
  unw_context_t context;

  unw_getcontext(&context);
  unw_init_local(&cursor, &context);

	printf("Let's go backtrace!\n");
  int n=0;
  while ( unw_step(&cursor) ) {
    unw_word_t ip, sp, off;

    unw_get_reg(&cursor, UNW_REG_IP, &ip);
    unw_get_reg(&cursor, UNW_REG_SP, &sp);

    char symbol[256] = {"<unknown>"};
    char *name = symbol;
	printf("symbol and name = %s\n",symbol);
    if ( !unw_get_proc_name(&cursor, symbol, sizeof(symbol), &off) ) {
        int status;
        //if ( (name = abi::__cxa_demangle(symbol, NULL, NULL, &status)) == 0 )
		printf("symbol = %s\n",symbol);
        name = symbol;
    }

    printf("#%-2d 0x%016" PRIxPTR " sp=0x%016" PRIxPTR " %s + 0x%" PRIxPTR "\n",
        ++n,
        ip,
        sp,
        name,
        off);

    if ( name != symbol )
      free(name);
  }
}

int fac(int n)
{
  if ( n == 0 ) {
    backtrace1();
    return 1;
  } else {
    return n*fac(n-1);
  }
}

//int main()
//{
//  fac(10);
//  return 0;
//}
