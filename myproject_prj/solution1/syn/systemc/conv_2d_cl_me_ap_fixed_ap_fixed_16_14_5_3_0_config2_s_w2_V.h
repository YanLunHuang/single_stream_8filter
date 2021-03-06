// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V_H__
#define __conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 115;
  static const unsigned AddressRange = 72;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V_ram) {
        for (unsigned i = 0; i < 72 ; i = i + 1) {
            ram[i] = "0b1000000000000000100000000000000010000000000000001000000000000000100000000000000010000000000000001000000000000000100";
        }


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V) {


static const unsigned DataWidth = 115;
static const unsigned AddressRange = 72;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V_ram* meminst;


SC_CTOR(conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V) {
meminst = new conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V_ram("conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_w2_V() {
    delete meminst;
}


};//endmodule
#endif
