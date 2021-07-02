define whatisit
$(info $(1) origin is ($(origin $(1))) and value is ($($(1))))
endef

CC=clang
$(call whatisit,CC)
target_flags = --target=aarch64-linux-gnu -march=armv8.3-a -g
bitcode_flags = -emit-llvm -fno-stack-protector

mainmake: classic.c complex.c decoherence.c expn.c gates.c matrix.c measure.c oaddn.c objcode.c omuln.c qec.c qft.c qureg.c shor.c version.c specrand.c

	$(CC) -c -o classic.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     classic.c
	$(CC) -c -o complex.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     complex.c
	$(CC) -c -o decoherence.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    decoherence.c
	$(CC) -c -o expn.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    expn.c
	$(CC) -c -o gates.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     gates.c
	$(CC) -c -o matrix.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX  $(target_flags)      matrix.c
	$(CC) -c -o measure.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     measure.c
	$(CC) -c -o oaddn.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     oaddn.c
	$(CC) -c -o objcode.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     objcode.c
	$(CC) -c -o omuln.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     omuln.c
	$(CC) -c -o qec.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     qec.c
	$(CC) -c -o qft.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    qft.c
	$(CC) -c -o qureg.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     qureg.c
	$(CC) -c -o shor.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    shor.c
	$(CC) -c -o version.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    version.c
	$(CC) -c -o specrand.o -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     specrand.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     classic.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     complex.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    decoherence.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    expn.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     gates.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX  $(target_flags)      matrix.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     measure.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     oaddn.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     objcode.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     omuln.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     qec.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    qft.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     qureg.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    shor.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX    $(target_flags)    version.c
	$(CC) -c $(bitcode_flags) -DSPEC_CPU -DNDEBUG    -O0       -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)     specrand.c
	$(CC)   -O0  -DSPEC_CPU_LP64 -DSPEC_CPU_LINUX   $(target_flags)    classic.o complex.o decoherence.o expn.o gates.o matrix.o measure.o oaddn.o objcode.o omuln.o qec.o qft.o qureg.o shor.o version.o specrand.o             -lm        -o libquantum-final
	llvm-link classic.bc complex.bc decoherence.bc expn.bc gates.bc matrix.bc measure.bc oaddn.bc objcode.bc omuln.bc qec.bc qft.bc qureg.bc shor.bc version.bc specrand.bc -o libquantum-final.bc
.PHONY: clean

clean: 
	rm -f *.o output core
