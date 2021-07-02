
define whatisit
$(info $(1) origin is ($(origin $(1))) and value is ($($(1))))
endef

CC=clang
$(call whatisit,CC)
target_flags = --target=aarch64-linux-gnu -march=armv8.3-a
bitcode_flags = -emit-llvm -fno-stack-protector
additional_flags = -DSPEC_CPU    -DNDEBUG     -DSPEC_CPU_LP64   -DHAVE_CONFIG_H

mainmake: sgf/sgf_utils.c sgf/sgftree.c sgf/sgfnode.c engine/aftermath.c engine/board.c engine/cache.c engine/combination.c engine/dragon.c engine/filllib.c engine/fuseki.c engine/genmove.c engine/hash.c engine/influence.c engine/interface.c engine/matchpat.c engine/move_reasons.c engine/movelist.c engine/optics.c engine/owl.c engine/printutils.c engine/readconnect.c engine/reading.c engine/score.c engine/semeai.c engine/sgfdecide.c engine/sgffile.c engine/shapes.c engine/showbord.c engine/utils.c engine/value_moves.c engine/worm.c engine/globals.c engine/persistent.c engine/handicap.c engine/surround.c interface/gtp.c interface/main.c interface/play_ascii.c interface/play_gtp.c interface/play_solo.c interface/play_test.c patterns/connections.c patterns/dfa.c patterns/helpers.c patterns/transform.c patterns/owl_attackpat.c patterns/conn.c patterns/patterns.c patterns/apatterns.c patterns/dpatterns.c patterns/owl_vital_apat.c patterns/eyes.c patterns/influence.c patterns/barriers.c patterns/endgame.c patterns/aa_attackpat.c patterns/owl_defendpat.c patterns/fusekipat.c patterns/fuseki9.c patterns/fuseki13.c patterns/fuseki19.c patterns/josekidb.c patterns/handipat.c utils/getopt.c utils/getopt1.c utils/gg_utils.c utils/random.c

	$(CC) -c -o sgf/sgf_utils.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        sgf/sgf_utils.c
	$(CC) -c -o sgf/sgftree.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        sgf/sgftree.c
	$(CC) -c -o sgf/sgfnode.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        sgf/sgfnode.c
	$(CC) -c -o engine/aftermath.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/aftermath.c
	$(CC) -c -o engine/board.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/board.c
	$(CC) -c -o engine/cache.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/cache.c
	$(CC) -c -o engine/combination.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/combination.c
	$(CC) -c -o engine/dragon.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/dragon.c
	$(CC) -c -o engine/filllib.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/filllib.c
	$(CC) -c -o engine/fuseki.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/fuseki.c
	$(CC) -c -o engine/genmove.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/genmove.c
	$(CC) -c -o engine/hash.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/hash.c
	$(CC) -c -o engine/influence.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/influence.c
	$(CC) -c -o engine/interface.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/interface.c
	$(CC) -c -o engine/matchpat.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/matchpat.c
	$(CC) -c -o engine/move_reasons.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/move_reasons.c
	$(CC) -c -o engine/movelist.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/movelist.c
	$(CC) -c -o engine/optics.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/optics.c
	$(CC) -c -o engine/owl.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/owl.c
	$(CC) -c -o engine/printutils.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/printutils.c
	$(CC) -c -o engine/readconnect.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/readconnect.c
	$(CC) -c -o engine/reading.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/reading.c
	$(CC) -c -o engine/score.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/score.c
	$(CC) -c -o engine/semeai.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/semeai.c
	$(CC) -c -o engine/sgfdecide.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/sgfdecide.c
	$(CC) -c -o engine/sgffile.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/sgffile.c
	$(CC) -c -o engine/shapes.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/shapes.c
	$(CC) -c -o engine/showbord.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/showbord.c
	$(CC) -c -o engine/utils.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/utils.c
	$(CC) -c -o engine/value_moves.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/value_moves.c
	$(CC) -c -o engine/worm.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/worm.c
	$(CC) -c -o engine/globals.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/globals.c
	$(CC) -c -o engine/persistent.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/persistent.c
	$(CC) -c -o engine/handicap.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/handicap.c
	$(CC) -c -o engine/surround.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/surround.c
	$(CC) -c -o interface/gtp.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/gtp.c
	$(CC) -c -o interface/main.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/main.c
	$(CC) -c -o interface/play_ascii.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/play_ascii.c
	$(CC) -c -o interface/play_gtp.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/play_gtp.c
	$(CC) -c -o interface/play_solo.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/play_solo.c
	$(CC) -c -o interface/play_test.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/play_test.c
	$(CC) -c -o patterns/connections.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/connections.c
	$(CC) -c -o patterns/dfa.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/dfa.c
	$(CC) -c -o patterns/helpers.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/helpers.c
	$(CC) -c -o patterns/transform.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/transform.c
	$(CC) -c -o patterns/owl_attackpat.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/owl_attackpat.c
	$(CC) -c -o patterns/conn.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/conn.c
	$(CC) -c -o patterns/patterns.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/patterns.c
	$(CC) -c -o patterns/apatterns.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/apatterns.c
	$(CC) -c -o patterns/dpatterns.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/dpatterns.c
	$(CC) -c -o patterns/owl_vital_apat.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/owl_vital_apat.c
	$(CC) -c -o patterns/eyes.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/eyes.c
	$(CC) -c -o patterns/influence.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/influence.c
	$(CC) -c -o patterns/barriers.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/barriers.c
	$(CC) -c -o patterns/endgame.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/endgame.c
	$(CC) -c -o patterns/aa_attackpat.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/aa_attackpat.c
	$(CC) -c -o patterns/owl_defendpat.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/owl_defendpat.c
	$(CC) -c -o patterns/fusekipat.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/fusekipat.c
	$(CC) -c -o patterns/fuseki9.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/fuseki9.c
	$(CC) -c -o patterns/fuseki13.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/fuseki13.c
	$(CC) -c -o patterns/fuseki19.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/fuseki19.c
	$(CC) -c -o patterns/josekidb.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/josekidb.c
	$(CC) -c -o patterns/handipat.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/handipat.c
	$(CC) -c -o utils/getopt.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        utils/getopt.c
	$(CC) -c -o utils/getopt1.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        utils/getopt1.c
	$(CC) -c -o utils/gg_utils.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        utils/gg_utils.c
	$(CC) -c -o utils/random.o $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        utils/random.c

	$(CC) -c -o sgf/sgf_utils.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        sgf/sgf_utils.c
	$(CC) -c -o sgf/sgftree.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        sgf/sgftree.c
	$(CC) -c -o sgf/sgfnode.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        sgf/sgfnode.c
	$(CC) -c -o engine/aftermath.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/aftermath.c
	$(CC) -c -o engine/board.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/board.c
	$(CC) -c -o engine/cache.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/cache.c
	$(CC) -c -o engine/combination.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/combination.c
	$(CC) -c -o engine/dragon.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/dragon.c
	$(CC) -c -o engine/filllib.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/filllib.c
	$(CC) -c -o engine/fuseki.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/fuseki.c
	$(CC) -c -o engine/genmove.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/genmove.c
	$(CC) -c -o engine/hash.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/hash.c
	$(CC) -c -o engine/influence.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/influence.c
	$(CC) -c -o engine/interface.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/interface.c
	$(CC) -c -o engine/matchpat.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/matchpat.c
	$(CC) -c -o engine/move_reasons.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/move_reasons.c
	$(CC) -c -o engine/movelist.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/movelist.c
	$(CC) -c -o engine/optics.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/optics.c
	$(CC) -c -o engine/owl.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/owl.c
	$(CC) -c -o engine/printutils.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/printutils.c
	$(CC) -c -o engine/readconnect.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/readconnect.c
	$(CC) -c -o engine/reading.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/reading.c
	$(CC) -c -o engine/score.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/score.c
	$(CC) -c -o engine/semeai.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/semeai.c
	$(CC) -c -o engine/sgfdecide.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/sgfdecide.c
	$(CC) -c -o engine/sgffile.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/sgffile.c
	$(CC) -c -o engine/shapes.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/shapes.c
	$(CC) -c -o engine/showbord.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/showbord.c
	$(CC) -c -o engine/utils.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/utils.c
	$(CC) -c -o engine/value_moves.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/value_moves.c
	$(CC) -c -o engine/worm.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/worm.c
	$(CC) -c -o engine/globals.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/globals.c
	$(CC) -c -o engine/persistent.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/persistent.c
	$(CC) -c -o engine/handicap.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/handicap.c
	$(CC) -c -o engine/surround.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        engine/surround.c
	$(CC) -c -o interface/gtp.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/gtp.c
	$(CC) -c -o interface/main.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/main.c
	$(CC) -c -o interface/play_ascii.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/play_ascii.c
	$(CC) -c -o interface/play_gtp.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/play_gtp.c
	$(CC) -c -o interface/play_solo.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/play_solo.c
	$(CC) -c -o interface/play_test.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        interface/play_test.c
	$(CC) -c -o patterns/connections.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/connections.c
	$(CC) -c -o patterns/dfa.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/dfa.c
	$(CC) -c -o patterns/helpers.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/helpers.c
	$(CC) -c -o patterns/transform.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/transform.c
	$(CC) -c -o patterns/owl_attackpat.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/owl_attackpat.c
	$(CC) -c -o patterns/conn.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/conn.c
	$(CC) -c -o patterns/patterns.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/patterns.c
	$(CC) -c -o patterns/apatterns.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/apatterns.c
	$(CC) -c -o patterns/dpatterns.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/dpatterns.c
	$(CC) -c -o patterns/owl_vital_apat.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/owl_vital_apat.c
	$(CC) -c -o patterns/eyes.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/eyes.c
	$(CC) -c -o patterns/influence.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/influence.c
	$(CC) -c -o patterns/barriers.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/barriers.c
	$(CC) -c -o patterns/endgame.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/endgame.c
	$(CC) -c -o patterns/aa_attackpat.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/aa_attackpat.c
	$(CC) -c -o patterns/owl_defendpat.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/owl_defendpat.c
	$(CC) -c -o patterns/fusekipat.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/fusekipat.c
	$(CC) -c -o patterns/fuseki9.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/fuseki9.c
	$(CC) -c -o patterns/fuseki13.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/fuseki13.c
	$(CC) -c -o patterns/fuseki19.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/fuseki19.c
	$(CC) -c -o patterns/josekidb.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/josekidb.c
	$(CC) -c -o patterns/handipat.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        patterns/handipat.c
	$(CC) -c -o utils/getopt.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        utils/getopt.c
	$(CC) -c -o utils/getopt1.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        utils/getopt1.c
	$(CC) -c -o utils/gg_utils.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        utils/gg_utils.c
	$(CC) -c -o utils/random.bc $(bitcode_flags) $(additional_flags) $(target_flags) -I. -I.. -I../include -I./include   -O0        utils/random.c

	# $(CC) $(additional_flags)  $(target_flags)  -O0  sgf/sgf_utils.o sgf/sgftree.o sgf/sgfnode.o engine/aftermath.o engine/board.o engine/cache.o engine/combination.o engine/dragon.o engine/filllib.o engine/fuseki.o engine/genmove.o engine/hash.o engine/influence.o engine/interface.o engine/matchpat.o engine/move_reasons.o engine/movelist.o engine/optics.o engine/owl.o engine/printutils.o engine/readconnect.o engine/reading.o engine/score.o engine/semeai.o engine/sgfdecide.o engine/sgffile.o engine/shapes.o engine/showbord.o engine/utils.o engine/value_moves.o engine/worm.o engine/globals.o engine/persistent.o engine/handicap.o engine/surround.o interface/gtp.o interface/main.o interface/play_ascii.o interface/play_gtp.o interface/play_solo.o interface/play_test.o patterns/connections.o patterns/dfa.o patterns/helpers.o patterns/transform.o patterns/owl_attackpat.o patterns/conn.o patterns/patterns.o patterns/apatterns.o patterns/dpatterns.o patterns/owl_vital_apat.o patterns/eyes.o patterns/influence.o patterns/barriers.o patterns/endgame.o patterns/aa_attackpat.o patterns/owl_defendpat.o patterns/fusekipat.o patterns/fuseki9.o patterns/fuseki13.o patterns/fuseki19.o patterns/josekidb.o patterns/handipat.o utils/getopt.o utils/getopt1.o utils/gg_utils.o utils/random.o             -lm        -o gobmk-final

	llvm-link sgf/sgf_utils.bc sgf/sgftree.bc sgf/sgfnode.bc engine/aftermath.bc engine/board.bc engine/cache.bc engine/combination.bc engine/dragon.bc engine/filllib.bc engine/fuseki.bc engine/genmove.bc engine/hash.bc engine/influence.bc engine/interface.bc engine/matchpat.bc engine/move_reasons.bc engine/movelist.bc engine/optics.bc engine/owl.bc engine/printutils.bc engine/readconnect.bc engine/reading.bc engine/score.bc engine/semeai.bc engine/sgfdecide.bc engine/sgffile.bc engine/shapes.bc engine/showbord.bc engine/utils.bc engine/value_moves.bc engine/worm.bc engine/globals.bc engine/persistent.bc engine/handicap.bc engine/surround.bc interface/gtp.bc interface/main.bc interface/play_ascii.bc interface/play_gtp.bc interface/play_solo.bc interface/play_test.bc patterns/connections.bc patterns/dfa.bc patterns/helpers.bc patterns/transform.bc patterns/owl_attackpat.bc patterns/conn.bc patterns/patterns.bc patterns/apatterns.bc patterns/dpatterns.bc patterns/owl_vital_apat.bc patterns/eyes.bc patterns/influence.bc patterns/barriers.bc patterns/endgame.bc patterns/aa_attackpat.bc patterns/owl_defendpat.bc patterns/fusekipat.bc patterns/fuseki9.bc patterns/fuseki13.bc patterns/fuseki19.bc patterns/josekidb.bc patterns/handipat.bc utils/getopt.bc utils/getopt1.bc utils/gg_utils.bc utils/random.bc -o gobmk-final.bc
.PHONY: clean

clean: 
	rm -f *.o output core

