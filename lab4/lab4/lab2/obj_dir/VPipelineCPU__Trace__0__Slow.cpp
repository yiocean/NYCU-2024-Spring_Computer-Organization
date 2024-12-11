// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+107,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+108+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+107,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+108+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+79,"inst", false,-1, 31,0);
    tracep->declBit(c+91,"memRead", false,-1);
    tracep->declBit(c+92,"memWrite", false,-1);
    tracep->declBit(c+93,"regWrite", false,-1);
    tracep->declBit(c+144,"ASel", false,-1);
    tracep->declBit(c+145,"BSel", false,-1);
    tracep->declBit(c+103,"IF_ID_Write", false,-1);
    tracep->declBit(c+97,"memRead_o", false,-1);
    tracep->declBit(c+98,"memWrite_o", false,-1);
    tracep->declBit(c+99,"regWrite_o", false,-1);
    tracep->declBus(c+100,"memtoReg_o", false,-1, 1,0);
    tracep->declBus(c+101,"ALUOp_o", false,-1, 2,0);
    tracep->declBit(c+102,"ALUSrc_o", false,-1);
    tracep->declBus(c+146,"writeData", false,-1, 31,0);
    tracep->declBus(c+82,"readData1", false,-1, 31,0);
    tracep->declBus(c+83,"readData2", false,-1, 31,0);
    tracep->declBus(c+70,"imm", false,-1, 31,0);
    tracep->declBus(c+147,"ALUin1", false,-1, 31,0);
    tracep->declBus(c+148,"ALUin2", false,-1, 31,0);
    tracep->declBus(c+149,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+33,"ALUCtl", false,-1, 3,0);
    tracep->declBit(c+150,"BrEq", false,-1);
    tracep->declBit(c+151,"BrLT", false,-1);
    tracep->declBit(c+152,"PCSel", false,-1);
    tracep->declBus(c+140,"pc_i", false,-1, 31,0);
    tracep->declBus(c+80,"pc_o", false,-1, 31,0);
    tracep->declBus(c+81,"sum", false,-1, 31,0);
    tracep->declBus(c+141,"sum2", false,-1, 31,0);
    tracep->declBus(c+153,"aluResult_EXMEM", false,-1, 31,0);
    tracep->declBus(c+154,"aluResult_MEMWB", false,-1, 31,0);
    tracep->declBit(c+104,"PCWrite", false,-1);
    tracep->declBit(c+84,"flush", false,-1);
    tracep->declBit(c+105,"control_signal_mux", false,-1);
    tracep->declBus(c+71,"inst_IFID", false,-1, 31,0);
    tracep->declBus(c+72,"pc_IFID", false,-1, 31,0);
    tracep->declBus(c+73,"sum_IFID", false,-1, 31,0);
    tracep->declBus(c+142,"addr", false,-1, 31,0);
    tracep->declBus(c+94,"ALUOp", false,-1, 2,0);
    tracep->declBus(c+34,"ALUOp_IDEX", false,-1, 2,0);
    tracep->declBus(c+143,"readDataMem", false,-1, 31,0);
    tracep->declBit(c+95,"ALUSrc", false,-1);
    tracep->declBus(c+96,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+155,"ID_EX_rs1", false,-1, 4,0);
    tracep->declBus(c+156,"ID_EX_rs2", false,-1, 4,0);
    tracep->declBus(c+157,"EX_MEM_rd", false,-1, 4,0);
    tracep->declBus(c+158,"MEM_WB_rd", false,-1, 4,0);
    tracep->declBit(c+159,"ID_EX_regWrite", false,-1);
    tracep->declBit(c+160,"EX_MEM_regWrite", false,-1);
    tracep->declBit(c+161,"MEM_WB_regWrite", false,-1);
    tracep->declBus(c+35,"imm_IDEX", false,-1, 31,0);
    tracep->declBus(c+36,"readData1_IDEX", false,-1, 31,0);
    tracep->declBus(c+37,"readData2_IDEX", false,-1, 31,0);
    tracep->declBus(c+38,"sum_IDEX", false,-1, 31,0);
    tracep->declBus(c+87,"aluout", false,-1, 31,0);
    tracep->declBus(c+88,"aluout_EXMEM", false,-1, 31,0);
    tracep->declBus(c+39,"aluout_MEMWB", false,-1, 31,0);
    tracep->declBus(c+40,"sum_EXMEM", false,-1, 31,0);
    tracep->declBus(c+41,"rs2_EXMEM", false,-1, 31,0);
    tracep->declBus(c+162,"rs2", false,-1, 31,0);
    tracep->declBus(c+42,"sum_MEMWB", false,-1, 31,0);
    tracep->declBus(c+43,"readDataMem_MEMWB", false,-1, 31,0);
    tracep->declBus(c+44,"finalout", false,-1, 31,0);
    tracep->declBus(c+45,"ForwardA", false,-1, 1,0);
    tracep->declBus(c+46,"ForwardB", false,-1, 1,0);
    tracep->declBus(c+47,"memtoReg_IDEX", false,-1, 1,0);
    tracep->declBus(c+48,"memtoReg_EXMEM", false,-1, 1,0);
    tracep->declBus(c+49,"memtoReg_MEMWB", false,-1, 1,0);
    tracep->declBit(c+50,"ALUSrc_IDEX", false,-1);
    tracep->declBit(c+89,"memRead_IDEX", false,-1);
    tracep->declBit(c+51,"memWrite_IDEX", false,-1);
    tracep->declBit(c+52,"regWrite_IDEX", false,-1);
    tracep->declBit(c+90,"memRead_EXMEM", false,-1);
    tracep->declBit(c+53,"memWrite_EXMEM", false,-1);
    tracep->declBit(c+54,"regWrite_EXMEM", false,-1);
    tracep->declBit(c+55,"memRead_MEMWB", false,-1);
    tracep->declBit(c+56,"memWrite_MEMWB", false,-1);
    tracep->declBit(c+57,"regWrite_MEMWB", false,-1);
    tracep->declBus(c+58,"inst_IDEX", false,-1, 31,0);
    tracep->declBus(c+59,"inst_EXMEM", false,-1, 31,0);
    tracep->declBus(c+163,"inst_MEMWB", false,-1, 31,0);
    tracep->declBus(c+60,"IDEX_tmp", false,-1, 31,0);
    tracep->declBus(c+61,"ALUSrc1", false,-1, 31,0);
    tracep->declBus(c+62,"ALUSrc2", false,-1, 31,0);
    tracep->pushNamePrefix("addrMux ");
    tracep->declBus(c+72,"pc", false,-1, 31,0);
    tracep->declBus(c+82,"rs1", false,-1, 31,0);
    tracep->declBus(c+74,"opcode", false,-1, 6,0);
    tracep->declBus(c+75,"funct3", false,-1, 2,0);
    tracep->declBus(c+142,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+33,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+61,"A", false,-1, 31,0);
    tracep->declBus(c+62,"B", false,-1, 31,0);
    tracep->declBus(c+87,"ALUOut", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrrl ");
    tracep->declBus(c+34,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+63,"funct7", false,-1);
    tracep->declBus(c+64,"funct3", false,-1, 2,0);
    tracep->declBus(c+33,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+65,"combine", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+80,"a", false,-1, 31,0);
    tracep->declBus(c+164,"b", false,-1, 31,0);
    tracep->declBus(c+81,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+142,"a", false,-1, 31,0);
    tracep->declBus(c+70,"b", false,-1, 31,0);
    tracep->declBus(c+141,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+74,"opcode", false,-1, 6,0);
    tracep->declBit(c+91,"memRead", false,-1);
    tracep->declBus(c+96,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+94,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+92,"memWrite", false,-1);
    tracep->declBit(c+95,"ALUSrc", false,-1);
    tracep->declBit(c+93,"regWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+107,"rst", false,-1);
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+53,"memWrite", false,-1);
    tracep->declBit(c+90,"memRead", false,-1);
    tracep->declBus(c+88,"address", false,-1, 31,0);
    tracep->declBus(c+41,"writeData", false,-1, 31,0);
    tracep->declBus(c+143,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_register ");
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+107,"rst", false,-1);
    tracep->declBit(c+52,"regWrite", false,-1);
    tracep->declBus(c+47,"memtoReg", false,-1, 1,0);
    tracep->declBit(c+89,"memRead", false,-1);
    tracep->declBit(c+51,"memWrite", false,-1);
    tracep->declBus(c+38,"sum", false,-1, 31,0);
    tracep->declBus(c+87,"aluout", false,-1, 31,0);
    tracep->declBus(c+62,"rs2_EXMEM", false,-1, 31,0);
    tracep->declBus(c+58,"inst", false,-1, 31,0);
    tracep->declBit(c+54,"regWrite_o", false,-1);
    tracep->declBus(c+48,"memtoReg_o", false,-1, 1,0);
    tracep->declBit(c+90,"memRead_o", false,-1);
    tracep->declBit(c+53,"memWrite_o", false,-1);
    tracep->declBus(c+40,"sum_o", false,-1, 31,0);
    tracep->declBus(c+88,"aluout_o", false,-1, 31,0);
    tracep->declBus(c+41,"rs2_EXMEM_o", false,-1, 31,0);
    tracep->declBus(c+59,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ForwardingUnit ");
    tracep->declBus(c+66,"ID_EX_rs1", false,-1, 4,0);
    tracep->declBus(c+67,"ID_EX_rs2", false,-1, 4,0);
    tracep->declBus(c+68,"EX_MEM_rd", false,-1, 4,0);
    tracep->declBit(c+54,"EX_MEM_RegWrite", false,-1);
    tracep->declBus(c+165,"MEM_WB_rd", false,-1, 4,0);
    tracep->declBit(c+57,"MEM_WB_RegWrite", false,-1);
    tracep->declBus(c+45,"ForwardA", false,-1, 1,0);
    tracep->declBus(c+46,"ForwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_HazardDetectionUnit ");
    tracep->declBus(c+76,"IF_ID_rs1", false,-1, 4,0);
    tracep->declBus(c+77,"IF_ID_rs2", false,-1, 4,0);
    tracep->declBus(c+69,"ID_EX_rd", false,-1, 4,0);
    tracep->declBus(c+68,"EX_MEM_rd", false,-1, 4,0);
    tracep->declBit(c+89,"ID_EX_MemRead", false,-1);
    tracep->declBit(c+52,"ID_EX_regWrite", false,-1);
    tracep->declBit(c+54,"EX_MEM_regWrite", false,-1);
    tracep->declBit(c+104,"PCWrite", false,-1);
    tracep->declBit(c+103,"IF_ID_Write", false,-1);
    tracep->declBit(c+105,"control_signal_mux", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_register ");
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+107,"rst", false,-1);
    tracep->declBit(c+97,"memRead", false,-1);
    tracep->declBus(c+100,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+101,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+98,"memWrite", false,-1);
    tracep->declBit(c+102,"ALUSrc", false,-1);
    tracep->declBit(c+99,"regWrite", false,-1);
    tracep->declBus(c+81,"sum", false,-1, 31,0);
    tracep->declBus(c+82,"readData1", false,-1, 31,0);
    tracep->declBus(c+83,"readData2", false,-1, 31,0);
    tracep->declBus(c+70,"imm", false,-1, 31,0);
    tracep->declBus(c+79,"inst", false,-1, 31,0);
    tracep->declBit(c+89,"memRead_o", false,-1);
    tracep->declBus(c+47,"memtoReg_o", false,-1, 1,0);
    tracep->declBus(c+34,"ALUOp_o", false,-1, 2,0);
    tracep->declBit(c+51,"memWrite_o", false,-1);
    tracep->declBit(c+50,"ALUSrc_o", false,-1);
    tracep->declBit(c+52,"regWrite_o", false,-1);
    tracep->declBus(c+38,"sum_o", false,-1, 31,0);
    tracep->declBus(c+36,"readData1_o", false,-1, 31,0);
    tracep->declBus(c+37,"readData2_o", false,-1, 31,0);
    tracep->declBus(c+35,"imm_o", false,-1, 31,0);
    tracep->declBus(c+58,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Register ");
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+107,"rst", false,-1);
    tracep->declBit(c+103,"IF_ID_Write", false,-1);
    tracep->declBit(c+84,"flush", false,-1);
    tracep->declBus(c+79,"inst_i", false,-1, 31,0);
    tracep->declBus(c+80,"pc_i", false,-1, 31,0);
    tracep->declBus(c+81,"pc_plus4_i", false,-1, 31,0);
    tracep->declBus(c+71,"instr_o", false,-1, 31,0);
    tracep->declBus(c+72,"pc_o", false,-1, 31,0);
    tracep->declBus(c+73,"pc_plus4_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+71,"inst", false,-1, 31,0);
    tracep->declBus(c+70,"imm", false,-1, 31,0);
    tracep->declBus(c+74,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+80,"readAddr", false,-1, 31,0);
    tracep->declBus(c+79,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_register ");
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+107,"rst", false,-1);
    tracep->declBit(c+54,"regWrite", false,-1);
    tracep->declBus(c+48,"memtoReg", false,-1, 1,0);
    tracep->declBit(c+90,"memRead", false,-1);
    tracep->declBit(c+53,"memWrite", false,-1);
    tracep->declBus(c+40,"sum", false,-1, 31,0);
    tracep->declBus(c+88,"aluout", false,-1, 31,0);
    tracep->declBus(c+143,"readDataMem", false,-1, 31,0);
    tracep->declBit(c+57,"regWrite_o", false,-1);
    tracep->declBus(c+49,"memtoReg_o", false,-1, 1,0);
    tracep->declBit(c+55,"memRead_o", false,-1);
    tracep->declBit(c+56,"memWrite_o", false,-1);
    tracep->declBus(c+42,"sum_o", false,-1, 31,0);
    tracep->declBus(c+39,"aluout_o", false,-1, 31,0);
    tracep->declBus(c+43,"readDataMem_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MUX_ALUSrc1 ");
    tracep->declBus(c+36,"s0", false,-1, 31,0);
    tracep->declBus(c+44,"s1", false,-1, 31,0);
    tracep->declBus(c+153,"s2", false,-1, 31,0);
    tracep->declBus(c+45,"sel", false,-1, 1,0);
    tracep->declBus(c+61,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MUX_ALUSrc2 ");
    tracep->declBus(c+60,"s0", false,-1, 31,0);
    tracep->declBus(c+44,"s1", false,-1, 31,0);
    tracep->declBus(c+153,"s2", false,-1, 31,0);
    tracep->declBus(c+46,"sel", false,-1, 1,0);
    tracep->declBus(c+62,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MuxCtrl ");
    tracep->declBit(c+105,"sel", false,-1);
    tracep->declBit(c+91,"memRead", false,-1);
    tracep->declBus(c+96,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+94,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+92,"memWrite", false,-1);
    tracep->declBit(c+95,"ALUSrc", false,-1);
    tracep->declBit(c+93,"regWrite", false,-1);
    tracep->declBit(c+97,"memRead_o", false,-1);
    tracep->declBus(c+100,"memtoReg_o", false,-1, 1,0);
    tracep->declBus(c+101,"ALUOp_o", false,-1, 2,0);
    tracep->declBit(c+98,"memWrite_o", false,-1);
    tracep->declBit(c+102,"ALUSrc_o", false,-1);
    tracep->declBit(c+99,"regWrite_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_IDEX_1 ");
    tracep->declBus(c+166,"size", false,-1, 31,0);
    tracep->declBit(c+50,"sel", false,-1);
    tracep->declBus(c+37,"s0", false,-1, 31,0);
    tracep->declBus(c+35,"s1", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+81,"nextPC", false,-1, 31,0);
    tracep->declBus(c+141,"aluResult", false,-1, 31,0);
    tracep->declBit(c+84,"PCSel", false,-1);
    tracep->declBus(c+140,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WR ");
    tracep->declBus(c+39,"AluData", false,-1, 31,0);
    tracep->declBus(c+42,"newPC", false,-1, 31,0);
    tracep->declBus(c+43,"mem", false,-1, 31,0);
    tracep->declBus(c+49,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+44,"outResult", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+107,"rst", false,-1);
    tracep->declBus(c+140,"pc_i", false,-1, 31,0);
    tracep->declBit(c+104,"PCWrite", false,-1);
    tracep->declBus(c+80,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+107,"rst", false,-1);
    tracep->declBit(c+57,"regWrite", false,-1);
    tracep->declBus(c+76,"readReg1", false,-1, 4,0);
    tracep->declBus(c+77,"readReg2", false,-1, 4,0);
    tracep->declBus(c+78,"writeReg", false,-1, 4,0);
    tracep->declBus(c+44,"writeData", false,-1, 31,0);
    tracep->declBus(c+82,"readData1", false,-1, 31,0);
    tracep->declBus(c+83,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_branchComp ");
    tracep->declBus(c+82,"rs1", false,-1, 31,0);
    tracep->declBus(c+83,"rs2", false,-1, 31,0);
    tracep->declBus(c+74,"opcode", false,-1, 6,0);
    tracep->declBus(c+75,"funct3", false,-1, 2,0);
    tracep->declBit(c+84,"flush", false,-1);
    tracep->declBit(c+85,"BrEq", false,-1);
    tracep->declBit(c+86,"BrLT", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullCData(oldp+33,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullCData(oldp+34,(vlSelf->PipelineCPU__DOT__ALUOp_IDEX),3);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__imm_IDEX),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__readData1_IDEX),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__readData2_IDEX),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__sum_IDEX),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__aluout_MEMWB),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__sum_EXMEM),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__rs2_EXMEM),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__sum_MEMWB),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__readDataMem_MEMWB),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__finalout),32);
    bufp->fullCData(oldp+45,(vlSelf->PipelineCPU__DOT__ForwardA),2);
    bufp->fullCData(oldp+46,(vlSelf->PipelineCPU__DOT__ForwardB),2);
    bufp->fullCData(oldp+47,(vlSelf->PipelineCPU__DOT__memtoReg_IDEX),2);
    bufp->fullCData(oldp+48,(vlSelf->PipelineCPU__DOT__memtoReg_EXMEM),2);
    bufp->fullCData(oldp+49,(vlSelf->PipelineCPU__DOT__memtoReg_MEMWB),2);
    bufp->fullBit(oldp+50,(vlSelf->PipelineCPU__DOT__ALUSrc_IDEX));
    bufp->fullBit(oldp+51,(vlSelf->PipelineCPU__DOT__memWrite_IDEX));
    bufp->fullBit(oldp+52,(vlSelf->PipelineCPU__DOT__regWrite_IDEX));
    bufp->fullBit(oldp+53,(vlSelf->PipelineCPU__DOT__memWrite_EXMEM));
    bufp->fullBit(oldp+54,(vlSelf->PipelineCPU__DOT__regWrite_EXMEM));
    bufp->fullBit(oldp+55,(vlSelf->PipelineCPU__DOT__memRead_MEMWB));
    bufp->fullBit(oldp+56,(vlSelf->PipelineCPU__DOT__memWrite_MEMWB));
    bufp->fullBit(oldp+57,(vlSelf->PipelineCPU__DOT__regWrite_MEMWB));
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__inst_IDEX),32);
    bufp->fullIData(oldp+59,(vlSelf->PipelineCPU__DOT__inst_EXMEM),32);
    bufp->fullIData(oldp+60,(((IData)(vlSelf->PipelineCPU__DOT__ALUSrc_IDEX)
                               ? vlSelf->PipelineCPU__DOT__imm_IDEX
                               : vlSelf->PipelineCPU__DOT__readData2_IDEX)),32);
    bufp->fullIData(oldp+61,(vlSelf->PipelineCPU__DOT__ALUSrc1),32);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__ALUSrc2),32);
    bufp->fullBit(oldp+63,((1U & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+64,((7U & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+65,((((IData)(vlSelf->PipelineCPU__DOT__ALUOp_IDEX) 
                               << 4U) | ((8U & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                                >> 0x1bU)) 
                                         | (7U & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                                  >> 0xcU))))),7);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+67,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+68,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_EXMEM 
                                       >> 7U))),5);
    bufp->fullCData(oldp+69,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                       >> 7U))),5);
    bufp->fullIData(oldp+70,(vlSelf->PipelineCPU__DOT__imm),32);
    bufp->fullIData(oldp+71,(vlSelf->PipelineCPU__DOT__inst_IFID),32);
    bufp->fullIData(oldp+72,(vlSelf->PipelineCPU__DOT__pc_IFID),32);
    bufp->fullIData(oldp+73,(vlSelf->PipelineCPU__DOT__sum_IFID),32);
    bufp->fullCData(oldp+74,((0x7fU & vlSelf->PipelineCPU__DOT__inst_IFID)),7);
    bufp->fullCData(oldp+75,((7U & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+76,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+77,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+78,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                       >> 7U))),5);
    bufp->fullIData(oldp+79,(vlSelf->PipelineCPU__DOT__inst),32);
    bufp->fullIData(oldp+80,(vlSelf->PipelineCPU__DOT__pc_o),32);
    bufp->fullIData(oldp+81,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)),32);
    bufp->fullIData(oldp+82,(vlSelf->PipelineCPU__DOT__readData1),32);
    bufp->fullIData(oldp+83,(vlSelf->PipelineCPU__DOT__readData2),32);
    bufp->fullBit(oldp+84,(vlSelf->PipelineCPU__DOT__flush));
    bufp->fullBit(oldp+85,(vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrEq));
    bufp->fullBit(oldp+86,(vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrLT));
    bufp->fullIData(oldp+87,(vlSelf->PipelineCPU__DOT__aluout),32);
    bufp->fullIData(oldp+88,(vlSelf->PipelineCPU__DOT__aluout_EXMEM),32);
    bufp->fullBit(oldp+89,(vlSelf->PipelineCPU__DOT__memRead_IDEX));
    bufp->fullBit(oldp+90,(vlSelf->PipelineCPU__DOT__memRead_EXMEM));
    bufp->fullBit(oldp+91,(vlSelf->PipelineCPU__DOT__memRead));
    bufp->fullBit(oldp+92,(vlSelf->PipelineCPU__DOT__memWrite));
    bufp->fullBit(oldp+93,(vlSelf->PipelineCPU__DOT__regWrite));
    bufp->fullCData(oldp+94,(vlSelf->PipelineCPU__DOT__ALUOp),3);
    bufp->fullBit(oldp+95,(vlSelf->PipelineCPU__DOT__ALUSrc));
    bufp->fullCData(oldp+96,(vlSelf->PipelineCPU__DOT__memtoReg),2);
    bufp->fullBit(oldp+97,(((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                            & (IData)(vlSelf->PipelineCPU__DOT__memRead))));
    bufp->fullBit(oldp+98,(((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                            & (IData)(vlSelf->PipelineCPU__DOT__memWrite))));
    bufp->fullBit(oldp+99,(((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                            & (IData)(vlSelf->PipelineCPU__DOT__regWrite))));
    bufp->fullCData(oldp+100,(((IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)
                                ? 0U : (IData)(vlSelf->PipelineCPU__DOT__memtoReg))),2);
    bufp->fullCData(oldp+101,(((IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)
                                ? 0U : (IData)(vlSelf->PipelineCPU__DOT__ALUOp))),3);
    bufp->fullBit(oldp+102,(((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                             & (IData)(vlSelf->PipelineCPU__DOT__ALUSrc))));
    bufp->fullBit(oldp+103,(vlSelf->PipelineCPU__DOT__IF_ID_Write));
    bufp->fullBit(oldp+104,(vlSelf->PipelineCPU__DOT__PCWrite));
    bufp->fullBit(oldp+105,(vlSelf->PipelineCPU__DOT__control_signal_mux));
    bufp->fullBit(oldp+106,(vlSelf->clk));
    bufp->fullBit(oldp+107,(vlSelf->start));
    bufp->fullIData(oldp+108,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+139,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+140,(vlSelf->PipelineCPU__DOT__pc_i),32);
    bufp->fullIData(oldp+141,((((IData)((0x67U == (0x707fU 
                                                   & vlSelf->PipelineCPU__DOT__inst_IFID)))
                                 ? vlSelf->PipelineCPU__DOT__readData1
                                 : vlSelf->PipelineCPU__DOT__pc_IFID) 
                               + vlSelf->PipelineCPU__DOT__imm)),32);
    bufp->fullIData(oldp+142,(((IData)((0x67U == (0x707fU 
                                                  & vlSelf->PipelineCPU__DOT__inst_IFID)))
                                ? vlSelf->PipelineCPU__DOT__readData1
                                : vlSelf->PipelineCPU__DOT__pc_IFID)),32);
    bufp->fullIData(oldp+143,(vlSelf->PipelineCPU__DOT__readDataMem),32);
    bufp->fullBit(oldp+144,(vlSelf->PipelineCPU__DOT__ASel));
    bufp->fullBit(oldp+145,(vlSelf->PipelineCPU__DOT__BSel));
    bufp->fullIData(oldp+146,(vlSelf->PipelineCPU__DOT__writeData),32);
    bufp->fullIData(oldp+147,(vlSelf->PipelineCPU__DOT__ALUin1),32);
    bufp->fullIData(oldp+148,(vlSelf->PipelineCPU__DOT__ALUin2),32);
    bufp->fullIData(oldp+149,(vlSelf->PipelineCPU__DOT__ALUResult),32);
    bufp->fullBit(oldp+150,(vlSelf->PipelineCPU__DOT__BrEq));
    bufp->fullBit(oldp+151,(vlSelf->PipelineCPU__DOT__BrLT));
    bufp->fullBit(oldp+152,(vlSelf->PipelineCPU__DOT__PCSel));
    bufp->fullIData(oldp+153,(vlSelf->PipelineCPU__DOT__aluResult_EXMEM),32);
    bufp->fullIData(oldp+154,(vlSelf->PipelineCPU__DOT__aluResult_MEMWB),32);
    bufp->fullCData(oldp+155,(vlSelf->PipelineCPU__DOT__ID_EX_rs1),5);
    bufp->fullCData(oldp+156,(vlSelf->PipelineCPU__DOT__ID_EX_rs2),5);
    bufp->fullCData(oldp+157,(vlSelf->PipelineCPU__DOT__EX_MEM_rd),5);
    bufp->fullCData(oldp+158,(vlSelf->PipelineCPU__DOT__MEM_WB_rd),5);
    bufp->fullBit(oldp+159,(vlSelf->PipelineCPU__DOT__ID_EX_regWrite));
    bufp->fullBit(oldp+160,(vlSelf->PipelineCPU__DOT__EX_MEM_regWrite));
    bufp->fullBit(oldp+161,(vlSelf->PipelineCPU__DOT__MEM_WB_regWrite));
    bufp->fullIData(oldp+162,(vlSelf->PipelineCPU__DOT__rs2),32);
    bufp->fullIData(oldp+163,(vlSelf->PipelineCPU__DOT__inst_MEMWB),32);
    bufp->fullIData(oldp+164,(4U),32);
    bufp->fullCData(oldp+165,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_MEMWB 
                                        >> 7U))),5);
    bufp->fullIData(oldp+166,(0x20U),32);
}
