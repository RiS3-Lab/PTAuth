
define whatisit
$(info $(1) origin is ($(origin $(1))) and value is ($($(1))))
endef

CC=clang
$(call whatisit,CC)
target_flags = --target=aarch64-linux-gnu -march=armv8.3-a
bitcode_flags = -emit-llvm -fno-stack-protector
additional_flags = -DSPEC_CPU -DNDEBUG -DSPEC_CPU_LP64 -DFN -DFAST -DCONGRAD_TMP_VECTORS -DDSLASH_TMP_LINKS

mainmake: control.c f_meas.c gauge_info.c setup.c update.c update_h.c update_u.c layout_hyper.c check_unitarity.c d_plaq4.c gaugefix2.c io_helpers.c io_lat4.c make_lattice.c path_product.c ploop3.c ranmom.c ranstuff.c reunitarize2.c gauge_stuff.c grsource_imp.c mat_invert.c quark_stuff.c rephase.c cmplx.c addmat.c addvec.c clear_mat.c clearvec.c m_amatvec.c m_mat_an.c m_mat_na.c m_mat_nn.c m_matvec.c make_ahmat.c rand_ahmat.c realtr.c s_m_a_mat.c s_m_a_vec.c s_m_s_mat.c s_m_vec.c s_m_mat.c su3_adjoint.c su3_dot.c su3_rdot.c su3_proj.c su3mat_copy.c submat.c subvec.c trace_su3.c uncmp_ahmat.c msq_su3vec.c sub4vecs.c m_amv_4dir.c m_amv_4vec.c m_mv_s_4dir.c m_su2_mat_vec_n.c l_su2_hit_n.c r_su2_hit_a.c m_su2_mat_vec_a.c gaussrand.c byterevn.c m_mat_hwvec.c m_amat_hwvec.c dslash_fn2.c d_congrad5_fn.c com_vanilla.c io_nonansi.c

	$(CC) -c -o control.o $(additional_flags) $(target_flags) -I. -O0 control.c
	$(CC) -c -o f_meas.o $(additional_flags) $(target_flags) -I. -O0 f_meas.c
	$(CC) -c -o gauge_info.o $(additional_flags) $(target_flags) -I. -O0 gauge_info.c
	$(CC) -c -o setup.o $(additional_flags) $(target_flags) -I. -O0 setup.c
	$(CC) -c -o update.o $(additional_flags) $(target_flags) -I. -O0 update.c
	$(CC) -c -o update_h.o $(additional_flags) $(target_flags) -I. -O0 update_h.c
	$(CC) -c -o update_u.o $(additional_flags) $(target_flags) -I. -O0 update_u.c
	$(CC) -c -o layout_hyper.o $(additional_flags) $(target_flags) -I. -O0 layout_hyper.c
	$(CC) -c -o check_unitarity.o $(additional_flags) $(target_flags) -I. -O0 check_unitarity.c
	$(CC) -c -o d_plaq4.o $(additional_flags) $(target_flags) -I. -O0 d_plaq4.c
	$(CC) -c -o gaugefix2.o $(additional_flags) $(target_flags) -I. -O0 gaugefix2.c
	$(CC) -c -o io_helpers.o $(additional_flags) $(target_flags) -I. -O0 io_helpers.c
	$(CC) -c -o io_lat4.o $(additional_flags) $(target_flags) -I. -O0 io_lat4.c
	$(CC) -c -o make_lattice.o $(additional_flags) $(target_flags) -I. -O0 make_lattice.c
	$(CC) -c -o path_product.o $(additional_flags) $(target_flags) -I. -O0 path_product.c
	$(CC) -c -o ploop3.o $(additional_flags) $(target_flags) -I. -O0 ploop3.c
	$(CC) -c -o ranmom.o $(additional_flags) $(target_flags) -I. -O0 ranmom.c
	$(CC) -c -o ranstuff.o $(additional_flags) $(target_flags) -I. -O0 ranstuff.c
	$(CC) -c -o reunitarize2.o $(additional_flags) $(target_flags) -I. -O0 reunitarize2.c
	$(CC) -c -o gauge_stuff.o $(additional_flags) $(target_flags) -I. -O0 gauge_stuff.c
	$(CC) -c -o grsource_imp.o $(additional_flags) $(target_flags) -I. -O0 grsource_imp.c
	$(CC) -c -o mat_invert.o $(additional_flags) $(target_flags) -I. -O0 mat_invert.c
	$(CC) -c -o quark_stuff.o $(additional_flags) $(target_flags) -I. -O0 quark_stuff.c
	$(CC) -c -o rephase.o $(additional_flags) $(target_flags) -I. -O0 rephase.c
	$(CC) -c -o cmplx.o $(additional_flags) $(target_flags) -I. -O0 cmplx.c
	$(CC) -c -o addmat.o $(additional_flags) $(target_flags) -I. -O0 addmat.c
	$(CC) -c -o addvec.o $(additional_flags) $(target_flags) -I. -O0 addvec.c
	$(CC) -c -o clear_mat.o $(additional_flags) $(target_flags) -I. -O0 clear_mat.c
	$(CC) -c -o clearvec.o $(additional_flags) $(target_flags) -I. -O0 clearvec.c
	$(CC) -c -o m_amatvec.o $(additional_flags) $(target_flags) -I. -O0 m_amatvec.c
	$(CC) -c -o m_mat_an.o $(additional_flags) $(target_flags) -I. -O0 m_mat_an.c
	$(CC) -c -o m_mat_na.o $(additional_flags) $(target_flags) -I. -O0 m_mat_na.c
	$(CC) -c -o m_mat_nn.o $(additional_flags) $(target_flags) -I. -O0 m_mat_nn.c
	$(CC) -c -o m_matvec.o $(additional_flags) $(target_flags) -I. -O0 m_matvec.c
	$(CC) -c -o make_ahmat.o $(additional_flags) $(target_flags) -I. -O0 make_ahmat.c
	$(CC) -c -o rand_ahmat.o $(additional_flags) $(target_flags) -I. -O0 rand_ahmat.c
	$(CC) -c -o realtr.o $(additional_flags) $(target_flags) -I. -O0 realtr.c
	$(CC) -c -o s_m_a_mat.o $(additional_flags) $(target_flags) -I. -O0 s_m_a_mat.c
	$(CC) -c -o s_m_a_vec.o $(additional_flags) $(target_flags) -I. -O0 s_m_a_vec.c
	$(CC) -c -o s_m_s_mat.o $(additional_flags) $(target_flags) -I. -O0 s_m_s_mat.c
	$(CC) -c -o s_m_vec.o $(additional_flags) $(target_flags) -I. -O0 s_m_vec.c
	$(CC) -c -o s_m_mat.o $(additional_flags) $(target_flags) -I. -O0 s_m_mat.c
	$(CC) -c -o su3_adjoint.o $(additional_flags) $(target_flags) -I. -O0 su3_adjoint.c
	$(CC) -c -o su3_dot.o $(additional_flags) $(target_flags) -I. -O0 su3_dot.c
	$(CC) -c -o su3_rdot.o $(additional_flags) $(target_flags) -I. -O0 su3_rdot.c
	$(CC) -c -o su3_proj.o $(additional_flags) $(target_flags) -I. -O0 su3_proj.c
	$(CC) -c -o su3mat_copy.o $(additional_flags) $(target_flags) -I. -O0 su3mat_copy.c
	$(CC) -c -o submat.o $(additional_flags) $(target_flags) -I. -O0 submat.c
	$(CC) -c -o subvec.o $(additional_flags) $(target_flags) -I. -O0 subvec.c
	$(CC) -c -o trace_su3.o $(additional_flags) $(target_flags) -I. -O0 trace_su3.c
	$(CC) -c -o uncmp_ahmat.o $(additional_flags) $(target_flags) -I. -O0 uncmp_ahmat.c
	$(CC) -c -o msq_su3vec.o $(additional_flags) $(target_flags) -I. -O0 msq_su3vec.c
	$(CC) -c -o sub4vecs.o $(additional_flags) $(target_flags) -I. -O0 sub4vecs.c
	$(CC) -c -o m_amv_4dir.o $(additional_flags) $(target_flags) -I. -O0 m_amv_4dir.c
	$(CC) -c -o m_amv_4vec.o $(additional_flags) $(target_flags) -I. -O0 m_amv_4vec.c
	$(CC) -c -o m_mv_s_4dir.o $(additional_flags) $(target_flags) -I. -O0 m_mv_s_4dir.c
	$(CC) -c -o m_su2_mat_vec_n.o $(additional_flags) $(target_flags) -I. -O0 m_su2_mat_vec_n.c
	$(CC) -c -o l_su2_hit_n.o $(additional_flags) $(target_flags) -I. -O0 l_su2_hit_n.c
	$(CC) -c -o r_su2_hit_a.o $(additional_flags) $(target_flags) -I. -O0 r_su2_hit_a.c
	$(CC) -c -o m_su2_mat_vec_a.o $(additional_flags) $(target_flags) -I. -O0 m_su2_mat_vec_a.c
	$(CC) -c -o gaussrand.o $(additional_flags) $(target_flags) -I. -O0 gaussrand.c
	$(CC) -c -o byterevn.o $(additional_flags) $(target_flags) -I. -O0 byterevn.c
	$(CC) -c -o m_mat_hwvec.o $(additional_flags) $(target_flags) -I. -O0 m_mat_hwvec.c
	$(CC) -c -o m_amat_hwvec.o $(additional_flags) $(target_flags) -I. -O0 m_amat_hwvec.c
	$(CC) -c -o dslash_fn2.o $(additional_flags) $(target_flags) -I. -O0 dslash_fn2.c
	$(CC) -c -o d_congrad5_fn.o $(additional_flags) $(target_flags) -I. -O0 d_congrad5_fn.c
	$(CC) -c -o com_vanilla.o $(additional_flags) $(target_flags) -I. -O0 com_vanilla.c
	$(CC) -c -o io_nonansi.o $(additional_flags) $(target_flags) -I. -O0 io_nonansi.c

	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 control.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 f_meas.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 gauge_info.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 setup.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 update.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 update_h.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 update_u.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 layout_hyper.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 check_unitarity.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 d_plaq4.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 gaugefix2.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 io_helpers.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 io_lat4.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 make_lattice.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 path_product.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 ploop3.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 ranmom.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 ranstuff.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 reunitarize2.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 gauge_stuff.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 grsource_imp.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 mat_invert.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 quark_stuff.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 rephase.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 cmplx.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 addmat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 addvec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 clear_mat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 clearvec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_amatvec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_mat_an.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_mat_na.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_mat_nn.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_matvec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 make_ahmat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 rand_ahmat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 realtr.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 s_m_a_mat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 s_m_a_vec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 s_m_s_mat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 s_m_vec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 s_m_mat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 su3_adjoint.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 su3_dot.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 su3_rdot.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 su3_proj.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 su3mat_copy.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 submat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 subvec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 trace_su3.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 uncmp_ahmat.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 msq_su3vec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 sub4vecs.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_amv_4dir.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_amv_4vec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_mv_s_4dir.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_su2_mat_vec_n.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 l_su2_hit_n.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 r_su2_hit_a.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_su2_mat_vec_a.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 gaussrand.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 byterevn.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_mat_hwvec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 m_amat_hwvec.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 dslash_fn2.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 d_congrad5_fn.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 com_vanilla.c
	$(CC) -c $(bitcode_flags) $(additional_flags) $(target_flags) -I. -O0 io_nonansi.c

	# $(CC) $(additional_flags)  $(target_flags)  -O0  control.o f_meas.o gauge_info.o setup.o update.o update_h.o update_u.o layout_hyper.o check_unitarity.o d_plaq4.o gaugefix2.o io_helpers.o io_lat4.o make_lattice.o path_product.o ploop3.o ranmom.o ranstuff.o reunitarize2.o gauge_stuff.o grsource_imp.o mat_invert.o quark_stuff.o rephase.o cmplx.o addmat.o addvec.o clear_mat.o clearvec.o m_amatvec.o m_mat_an.o m_mat_na.o m_mat_nn.o m_matvec.o make_ahmat.o rand_ahmat.o realtr.o s_m_a_mat.o s_m_a_vec.o s_m_s_mat.o s_m_vec.o s_m_mat.o su3_adjoint.o su3_dot.o su3_rdot.o su3_proj.o su3mat_copy.o submat.o subvec.o trace_su3.o uncmp_ahmat.o msq_su3vec.o sub4vecs.o m_amv_4dir.o m_amv_4vec.o m_mv_s_4dir.o m_su2_mat_vec_n.o l_su2_hit_n.o r_su2_hit_a.o m_su2_mat_vec_a.o gaussrand.o byterevn.o m_mat_hwvec.o m_amat_hwvec.o dslash_fn2.o d_congrad5_fn.o com_vanilla.o io_nonansi.o            -lm        -o milc-final

	llvm-link control.bc f_meas.bc gauge_info.bc setup.bc update.bc update_h.bc update_u.bc layout_hyper.bc check_unitarity.bc d_plaq4.bc gaugefix2.bc io_helpers.bc io_lat4.bc make_lattice.bc path_product.bc ploop3.bc ranmom.bc ranstuff.bc reunitarize2.bc gauge_stuff.bc grsource_imp.bc mat_invert.bc quark_stuff.bc rephase.bc cmplx.bc addmat.bc addvec.bc clear_mat.bc clearvec.bc m_amatvec.bc m_mat_an.bc m_mat_na.bc m_mat_nn.bc m_matvec.bc make_ahmat.bc rand_ahmat.bc realtr.bc s_m_a_mat.bc s_m_a_vec.bc s_m_s_mat.bc s_m_vec.bc s_m_mat.bc su3_adjoint.bc su3_dot.bc su3_rdot.bc su3_proj.bc su3mat_copy.bc submat.bc subvec.bc trace_su3.bc uncmp_ahmat.bc msq_su3vec.bc sub4vecs.bc m_amv_4dir.bc m_amv_4vec.bc m_mv_s_4dir.bc m_su2_mat_vec_n.bc l_su2_hit_n.bc r_su2_hit_a.bc m_su2_mat_vec_a.bc gaussrand.bc byterevn.bc m_mat_hwvec.bc m_amat_hwvec.bc dslash_fn2.bc d_congrad5_fn.bc com_vanilla.bc io_nonansi.bc -o milc-final.bc
.PHONY: clean

clean: 
	rm -f *.o output core



