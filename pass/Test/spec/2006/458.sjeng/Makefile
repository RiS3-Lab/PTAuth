define whatisit
$(info $(1) origin is ($(origin $(1))) and value is ($($(1))))
endef

CC=clang
$(call whatisit,CC)
target_flags = --target=aarch64-linux-gnu -march=armv8.3-a -g
bitcode_flags = -emit-llvm -fno-stack-protector

mainmake: attacks.c book.c crazy.c draw.c ecache.c epd.c eval.c leval.c moves.c neval.c partner.c proof.c rcfile.c search.c see.c seval.c sjeng.c ttable.c utils.c

	$(CC) -c -o attacks.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64  $(target_flags)       attacks.c
	$(CC) -c -o book.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     book.c
	$(CC) -c -o crazy.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      crazy.c
	$(CC) -c -o draw.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      draw.c
	$(CC) -c -o ecache.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     ecache.c
	$(CC) -c -o epd.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     epd.c
	$(CC) -c -o eval.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     eval.c
	$(CC) -c -o leval.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     leval.c
	$(CC) -c -o moves.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     moves.c
	$(CC) -c -o neval.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     neval.c
	$(CC) -c -o partner.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      partner.c
	$(CC) -c -o proof.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      proof.c
	$(CC) -c -o rcfile.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      rcfile.c
	$(CC) -c -o search.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     search.c
	$(CC) -c -o see.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     see.c
	$(CC) -c -o seval.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      seval.c
	$(CC) -c -o sjeng.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     sjeng.c
	$(CC) -c -o ttable.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     ttable.c
	$(CC) -c -o utils.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64   $(target_flags)      utils.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) attacks.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) book.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) crazy.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) draw.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) ecache.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) epd.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) eval.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) leval.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) moves.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) neval.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) partner.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) proof.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) rcfile.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) search.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) see.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) seval.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) sjeng.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) ttable.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG -O0 -DSPEC_CPU_LP64 $(target_flags) utils.c
	$(CC)   -O0  -DSPEC_CPU_LP64    $(target_flags)    attacks.o book.o crazy.o draw.o ecache.o epd.o eval.o leval.o moves.o neval.o partner.o proof.o rcfile.o search.o see.o seval.o sjeng.o ttable.o utils.o                     -o sjeng-final
	llvm-link attacks.bc book.bc crazy.bc draw.bc ecache.bc epd.bc eval.bc leval.bc moves.bc neval.bc partner.bc proof.bc rcfile.bc search.bc see.bc seval.bc sjeng.bc ttable.bc utils.bc -o sjeng-final.bc
.PHONY: clean

clean: 
	rm -f *.o output core
