
define whatisit
$(info $(1) origin is ($(origin $(1))) and value is ($($(1))))
endef

CC=clang
$(call whatisit,CC)
target_flags = --target=aarch64-linux-gnu -march=armv8.3-a
bitcode_flags = -emit-llvm -fno-stack-protector
additional_flags = -DSPEC_CPU -DNDEBUG -DSPEC_CPU_LP64

mainmake: annexb.c biariencode.c block.c cabac.c configfile.c context_ini.c decoder.c explicit_gop.c fast_me.c filehandle.c fmo.c header.c image.c intrarefresh.c leaky_bucket.c lencod.c loopFilter.c macroblock.c mb_access.c mbuffer.c memalloc.c mv-search.c nal.c nalu.c nalucommon.c output.c parset.c parsetcommon.c q_matrix.c q_offsets.c ratectl.c rdopt.c rdopt_coding_state.c rdpicdecision.c refbuf.c rtp.c sei.c slice.c transform8x8.c vlc.c weighted_prediction.c specrand.c

	$(CC) -c -o annexb.o $(additional_flags) $(target_flags) -O0 annexb.c
	$(CC) -c -o biariencode.o $(additional_flags) $(target_flags) -O0 biariencode.c
	$(CC) -c -o block.o $(additional_flags) $(target_flags) -O0 block.c
	$(CC) -c -o cabac.o $(additional_flags) $(target_flags) -O0 cabac.c
	$(CC) -c -o configfile.o $(additional_flags) $(target_flags) -O0 configfile.c
	$(CC) -c -o context_ini.o $(additional_flags) $(target_flags) -O0 context_ini.c
	$(CC) -c -o decoder.o $(additional_flags) $(target_flags) -O0 decoder.c
	$(CC) -c -o explicit_gop.o $(additional_flags) $(target_flags) -O0 explicit_gop.c
	$(CC) -c -o fast_me.o $(additional_flags) $(target_flags) -O0 fast_me.c
	$(CC) -c -o filehandle.o $(additional_flags) $(target_flags) -O0 filehandle.c
	$(CC) -c -o fmo.o $(additional_flags) $(target_flags) -O0 fmo.c
	$(CC) -c -o header.o $(additional_flags) $(target_flags) -O0 header.c
	$(CC) -c -o image.o $(additional_flags) $(target_flags) -O0 image.c
	$(CC) -c -o intrarefresh.o $(additional_flags) $(target_flags) -O0 intrarefresh.c
	$(CC) -c -o leaky_bucket.o $(additional_flags) $(target_flags) -O0 leaky_bucket.c
	$(CC) -c -o lencod.o $(additional_flags) $(target_flags) -O0 lencod.c
	$(CC) -c -o loopFilter.o $(additional_flags) $(target_flags) -O0 loopFilter.c
	$(CC) -c -o macroblock.o $(additional_flags) $(target_flags) -O0 macroblock.c
	$(CC) -c -o mb_access.o $(additional_flags) $(target_flags) -O0 mb_access.c
	$(CC) -c -o mbuffer.o $(additional_flags) $(target_flags) -O0 mbuffer.c
	$(CC) -c -o memalloc.o $(additional_flags) $(target_flags) -O0 memalloc.c
	$(CC) -c -o mv-search.o $(additional_flags) $(target_flags) -O0 mv-search.c
	$(CC) -c -o nal.o $(additional_flags) $(target_flags) -O0 nal.c
	$(CC) -c -o nalu.o $(additional_flags) $(target_flags) -O0 nalu.c
	$(CC) -c -o nalucommon.o $(additional_flags) $(target_flags) -O0 nalucommon.c
	$(CC) -c -o output.o $(additional_flags) $(target_flags) -O0 output.c
	$(CC) -c -o parset.o $(additional_flags) $(target_flags) -O0 parset.c
	$(CC) -c -o parsetcommon.o $(additional_flags) $(target_flags) -O0 parsetcommon.c
	$(CC) -c -o q_matrix.o $(additional_flags) $(target_flags) -O0 q_matrix.c
	$(CC) -c -o q_offsets.o $(additional_flags) $(target_flags) -O0 q_offsets.c
	$(CC) -c -o ratectl.o $(additional_flags) $(target_flags) -O0 ratectl.c
	$(CC) -c -o rdopt.o $(additional_flags) $(target_flags) -O0 rdopt.c
	$(CC) -c -o rdopt_coding_state.o $(additional_flags) $(target_flags) -O0 rdopt_coding_state.c
	$(CC) -c -o rdpicdecision.o $(additional_flags) $(target_flags) -O0 rdpicdecision.c
	$(CC) -c -o refbuf.o $(additional_flags) $(target_flags) -O0 refbuf.c
	$(CC) -c -o rtp.o $(additional_flags) $(target_flags) -O0 rtp.c
	$(CC) -c -o sei.o $(additional_flags) $(target_flags) -O0 sei.c
	$(CC) -c -o slice.o $(additional_flags) $(target_flags) -O0 slice.c
	$(CC) -c -o transform8x8.o $(additional_flags) $(target_flags) -O0 transform8x8.c
	$(CC) -c -o vlc.o $(additional_flags) $(target_flags) -O0 vlc.c
	$(CC) -c -o weighted_prediction.o $(additional_flags) $(target_flags) -O0 weighted_prediction.c
	$(CC) -c -o specrand.o $(additional_flags) $(target_flags) -O0 specrand.c

	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 annexb.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 biariencode.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 block.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 cabac.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 configfile.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 context_ini.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 decoder.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 explicit_gop.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 fast_me.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 filehandle.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 fmo.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 header.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 image.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 intrarefresh.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 leaky_bucket.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 lencod.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 loopFilter.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 macroblock.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 mb_access.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 mbuffer.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 memalloc.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 mv-search.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 nal.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 nalu.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 nalucommon.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 output.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 parset.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 parsetcommon.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 q_matrix.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 q_offsets.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 ratectl.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 rdopt.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 rdopt_coding_state.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 rdpicdecision.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 refbuf.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 rtp.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 sei.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 slice.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 transform8x8.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 vlc.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 weighted_prediction.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -O0 specrand.c

	# $(CC) $(additional_flags) $(target_flags) -O0  annexb.o biariencode.o block.o cabac.o configfile.o context_ini.o decoder.o explicit_gop.o fast_me.o filehandle.o fmo.o header.o image.o intrarefresh.o leaky_bucket.o lencod.o loopFilter.o macroblock.o mb_access.o mbuffer.o memalloc.o mv-search.o nal.o nalu.o nalucommon.o output.o parset.o parsetcommon.o q_matrix.o q_offsets.o ratectl.o rdopt.o rdopt_coding_state.o rdpicdecision.o refbuf.o rtp.o sei.o slice.o transform8x8.o vlc.o weighted_prediction.o specrand.o  -lm -o h264ref-final

	llvm-link annexb.bc biariencode.bc block.bc cabac.bc configfile.bc context_ini.bc decoder.bc explicit_gop.bc fast_me.bc filehandle.bc fmo.bc header.bc image.bc intrarefresh.bc leaky_bucket.bc lencod.bc loopFilter.bc macroblock.bc mb_access.bc mbuffer.bc memalloc.bc mv-search.bc nal.bc nalu.bc nalucommon.bc output.bc parset.bc parsetcommon.bc q_matrix.bc q_offsets.bc ratectl.bc rdopt.bc rdopt_coding_state.bc rdpicdecision.bc refbuf.bc rtp.bc sei.bc slice.bc transform8x8.bc vlc.bc weighted_prediction.bc specrand.bc -o h264ref-final.bc
.PHONY: clean

clean: 
	rm -f *.o output core


