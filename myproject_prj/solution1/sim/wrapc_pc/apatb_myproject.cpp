// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "input_1_V_V"
#define AUTOTB_TVIN_input_1_V_V  "../tv/cdatafile/c.myproject.autotvin_input_1_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_V_V  "../tv/stream_size/stream_size_in_input_1_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_V_V  "../tv/stream_size/stream_ingress_status_input_1_V_V.dat"
// wrapc file define: "layer2_out_V_V"
#define AUTOTB_TVOUT_layer2_out_V_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_V_V.dat"
#define AUTOTB_TVIN_layer2_out_V_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_V_V  "../tv/stream_size/stream_size_out_layer2_out_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_V  "../tv/stream_size/stream_egress_status_layer2_out_V_V.dat"
// wrapc file define: "const_size_in_1"
#define AUTOTB_TVOUT_const_size_in_1  "../tv/cdatafile/c.myproject.autotvout_const_size_in_1.dat"
// wrapc file define: "const_size_out_1"
#define AUTOTB_TVOUT_const_size_out_1  "../tv/cdatafile/c.myproject.autotvout_const_size_out_1.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "layer2_out_V_V"
#define AUTOTB_TVOUT_PC_layer2_out_V_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_V_V.dat"
// tvout file define: "const_size_in_1"
#define AUTOTB_TVOUT_PC_const_size_in_1  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_in_1.dat"
// tvout file define: "const_size_out_1"
#define AUTOTB_TVOUT_PC_const_size_out_1  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_out_1.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			input_1_V_V_depth = 0;
			layer2_out_V_V_depth = 0;
			const_size_in_1_depth = 0;
			const_size_out_1_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{input_1_V_V " << input_1_V_V_depth << "}\n";
			total_list << "{layer2_out_V_V " << layer2_out_V_V_depth << "}\n";
			total_list << "{const_size_in_1 " << const_size_in_1_depth << "}\n";
			total_list << "{const_size_out_1 " << const_size_out_1_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int input_1_V_V_depth;
		int layer2_out_V_V_depth;
		int const_size_in_1_depth;
		int const_size_out_1_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void myproject (
hls::stream<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&input_1),
hls::stream<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&layer2_out),
unsigned short (&const_size_in_1),
unsigned short (&const_size_out_1));

void AESL_WRAP_myproject (
hls::stream<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&input_1),
hls::stream<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&layer2_out),
unsigned short (&const_size_in_1),
unsigned short (&const_size_out_1))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		// pop stream input: "input_1"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_V_V, AESL_token); // pop_size
			int aesl_tmp_7 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_7; i++)
			{
				input_1.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_9;
		int aesl_tmp_10;
		int aesl_tmp_11 = 0;

		// read output stream size: "layer2_out"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_V_V, AESL_token); // pop_size
			aesl_tmp_10 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_V_V, AESL_token); // [[/transaction]]
		}

		// output port post check: "layer2_out_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_V_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer2_out_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_V_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_V_lv0_0_0_1 = new sc_lv<16>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_9[0]) != NULL) // check the null address if the c port is array or others
								{
									layer2_out_V_V_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_V_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_9[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_9[0]
								// output_left_conversion : (aesl_tmp_9[i_0]).range()
								// output_type_conversion : (layer2_out_V_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_9[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_9[i_0]).range() = (layer2_out_V_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "const_size_in_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data

			sc_bv<16> *const_size_in_1_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_in_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_in_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_in_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_in_1(15, 0)
						// {
							sc_lv<16>* const_size_in_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_in_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_in_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_in_1
								// output_left_conversion : const_size_in_1
								// output_type_conversion : (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1 = (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_in_1_pc_buffer;
		}

		// output port post check: "const_size_out_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data

			sc_bv<16> *const_size_out_1_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_out_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_out_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_out_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_out_1(15, 0)
						// {
							sc_lv<16>* const_size_out_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_out_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_out_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_out_1
								// output_left_conversion : const_size_out_1
								// output_type_conversion : (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1 = (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_out_1_pc_buffer;
		}

		// push back output stream: "layer2_out"
		for (int i = 0; i < aesl_tmp_10; i++)
		{
			layer2_out.write(aesl_tmp_9[i]);
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "input_1_V_V"
		char* tvin_input_1_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_V_V);
		char* wrapc_stream_size_in_input_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_V_V);
		char* wrapc_stream_ingress_status_input_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_V_V);

		// "layer2_out_V_V"
		char* tvin_layer2_out_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_V_V);
		char* tvout_layer2_out_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_V_V);
		char* wrapc_stream_size_out_layer2_out_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_V_V);
		char* wrapc_stream_egress_status_layer2_out_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_V);

		// "const_size_in_1"
		char* tvout_const_size_in_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_in_1);

		// "const_size_out_1"
		char* tvout_const_size_out_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_out_1);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// dump stream tvin: "input_1"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_6;
		int aesl_tmp_7 = 0;
		while (!input_1.empty())
		{
			aesl_tmp_6.push_back(input_1.read());
			aesl_tmp_7++;
		}

		// dump stream tvin: "layer2_out"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_9;
		int aesl_tmp_10 = 0;
		while (!layer2_out.empty())
		{
			aesl_tmp_9.push_back(layer2_out.read());
			aesl_tmp_10++;
		}

		// push back input stream: "input_1"
		for (int i = 0; i < aesl_tmp_7; i++)
		{
			input_1.write(aesl_tmp_6[i]);
		}

		// push back input stream: "layer2_out"
		for (int i = 0; i < aesl_tmp_10; i++)
		{
			layer2_out.write(aesl_tmp_9[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		myproject(input_1, layer2_out, const_size_in_1, const_size_out_1);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "input_1"
		int aesl_tmp_8 = input_1.size();

		// pop output stream: "layer2_out"
		int aesl_tmp_11 = aesl_tmp_10;
		aesl_tmp_10 = 0;
     aesl_tmp_9.clear();
		while (!layer2_out.empty())
		{
			aesl_tmp_9.push_back(layer2_out.read());
			aesl_tmp_10++;
		}

		// [[transaction]]
		sprintf(tvin_input_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_V_V, tvin_input_1_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_V, tvin_input_1_V_V);

		sc_bv<16>* input_1_V_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: input_1_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_6[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_6[0]
						// regulate_c_name       : input_1_V_V
						// input_type_conversion : (aesl_tmp_6[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_6[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> input_1_V_V_tmp_mem;
							input_1_V_V_tmp_mem = (aesl_tmp_6[i_0]).range().to_string(SC_BIN).c_str();
							input_1_V_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_input_1_V_V, "%s\n", (input_1_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_V_V, tvin_input_1_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_input_1_V_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_V, stream_ingress_size_input_1_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_input_1_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_V, stream_ingress_size_input_1_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_V, stream_ingress_size_input_1_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.input_1_V_V_depth);
		sprintf(tvin_input_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_V_V, tvin_input_1_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_V, tvin_input_1_V_V);

		// release memory allocation
		delete [] input_1_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_V, wrapc_stream_size_in_input_1_V_V);
		sprintf(wrapc_stream_size_in_input_1_V_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_V, wrapc_stream_size_in_input_1_V_V);
		sprintf(wrapc_stream_size_in_input_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_V, wrapc_stream_size_in_input_1_V_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_V, tvout_layer2_out_V_V);

		sc_bv<16>* layer2_out_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: layer2_out_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.V(15, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_9[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_9[0]
						// regulate_c_name       : layer2_out_V_V
						// input_type_conversion : (aesl_tmp_9[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_9[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer2_out_V_V_tmp_mem;
							layer2_out_V_V_tmp_mem = (aesl_tmp_9[i_0]).range().to_string(SC_BIN).c_str();
							layer2_out_V_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_layer2_out_V_V, "%s\n", (layer2_out_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_V, tvout_layer2_out_V_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.layer2_out_V_V_depth);
		sprintf(tvout_layer2_out_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_V, tvout_layer2_out_V_V);

		// release memory allocation
		delete [] layer2_out_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_V, wrapc_stream_size_out_layer2_out_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_V, wrapc_stream_size_out_layer2_out_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_V, wrapc_stream_size_out_layer2_out_V_V);

		// [[transaction]]
		sprintf(tvout_const_size_in_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		sc_bv<16>* const_size_in_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_in_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_in_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_in_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_in_1
						// regulate_c_name       : const_size_in_1
						// input_type_conversion : const_size_in_1
						if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_in_1_tmp_mem;
							const_size_in_1_tmp_mem = const_size_in_1;
							const_size_in_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_in_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_in_1, "%s\n", (const_size_in_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_in_1_depth);
		sprintf(tvout_const_size_in_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		// release memory allocation
		delete [] const_size_in_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_out_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		sc_bv<16>* const_size_out_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_out_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_out_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_out_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_out_1
						// regulate_c_name       : const_size_out_1
						// input_type_conversion : const_size_out_1
						if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_out_1_tmp_mem;
							const_size_out_1_tmp_mem = const_size_out_1;
							const_size_out_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_out_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_out_1, "%s\n", (const_size_out_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_out_1_depth);
		sprintf(tvout_const_size_out_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		// release memory allocation
		delete [] const_size_out_1_tvout_wrapc_buffer;

		// push back output stream: "layer2_out"
		for (int i = 0; i < aesl_tmp_10; i++)
		{
			layer2_out.write(aesl_tmp_9[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "input_1_V_V"
		delete [] tvin_input_1_V_V;
		delete [] wrapc_stream_size_in_input_1_V_V;
		// release memory allocation: "layer2_out_V_V"
		delete [] tvout_layer2_out_V_V;
		delete [] tvin_layer2_out_V_V;
		delete [] wrapc_stream_size_out_layer2_out_V_V;
		// release memory allocation: "const_size_in_1"
		delete [] tvout_const_size_in_1;
		// release memory allocation: "const_size_out_1"
		delete [] tvout_const_size_out_1;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

