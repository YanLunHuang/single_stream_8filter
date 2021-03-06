// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_HH_
#define _conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s.h"
#include "product_dense_ap_fixed_ap_fixed_ap_fixed_s.h"
#include "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V.h"

namespace ap_rtl {

struct conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > data_V_V_dout;
    sc_in< sc_logic > data_V_V_empty_n;
    sc_out< sc_logic > data_V_V_read;
    sc_out< sc_lv<16> > res_V_V_TDATA;
    sc_out< sc_logic > res_V_V_TVALID;
    sc_in< sc_logic > res_V_V_TREADY;


    // Module declarations
    conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s(sc_module_name name);
    SC_HAS_PROCESS(conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s);

    ~conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s();

    sc_trace_file* mVcdFile;

    conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V* w2_V_U;
    cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s* call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332;
    product_dense_ap_fixed_ap_fixed_ap_fixed_s* tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_370;
    product_dense_ap_fixed_ap_fixed_ap_fixed_s* tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_376;
    product_dense_ap_fixed_ap_fixed_ap_fixed_s* tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_382;
    product_dense_ap_fixed_ap_fixed_ap_fixed_s* tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_388;
    product_dense_ap_fixed_ap_fixed_ap_fixed_s* tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_394;
    product_dense_ap_fixed_ap_fixed_ap_fixed_s* tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_400;
    product_dense_ap_fixed_ap_fixed_ap_fixed_s* tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_406;
    product_dense_ap_fixed_ap_fixed_ap_fixed_s* op_V_assign_2_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_412;
    regslice_both<16>* regslice_both_res_V_V_U;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<19> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1152> > layer_in_V;
    sc_signal< sc_lv<32> > sX;
    sc_signal< sc_lv<32> > sY;
    sc_signal< sc_lv<32> > pY;
    sc_signal< sc_lv<32> > pX;
    sc_signal< sc_lv<7> > w2_V_address0;
    sc_signal< sc_logic > w2_V_ce0;
    sc_signal< sc_lv<115> > w2_V_q0;
    sc_signal< sc_logic > data_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln167_fu_418_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > res_V_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<1> > and_ln176_2_reg_950;
    sc_signal< sc_lv<16> > tmp_V_22_reg_207;
    sc_signal< sc_lv<16> > tmp_V_21_reg_220;
    sc_signal< sc_lv<16> > tmp_V_20_reg_233;
    sc_signal< sc_lv<16> > tmp_V_19_reg_246;
    sc_signal< sc_lv<16> > tmp_V_18_reg_259;
    sc_signal< sc_lv<16> > tmp_V_17_reg_272;
    sc_signal< sc_lv<16> > tmp_V_16_reg_285;
    sc_signal< sc_lv<16> > tmp_V_15_reg_298;
    sc_signal< sc_lv<7> > in_index_reg_311;
    sc_signal< sc_lv<5> > i_fu_424_p2;
    sc_signal< sc_lv<5> > i_reg_872;
    sc_signal< sc_logic > regslice_both_res_V_V_U_apdone_blk;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<16> > tmp_V_reg_877;
    sc_signal< sc_lv<16> > tmp_V_8_reg_882;
    sc_signal< sc_lv<16> > tmp_V_9_reg_887;
    sc_signal< sc_lv<16> > tmp_V_10_reg_892;
    sc_signal< sc_lv<16> > tmp_V_11_reg_897;
    sc_signal< sc_lv<16> > tmp_V_12_reg_902;
    sc_signal< sc_lv<16> > tmp_V_13_reg_907;
    sc_signal< sc_lv<1152> > call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332_ap_return;
    sc_signal< sc_lv<1152> > call_ret_reg_912;
    sc_signal< sc_lv<32> > sX_load_reg_918;
    sc_signal< sc_lv<1> > icmp_ln176_fu_459_p2;
    sc_signal< sc_lv<1> > icmp_ln176_reg_923;
    sc_signal< sc_lv<32> > sY_load_reg_928;
    sc_signal< sc_lv<1> > icmp_ln176_1_fu_469_p2;
    sc_signal< sc_lv<1> > icmp_ln176_1_reg_933;
    sc_signal< sc_lv<32> > pY_load_reg_938;
    sc_signal< sc_lv<32> > pX_load_reg_944;
    sc_signal< sc_lv<1> > and_ln176_2_fu_527_p2;
    sc_signal< sc_lv<1> > icmp_ln74_fu_533_p2;
    sc_signal< sc_lv<1> > icmp_ln74_reg_954;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln74_reg_954_pp0_iter1_reg;
    sc_signal< sc_lv<7> > ir_fu_539_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<16> > trunc_ln83_fu_647_p1;
    sc_signal< sc_lv<16> > trunc_ln83_reg_963;
    sc_signal< sc_lv<16> > tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_370_ap_return;
    sc_signal< sc_lv<16> > tmpmult_0_V_reg_980;
    sc_signal< sc_lv<16> > tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_376_ap_return;
    sc_signal< sc_lv<16> > tmpmult_1_V_reg_985;
    sc_signal< sc_lv<16> > tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_382_ap_return;
    sc_signal< sc_lv<16> > tmpmult_2_V_reg_990;
    sc_signal< sc_lv<16> > tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_388_ap_return;
    sc_signal< sc_lv<16> > tmpmult_3_V_reg_995;
    sc_signal< sc_lv<16> > tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_394_ap_return;
    sc_signal< sc_lv<16> > tmpmult_4_V_reg_1000;
    sc_signal< sc_lv<16> > tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_400_ap_return;
    sc_signal< sc_lv<16> > tmpmult_5_V_reg_1005;
    sc_signal< sc_lv<16> > tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_406_ap_return;
    sc_signal< sc_lv<16> > tmpmult_6_V_reg_1010;
    sc_signal< sc_lv<16> > op_V_assign_2_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_412_ap_return;
    sc_signal< sc_lv<16> > op_V_assign_2_0_7_reg_1015;
    sc_signal< sc_lv<16> > acc_0_V_fu_742_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<16> > acc_1_V_fu_747_p2;
    sc_signal< sc_lv<16> > acc_2_V_fu_752_p2;
    sc_signal< sc_lv<16> > acc_3_V_fu_757_p2;
    sc_signal< sc_lv<16> > acc_4_V_fu_762_p2;
    sc_signal< sc_lv<16> > acc_5_V_fu_767_p2;
    sc_signal< sc_lv<16> > acc_6_V_fu_772_p2;
    sc_signal< sc_lv<16> > acc_7_V_fu_777_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332_ap_start;
    sc_signal< sc_logic > call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332_ap_done;
    sc_signal< sc_logic > call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332_ap_idle;
    sc_signal< sc_logic > call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332_ap_ready;
    sc_signal< sc_lv<128> > call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332_data_V_read;
    sc_signal< sc_logic > tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_370_ap_ready;
    sc_signal< sc_lv<16> > tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_370_w_V;
    sc_signal< sc_logic > tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_376_ap_ready;
    sc_signal< sc_lv<16> > tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_376_w_V;
    sc_signal< sc_logic > tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_382_ap_ready;
    sc_signal< sc_lv<16> > tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_382_w_V;
    sc_signal< sc_logic > tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_388_ap_ready;
    sc_signal< sc_lv<16> > tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_388_w_V;
    sc_signal< sc_logic > tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_394_ap_ready;
    sc_signal< sc_lv<16> > tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_394_w_V;
    sc_signal< sc_logic > tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_400_ap_ready;
    sc_signal< sc_lv<16> > tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_400_w_V;
    sc_signal< sc_logic > tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_406_ap_ready;
    sc_signal< sc_lv<16> > tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_406_w_V;
    sc_signal< sc_logic > op_V_assign_2_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_412_ap_ready;
    sc_signal< sc_lv<16> > op_V_assign_2_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_412_w_V;
    sc_signal< sc_lv<5> > i_0_i_reg_196;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_state21_io;
    sc_signal< sc_lv<32> > select_ln208_fu_849_p3;
    sc_signal< sc_lv<32> > ap_phi_mux_storemerge_i_phi_fu_325_p4;
    sc_signal< sc_lv<1> > icmp_ln198_fu_782_p2;
    sc_signal< sc_lv<1> > icmp_ln202_fu_828_p2;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > zext_ln83_fu_651_p1;
    sc_signal< sc_lv<32> > select_ln213_fu_803_p3;
    sc_signal< sc_lv<32> > add_ln206_fu_833_p2;
    sc_signal< sc_lv<32> > add_ln211_fu_787_p2;
    sc_signal< sc_lv<31> > tmp_3_fu_479_p4;
    sc_signal< sc_lv<31> > tmp_4_fu_499_p4;
    sc_signal< sc_lv<1> > icmp_ln176_2_fu_489_p2;
    sc_signal< sc_lv<1> > icmp_ln176_3_fu_509_p2;
    sc_signal< sc_lv<1> > and_ln176_1_fu_521_p2;
    sc_signal< sc_lv<1> > and_ln176_fu_515_p2;
    sc_signal< sc_lv<11> > tmp_1_fu_545_p3;
    sc_signal< sc_lv<11> > empty_21_fu_553_p2;
    sc_signal< sc_lv<1> > icmp_ln83_fu_559_p2;
    sc_signal< sc_lv<11> > sub_ln83_fu_574_p2;
    sc_signal< sc_lv<11> > sub_ln83_2_fu_586_p2;
    sc_signal< sc_lv<1152> > tmp_10_fu_565_p4;
    sc_signal< sc_lv<11> > sub_ln83_1_fu_580_p2;
    sc_signal< sc_lv<11> > select_ln83_fu_592_p3;
    sc_signal< sc_lv<11> > select_ln83_2_fu_607_p3;
    sc_signal< sc_lv<11> > sub_ln83_3_fu_615_p2;
    sc_signal< sc_lv<1152> > select_ln83_1_fu_600_p3;
    sc_signal< sc_lv<1152> > zext_ln83_2_fu_621_p1;
    sc_signal< sc_lv<1152> > zext_ln83_3_fu_625_p1;
    sc_signal< sc_lv<1152> > lshr_ln83_fu_629_p2;
    sc_signal< sc_lv<1152> > lshr_ln83_1_fu_635_p2;
    sc_signal< sc_lv<1152> > and_ln83_fu_641_p2;
    sc_signal< sc_lv<3> > tmp_2_fu_727_p4;
    sc_signal< sc_lv<32> > add_ln213_fu_798_p2;
    sc_signal< sc_lv<32> > add_ln208_fu_844_p2;
    sc_signal< sc_lv<19> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<16> > res_V_V_TDATA_int;
    sc_signal< sc_logic > res_V_V_TVALID_int;
    sc_signal< sc_logic > res_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_res_V_V_U_vld_out;
    sc_signal< bool > ap_condition_419;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<19> ap_ST_fsm_state1;
    static const sc_lv<19> ap_ST_fsm_state2;
    static const sc_lv<19> ap_ST_fsm_state3;
    static const sc_lv<19> ap_ST_fsm_state4;
    static const sc_lv<19> ap_ST_fsm_state5;
    static const sc_lv<19> ap_ST_fsm_state6;
    static const sc_lv<19> ap_ST_fsm_state7;
    static const sc_lv<19> ap_ST_fsm_state8;
    static const sc_lv<19> ap_ST_fsm_state9;
    static const sc_lv<19> ap_ST_fsm_pp0_stage0;
    static const sc_lv<19> ap_ST_fsm_state13;
    static const sc_lv<19> ap_ST_fsm_state14;
    static const sc_lv<19> ap_ST_fsm_state15;
    static const sc_lv<19> ap_ST_fsm_state16;
    static const sc_lv<19> ap_ST_fsm_state17;
    static const sc_lv<19> ap_ST_fsm_state18;
    static const sc_lv<19> ap_ST_fsm_state19;
    static const sc_lv<19> ap_ST_fsm_state20;
    static const sc_lv<19> ap_ST_fsm_state21;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_9;
    static const bool ap_const_boolean_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<7> ap_const_lv7_48;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<11> ap_const_lv11_F;
    static const sc_lv<32> ap_const_lv32_47F;
    static const sc_lv<11> ap_const_lv11_47F;
    static const sc_lv<1152> ap_const_lv1152_lc_2;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<32> ap_const_lv32_50;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_6F;
    static const sc_lv<32> ap_const_lv32_70;
    static const sc_lv<32> ap_const_lv32_72;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_0_V_fu_742_p2();
    void thread_acc_1_V_fu_747_p2();
    void thread_acc_2_V_fu_752_p2();
    void thread_acc_3_V_fu_757_p2();
    void thread_acc_4_V_fu_762_p2();
    void thread_acc_5_V_fu_767_p2();
    void thread_acc_6_V_fu_772_p2();
    void thread_acc_7_V_fu_777_p2();
    void thread_add_ln206_fu_833_p2();
    void thread_add_ln208_fu_844_p2();
    void thread_add_ln211_fu_787_p2();
    void thread_add_ln213_fu_798_p2();
    void thread_and_ln176_1_fu_521_p2();
    void thread_and_ln176_2_fu_527_p2();
    void thread_and_ln176_fu_515_p2();
    void thread_and_ln83_fu_641_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter0();
    void thread_ap_block_state11_pp0_stage0_iter1();
    void thread_ap_block_state12_pp0_stage0_iter2();
    void thread_ap_block_state2();
    void thread_ap_block_state21_io();
    void thread_ap_condition_419();
    void thread_ap_condition_pp0_exit_iter0_state10();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_storemerge_i_phi_fu_325_p4();
    void thread_ap_ready();
    void thread_call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332_ap_start();
    void thread_call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332_data_V_read();
    void thread_data_V_V_blk_n();
    void thread_data_V_V_read();
    void thread_empty_21_fu_553_p2();
    void thread_i_fu_424_p2();
    void thread_icmp_ln167_fu_418_p2();
    void thread_icmp_ln176_1_fu_469_p2();
    void thread_icmp_ln176_2_fu_489_p2();
    void thread_icmp_ln176_3_fu_509_p2();
    void thread_icmp_ln176_fu_459_p2();
    void thread_icmp_ln198_fu_782_p2();
    void thread_icmp_ln202_fu_828_p2();
    void thread_icmp_ln74_fu_533_p2();
    void thread_icmp_ln83_fu_559_p2();
    void thread_ir_fu_539_p2();
    void thread_lshr_ln83_1_fu_635_p2();
    void thread_lshr_ln83_fu_629_p2();
    void thread_op_V_assign_2_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_412_w_V();
    void thread_res_V_V_TDATA_blk_n();
    void thread_res_V_V_TDATA_int();
    void thread_res_V_V_TVALID();
    void thread_res_V_V_TVALID_int();
    void thread_select_ln208_fu_849_p3();
    void thread_select_ln213_fu_803_p3();
    void thread_select_ln83_1_fu_600_p3();
    void thread_select_ln83_2_fu_607_p3();
    void thread_select_ln83_fu_592_p3();
    void thread_sub_ln83_1_fu_580_p2();
    void thread_sub_ln83_2_fu_586_p2();
    void thread_sub_ln83_3_fu_615_p2();
    void thread_sub_ln83_fu_574_p2();
    void thread_tmp_10_fu_565_p4();
    void thread_tmp_1_fu_545_p3();
    void thread_tmp_2_fu_727_p4();
    void thread_tmp_3_fu_479_p4();
    void thread_tmp_4_fu_499_p4();
    void thread_tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_370_w_V();
    void thread_tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_376_w_V();
    void thread_tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_382_w_V();
    void thread_tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_388_w_V();
    void thread_tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_394_w_V();
    void thread_tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_400_w_V();
    void thread_tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_406_w_V();
    void thread_trunc_ln83_fu_647_p1();
    void thread_w2_V_address0();
    void thread_w2_V_ce0();
    void thread_zext_ln83_2_fu_621_p1();
    void thread_zext_ln83_3_fu_625_p1();
    void thread_zext_ln83_fu_651_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
