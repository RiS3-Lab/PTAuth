
define whatisit
$(info $(1) origin is ($(origin $(1))) and value is ($($(1))))
endef

CC=clang
$(call whatisit,CC)
target_flags = --target=aarch64-linux-gnu -march=armv8.3-a
bitcode_flags = -emit-llvm -fno-stack-protector
additional_flags = -DSPEC_CPU -DNDEBUG -DSPEC_CPU -DHAVE_CONFIG_H -DSPEC_CPU_LP64

mainmake: spec_main_live_pretend.c parse_args_file.c live.c agc.c approx_cont_mgau.c ascr.c beam.c bio.c case.c ckd_alloc.c cmd_ln.c cmn.c cmn_prior.c cont_mgau.c dict.c dict2pid.c err.c feat.c fillpen.c glist.c gs.c hash.c heap.c hmm.c io.c kb.c kbcore.c lextree.c lm.c lmclass.c logs3.c mdef.c new_fe.c new_fe_sp.c profile.c specrand.c str2words.c subvq.c tmat.c unlimit.c utt.c vector.c vithist.c wid.c

	$(CC) -c -o spec_main_live_pretend.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 spec_main_live_pretend.c
	$(CC) -c -o parse_args_file.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 parse_args_file.c
	$(CC) -c -o live.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 live.c
	$(CC) -c -o agc.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 agc.c
	$(CC) -c -o approx_cont_mgau.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 approx_cont_mgau.c
	$(CC) -c -o ascr.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 ascr.c
	$(CC) -c -o beam.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 beam.c
	$(CC) -c -o bio.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 bio.c
	$(CC) -c -o case.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 case.c
	$(CC) -c -o ckd_alloc.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 ckd_alloc.c
	$(CC) -c -o cmd_ln.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 cmd_ln.c
	$(CC) -c -o cmn.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 cmn.c
	$(CC) -c -o cmn_prior.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 cmn_prior.c
	$(CC) -c -o cont_mgau.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 cont_mgau.c
	$(CC) -c -o dict.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 dict.c
	$(CC) -c -o dict2pid.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 dict2pid.c
	$(CC) -c -o err.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 err.c
	$(CC) -c -o feat.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 feat.c
	$(CC) -c -o fillpen.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 fillpen.c
	$(CC) -c -o glist.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 glist.c
	$(CC) -c -o gs.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 gs.c
	$(CC) -c -o hash.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 hash.c
	$(CC) -c -o heap.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 heap.c
	$(CC) -c -o hmm.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 hmm.c
	$(CC) -c -o io.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 io.c
	$(CC) -c -o kb.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 kb.c
	$(CC) -c -o kbcore.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 kbcore.c
	$(CC) -c -o lextree.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 lextree.c
	$(CC) -c -o lm.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 lm.c
	$(CC) -c -o lmclass.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 lmclass.c
	$(CC) -c -o logs3.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 logs3.c
	$(CC) -c -o mdef.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 mdef.c
	$(CC) -c -o new_fe.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 new_fe.c
	$(CC) -c -o new_fe_sp.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 new_fe_sp.c
	$(CC) -c -o profile.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 profile.c
	$(CC) -c -o specrand.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 specrand.c
	$(CC) -c -o str2words.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 str2words.c
	$(CC) -c -o subvq.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 subvq.c
	$(CC) -c -o tmat.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 tmat.c
	$(CC) -c -o unlimit.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 unlimit.c
	$(CC) -c -o utt.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 utt.c
	$(CC) -c -o vector.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 vector.c
	$(CC) -c -o vithist.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 vithist.c
	$(CC) -c -o wid.o $(additional_flags) $(target_flags) -I. -Ilibutil -O0 wid.c

	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 spec_main_live_pretend.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 parse_args_file.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 live.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 agc.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 approx_cont_mgau.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 ascr.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 beam.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 bio.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 case.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 ckd_alloc.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 cmd_ln.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 cmn.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 cmn_prior.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 cont_mgau.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 dict.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 dict2pid.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 err.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 feat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 fillpen.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 glist.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 gs.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 hash.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 heap.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 hmm.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 io.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 kb.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 kbcore.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 lextree.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 lm.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 lmclass.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 logs3.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 mdef.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 new_fe.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 new_fe_sp.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 profile.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 specrand.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 str2words.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 subvq.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 tmat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 unlimit.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 utt.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 vector.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 vithist.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -Ilibutil -O0 wid.c

	# $(CC) $(additional_flags)  $(target_flags)  -O0  spec_main_live_pretend.o parse_args_file.o live.o agc.o approx_cont_mgau.o ascr.o beam.o bio.o case.o ckd_alloc.o cmd_ln.o cmn.o cmn_prior.o cont_mgau.o dict.o dict2pid.o err.o feat.o fillpen.o glist.o gs.o hash.o heap.o hmm.o io.o kb.o kbcore.o lextree.o lm.o lmclass.o logs3.o mdef.o new_fe.o new_fe_sp.o profile.o specrand.o str2words.o subvq.o tmat.o unlimit.o utt.o vector.o vithist.o wid.o  -lm -o sphinx3-final

	llvm-link spec_main_live_pretend.bc parse_args_file.bc live.bc agc.bc approx_cont_mgau.bc ascr.bc beam.bc bio.bc case.bc ckd_alloc.bc cmd_ln.bc cmn.bc cmn_prior.bc cont_mgau.bc dict.bc dict2pid.bc err.bc feat.bc fillpen.bc glist.bc gs.bc hash.bc heap.bc hmm.bc io.bc kb.bc kbcore.bc lextree.bc lm.bc lmclass.bc logs3.bc mdef.bc new_fe.bc new_fe_sp.bc profile.bc specrand.bc str2words.bc subvq.bc tmat.bc unlimit.bc utt.bc vector.bc vithist.bc wid.bc  -o sphinx3-final.bc
.PHONY: clean

clean: 
	rm -f *.o output core

