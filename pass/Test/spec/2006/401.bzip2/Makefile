define whatisit
$(info $(1) origin is ($(origin $(1))) and value is ($($(1))))
endef

CC=clang
$(call whatisit,CC)
target_flags = --target=aarch64-linux-gnu -march=armv8.3-a -g
bitcode_flags = -emit-llvm -fno-stack-protector

mainmake: spec.c blocksort.c bzip2.c bzlib.c compress.c crctable.c decompress.c huffman.c randtable.c

	$(CC) -c -o spec.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64     $(target_flags)   spec.c
	$(CC) -c -o blocksort.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     blocksort.c
	$(CC) -c -o bzip2.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64     $(target_flags)    bzip2.c
	$(CC) -c -o bzlib.o -DSPEC_CPU -DNDEBUG    -O2       -DSPEC_CPU_LP64     $(target_flags)    bzlib.c
	$(CC) -c -o compress.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     compress.c
	$(CC) -c -o crctable.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64     $(target_flags)    crctable.c
	$(CC) -c -o decompress.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      decompress.c
	$(CC) -c -o huffman.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     huffman.c
	$(CC) -c -o randtable.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     randtable.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     spec.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      blocksort.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      bzip2.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     bzlib.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     compress.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     crctable.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      decompress.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     huffman.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     randtable.c
	$(CC)   -O0  -DSPEC_CPU_LP64   $(target_flags)     spec.o blocksort.o bzip2.o bzlib.o compress.o crctable.o decompress.o huffman.o randtable.o                     -o bzip2-final
	llvm-link spec.bc blocksort.bc bzip2.bc bzlib.bc compress.bc crctable.bc decompress.bc huffman.bc randtable.bc                     -o bzip2-final.bc
.PHONY: clean

clean: 
	rm -f *.o output core
