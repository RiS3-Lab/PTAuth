define whatisit
$(info $(1) origin is ($(origin $(1))) and value is ($($(1))))
endef

CC=clang
$(call whatisit,CC)
target_flags = --target=aarch64-linux-gnu -march=armv8.3-a -g
bitcode_flags = -emit-llvm -fno-stack-protector

mainmake: mcf.c mcfutil.c readmin.c implicit.c pstart.c output.c treeup.c pbla.c pflowup.c psimplex.c pbeampp.c

	$(CC) -c -o mcf.o -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     mcf.c
	$(CC) -c -o mcfutil.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     mcfutil.c
	$(CC) -c -o readmin.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     readmin.c
	$(CC) -c -o implicit.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     implicit.c
	$(CC) -c -o pstart.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     pstart.c
	$(CC) -c -o output.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     output.c
	$(CC) -c -o treeup.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     treeup.c
	$(CC) -c -o pbla.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     pbla.c
	$(CC) -c -o pflowup.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     pflowup.c
	$(CC) -c -o psimplex.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     psimplex.c
	$(CC) -c -o pbeampp.o -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64     $(target_flags)    pbeampp.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     mcf.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     mcfutil.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     readmin.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64   $(target_flags)      implicit.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64   $(target_flags)      pstart.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64   $(target_flags)      output.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     treeup.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64    $(target_flags)     pbla.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64   $(target_flags)      pflowup.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64   $(target_flags)      psimplex.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -DWANT_STDC_PROTO  -O0       -DSPEC_CPU_LP64   $(target_flags)      pbeampp.c
	$(CC)   -O0  -DSPEC_CPU_LP64   $(target_flags)     mcf.o mcfutil.o readmin.o implicit.o pstart.o output.o treeup.o pbla.o pflowup.o psimplex.o pbeampp.o     -lm -o mcf-final
	llvm-link mcf.bc mcfutil.bc readmin.bc implicit.bc pstart.bc output.bc treeup.bc pbla.bc pflowup.bc psimplex.bc pbeampp.bc -o mcf-final.bc
.PHONY: clean

clean: 
	rm -f *.o output core
