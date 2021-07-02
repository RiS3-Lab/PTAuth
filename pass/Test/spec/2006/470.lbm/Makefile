define whatisit
$(info $(1) origin is ($(origin $(1))) and value is ($($(1))))
endef

CC=clang
$(call whatisit,CC)
target_flags = --target=aarch64-linux-gnu -march=armv8.3-a -g
bitcode_flags = -emit-llvm -fno-stack-protector

mainmake: lbm.c main.c

	$(CC) -c -o lbm.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     lbm.c
	$(CC) -c -o main.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64    $(target_flags)     main.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG  -O0       -DSPEC_CPU_LP64    $(target_flags)     lbm.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG   -O0       -DSPEC_CPU_LP64    $(target_flags)     main.c
	$(CC)   -O0  -DSPEC_CPU_LP64    $(target_flags)    lbm.o main.o             -lm        -o lbm-final
	llvm-link lbm.bc main.bc -o lbm-final.bc
.PHONY: clean

clean: 
	rm -f *.o output core
