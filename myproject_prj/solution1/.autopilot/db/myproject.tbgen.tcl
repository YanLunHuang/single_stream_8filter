set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_1_V_V int 16 regular {axi_s 0 volatile  { input_1_V_V Data } }  }
	{ layer2_out_V_V int 16 regular {axi_s 1 volatile  { layer2_out_V_V Data } }  }
	{ const_size_in_1 int 16 regular {pointer 1}  }
	{ const_size_out_1 int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_1_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "layer2_out_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_in_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_in_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_out_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_out_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ input_1_V_V_TDATA sc_in sc_lv 16 signal 0 } 
	{ layer2_out_V_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ const_size_in_1 sc_out sc_lv 16 signal 2 } 
	{ const_size_out_1 sc_out sc_lv 16 signal 3 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ const_size_in_1_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ const_size_out_1_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ input_1_V_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ input_1_V_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ layer2_out_V_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ layer2_out_V_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "input_1_V_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_V_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_V_V", "role": "TDATA" }} , 
 	{ "name": "const_size_in_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_in_1", "role": "default" }} , 
 	{ "name": "const_size_out_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_out_1", "role": "default" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "const_size_in_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_in_1", "role": "ap_vld" }} , 
 	{ "name": "const_size_out_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_out_1", "role": "ap_vld" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "input_1_V_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_V_V", "role": "TVALID" }} , 
 	{ "name": "input_1_V_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_V_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_V_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_V_V", "role": "TREADY" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "4", "40", "41"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "243", "EstimateLatencyMax" : "2293",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "Block_proc_U0", "ReadyCount" : "Block_proc_U0_ap_ready_count"},
			{"ID" : "2", "Name" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "ReadyCount" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0_ap_ready_count"}],
		"OutputProcess" : [
			{"ID" : "1", "Name" : "Block_proc_U0"},
			{"ID" : "4", "Name" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0"}],
		"Port" : [
			{"Name" : "input_1_V_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Port" : "data_V_V"}]},
			{"Name" : "layer2_out_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "res_V_V"}]},
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "Block_proc_U0", "Port" : "const_size_in_1"}]},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "Block_proc_U0", "Port" : "const_size_out_1"}]},
			{"Name" : "layer_in_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_V"}]},
			{"Name" : "layer_in_row_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_0"}]},
			{"Name" : "layer_in_row_Array_V_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_0"}]},
			{"Name" : "layer_in_row_Array_V_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_1"}]},
			{"Name" : "layer_in_row_Array_V_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_1"}]},
			{"Name" : "layer_in_row_Array_V_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_2"}]},
			{"Name" : "layer_in_row_Array_V_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_2"}]},
			{"Name" : "layer_in_row_Array_V_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_3"}]},
			{"Name" : "layer_in_row_Array_V_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_3"}]},
			{"Name" : "layer_in_row_Array_V_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_4"}]},
			{"Name" : "layer_in_row_Array_V_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_4"}]},
			{"Name" : "layer_in_row_Array_V_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_5"}]},
			{"Name" : "layer_in_row_Array_V_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_5"}]},
			{"Name" : "layer_in_row_Array_V_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_6"}]},
			{"Name" : "layer_in_row_Array_V_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_6"}]},
			{"Name" : "layer_in_row_Array_V_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_7"}]},
			{"Name" : "layer_in_row_Array_V_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_7"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "sX"}]},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "sY"}]},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "pY"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "pX"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "w2_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Block_proc_U0", "Parent" : "0",
		"CDFG" : "Block_proc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Parent" : "0", "Child" : ["3"],
		"CDFG" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "203", "EstimateLatencyMax" : "203",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "40",
				"BlockSignal" : [
					{"Name" : "res_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0.regslice_both_data_V_V_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Parent" : "0", "Child" : ["5", "6", "23", "25", "27", "29", "31", "33", "35", "37", "39"],
		"CDFG" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "226", "EstimateLatencyMax" : "2276",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "2",
		"StartFifo" : "start_for_conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_conrcU_U",
		"Port" : [
			{"Name" : "data_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "40",
				"BlockSignal" : [
					{"Name" : "data_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer_in_V", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "layer_in_row_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_0_0"}]},
			{"Name" : "layer_in_row_Array_V_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_1_0"}]},
			{"Name" : "layer_in_row_Array_V_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_0_1"}]},
			{"Name" : "layer_in_row_Array_V_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_1_1"}]},
			{"Name" : "layer_in_row_Array_V_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_0_2"}]},
			{"Name" : "layer_in_row_Array_V_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_1_2"}]},
			{"Name" : "layer_in_row_Array_V_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_0_3"}]},
			{"Name" : "layer_in_row_Array_V_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_1_3"}]},
			{"Name" : "layer_in_row_Array_V_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_0_4"}]},
			{"Name" : "layer_in_row_Array_V_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_1_4"}]},
			{"Name" : "layer_in_row_Array_V_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_0_5"}]},
			{"Name" : "layer_in_row_Array_V_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_1_5"}]},
			{"Name" : "layer_in_row_Array_V_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_0_6"}]},
			{"Name" : "layer_in_row_Array_V_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_1_6"}]},
			{"Name" : "layer_in_row_Array_V_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_0_7"}]},
			{"Name" : "layer_in_row_Array_V_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Port" : "layer_in_row_Array_V_1_7"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.w2_V_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332", "Parent" : "4", "Child" : ["7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22"],
		"CDFG" : "cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "layer_in_row_Array_V_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_7", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_7", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_0_0_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_1_0_U", "Parent" : "6"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_0_1_U", "Parent" : "6"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_1_1_U", "Parent" : "6"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_0_2_U", "Parent" : "6"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_1_2_U", "Parent" : "6"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_0_3_U", "Parent" : "6"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_1_3_U", "Parent" : "6"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_0_4_U", "Parent" : "6"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_1_4_U", "Parent" : "6"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_0_5_U", "Parent" : "6"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_1_5_U", "Parent" : "6"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_0_6_U", "Parent" : "6"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_1_6_U", "Parent" : "6"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_0_7_U", "Parent" : "6"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_332.layer_in_row_Array_V_1_7_U", "Parent" : "6"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_370", "Parent" : "4", "Child" : ["24"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_370.myproject_mul_mul_16s_16s_18_1_1_U9", "Parent" : "23"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_376", "Parent" : "4", "Child" : ["26"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_376.myproject_mul_mul_16s_16s_18_1_1_U9", "Parent" : "25"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_382", "Parent" : "4", "Child" : ["28"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_382.myproject_mul_mul_16s_16s_18_1_1_U9", "Parent" : "27"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_388", "Parent" : "4", "Child" : ["30"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_388.myproject_mul_mul_16s_16s_18_1_1_U9", "Parent" : "29"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_394", "Parent" : "4", "Child" : ["32"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_394.myproject_mul_mul_16s_16s_18_1_1_U9", "Parent" : "31"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_400", "Parent" : "4", "Child" : ["34"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_400.myproject_mul_mul_16s_16s_18_1_1_U9", "Parent" : "33"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_406", "Parent" : "4", "Child" : ["36"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_406.myproject_mul_mul_16s_16s_18_1_1_U9", "Parent" : "35"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.op_V_assign_2_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_412", "Parent" : "4", "Child" : ["38"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.op_V_assign_2_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_412.myproject_mul_mul_16s_16s_18_1_1_U9", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.regslice_both_res_V_V_U", "Parent" : "4"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_V_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_conrcU_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		input_1_V_V {Type I LastRead 17 FirstWrite -1}
		layer2_out_V_V {Type O LastRead -1 FirstWrite 10}
		const_size_in_1 {Type O LastRead -1 FirstWrite 0}
		const_size_out_1 {Type O LastRead -1 FirstWrite 0}
		layer_in_V {Type IO LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_7 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_7 {Type X LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		pX {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}
	Block_proc {
		const_size_in_1 {Type O LastRead -1 FirstWrite 0}
		const_size_out_1 {Type O LastRead -1 FirstWrite 0}}
	zeropad2d_cl_me_ap_fixed_ap_fixed_config4_s {
		data_V_V {Type I LastRead 17 FirstWrite -1}
		res_V_V {Type O LastRead -1 FirstWrite 1}}
	conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s {
		data_V_V {Type I LastRead 8 FirstWrite -1}
		res_V_V {Type O LastRead -1 FirstWrite 10}
		layer_in_V {Type IO LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_7 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_7 {Type X LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		pX {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}
	cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s {
		data_V_read {Type I LastRead 0 FirstWrite -1}
		output_V_read {Type I LastRead 0 FirstWrite -1}
		layer_in_row_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_7 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_7 {Type X LastRead -1 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "243", "Max" : "2293"}
	, {"Name" : "Interval", "Min" : "227", "Max" : "2277"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_1_V_V { axis {  { input_1_V_V_TDATA in_data 0 16 }  { input_1_V_V_TVALID in_vld 0 1 }  { input_1_V_V_TREADY in_acc 1 1 } } }
	layer2_out_V_V { axis {  { layer2_out_V_V_TDATA out_data 1 16 }  { layer2_out_V_V_TVALID out_vld 1 1 }  { layer2_out_V_V_TREADY out_acc 0 1 } } }
	const_size_in_1 { ap_vld {  { const_size_in_1 out_data 1 16 }  { const_size_in_1_ap_vld out_vld 1 1 } } }
	const_size_out_1 { ap_vld {  { const_size_out_1 out_data 1 16 }  { const_size_out_1_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
