// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_sub__TOP__0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+97+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+97+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+80,"added_pc", false,-1, 31,0);
    tracep->declBus(c+1,"PC_EXMEM", false,-1, 31,0);
    tracep->declBus(c+129,"pc_in", false,-1, 31,0);
    tracep->declBus(c+81,"pc_out", false,-1, 31,0);
    tracep->declBus(c+2,"PC_out_IFID", false,-1, 31,0);
    tracep->declBus(c+3,"PC_out_IDEX", false,-1, 31,0);
    tracep->declBus(c+4,"PC_adder_out", false,-1, 31,0);
    tracep->declBit(c+5,"PCSrc", false,-1);
    tracep->declBus(c+82,"inst", false,-1, 31,0);
    tracep->declBus(c+6,"inst_IFID", false,-1, 31,0);
    tracep->declBus(c+7,"inst_IDEX", false,-1, 31,0);
    tracep->declBus(c+8,"inst_EXMEM", false,-1, 31,0);
    tracep->declBus(c+9,"inst_MEMWB", false,-1, 31,0);
    tracep->declBus(c+10,"imm", false,-1, 31,0);
    tracep->declBus(c+11,"imm_IDEX", false,-1, 31,0);
    tracep->declBus(c+12,"imm_shifted", false,-1, 31,0);
    tracep->declBus(c+130,"readData1", false,-1, 31,0);
    tracep->declBus(c+131,"readData2", false,-1, 31,0);
    tracep->declBus(c+13,"readData1_IDEX", false,-1, 31,0);
    tracep->declBus(c+14,"readData2_IDEX", false,-1, 31,0);
    tracep->declBus(c+15,"readData2_EXMEM", false,-1, 31,0);
    tracep->declBus(c+132,"readData", false,-1, 31,0);
    tracep->declBus(c+16,"readData_MEMWB", false,-1, 31,0);
    tracep->declBus(c+17,"mux_out", false,-1, 31,0);
    tracep->declBus(c+83,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+84,"ALU_result_EXMEM", false,-1, 31,0);
    tracep->declBus(c+18,"ALU_result_MEMWB", false,-1, 31,0);
    tracep->declBus(c+19,"mux_ALU_out", false,-1, 31,0);
    tracep->declBus(c+20,"ALUCtl", false,-1, 3,0);
    tracep->declBit(c+85,"ALU_zero", false,-1);
    tracep->declBit(c+21,"ALU_zero_EXMEM", false,-1);
    tracep->declBit(c+86,"branch", false,-1);
    tracep->declBit(c+87,"memRead", false,-1);
    tracep->declBit(c+88,"memtoReg", false,-1);
    tracep->declBit(c+89,"memWrite", false,-1);
    tracep->declBit(c+90,"ALUSrc", false,-1);
    tracep->declBit(c+91,"regWrite", false,-1);
    tracep->declBit(c+22,"branch_IDEX", false,-1);
    tracep->declBit(c+92,"memRead_IDEX", false,-1);
    tracep->declBit(c+23,"memtoReg_IDEX", false,-1);
    tracep->declBit(c+24,"memWrite_IDEX", false,-1);
    tracep->declBit(c+25,"ALUSrc_IDEX", false,-1);
    tracep->declBit(c+26,"regWrite_IDEX", false,-1);
    tracep->declBit(c+27,"branch_EXMEM", false,-1);
    tracep->declBit(c+93,"memRead_EXMEM", false,-1);
    tracep->declBit(c+28,"memtoReg_EXMEM", false,-1);
    tracep->declBit(c+29,"memWrite_EXMEM", false,-1);
    tracep->declBit(c+30,"ALUSrc_EXMEM", false,-1);
    tracep->declBit(c+31,"regWrite_EXMEM", false,-1);
    tracep->declBit(c+32,"branch_MEMWB", false,-1);
    tracep->declBit(c+33,"memRead_MEMWB", false,-1);
    tracep->declBit(c+34,"memtoReg_MEMWB", false,-1);
    tracep->declBit(c+35,"memWrite_MEMWB", false,-1);
    tracep->declBit(c+36,"ALUSrc_MEMWB", false,-1);
    tracep->declBit(c+37,"regWrite_MEMWB", false,-1);
    tracep->declBus(c+94,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+38,"ALUOp_IDEX", false,-1, 1,0);
    tracep->declBus(c+39,"ALUOp_EXMEM", false,-1, 1,0);
    tracep->declBus(c+40,"ALUOp_MEMWB", false,-1, 1,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+20,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+13,"A", false,-1, 31,0);
    tracep->declBus(c+19,"B", false,-1, 31,0);
    tracep->declBus(c+83,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+85,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+38,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+41,"funct7", false,-1);
    tracep->declBus(c+42,"funct3", false,-1, 2,0);
    tracep->declBus(c+20,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+43,"combine", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU_EXMEM ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+83,"p_in", false,-1, 31,0);
    tracep->declBus(c+84,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU_MEMWB ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+84,"p_in", false,-1, 31,0);
    tracep->declBus(c+18,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU_zero_EXMEM ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+85,"p_in", false,-1);
    tracep->declBit(c+21,"p_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+81,"a", false,-1, 31,0);
    tracep->declBus(c+134,"b", false,-1, 31,0);
    tracep->declBus(c+80,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+3,"a", false,-1, 31,0);
    tracep->declBus(c+12,"b", false,-1, 31,0);
    tracep->declBus(c+4,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+44,"opcode", false,-1, 6,0);
    tracep->declBit(c+86,"branch", false,-1);
    tracep->declBit(c+87,"memRead", false,-1);
    tracep->declBit(c+88,"memtoReg", false,-1);
    tracep->declBus(c+94,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+89,"memWrite", false,-1);
    tracep->declBit(c+90,"ALUSrc", false,-1);
    tracep->declBit(c+91,"regWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control_EXMEM ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+22,"branch", false,-1);
    tracep->declBit(c+92,"memRead", false,-1);
    tracep->declBit(c+23,"memtoReg", false,-1);
    tracep->declBus(c+38,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+24,"memWrite", false,-1);
    tracep->declBit(c+25,"ALUSrc", false,-1);
    tracep->declBit(c+26,"regWrite", false,-1);
    tracep->declBit(c+27,"branch_out", false,-1);
    tracep->declBit(c+93,"memRead_out", false,-1);
    tracep->declBit(c+28,"memtoReg_out", false,-1);
    tracep->declBus(c+39,"ALUOp_out", false,-1, 1,0);
    tracep->declBit(c+29,"memWrite_out", false,-1);
    tracep->declBit(c+30,"ALUSrc_out", false,-1);
    tracep->declBit(c+31,"regWrite_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control_IDEX ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+86,"branch", false,-1);
    tracep->declBit(c+87,"memRead", false,-1);
    tracep->declBit(c+88,"memtoReg", false,-1);
    tracep->declBus(c+94,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+89,"memWrite", false,-1);
    tracep->declBit(c+90,"ALUSrc", false,-1);
    tracep->declBit(c+91,"regWrite", false,-1);
    tracep->declBit(c+22,"branch_out", false,-1);
    tracep->declBit(c+92,"memRead_out", false,-1);
    tracep->declBit(c+23,"memtoReg_out", false,-1);
    tracep->declBus(c+38,"ALUOp_out", false,-1, 1,0);
    tracep->declBit(c+24,"memWrite_out", false,-1);
    tracep->declBit(c+25,"ALUSrc_out", false,-1);
    tracep->declBit(c+26,"regWrite_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control_MEMWB ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"branch", false,-1);
    tracep->declBit(c+93,"memRead", false,-1);
    tracep->declBit(c+28,"memtoReg", false,-1);
    tracep->declBus(c+39,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+29,"memWrite", false,-1);
    tracep->declBit(c+30,"ALUSrc", false,-1);
    tracep->declBit(c+31,"regWrite", false,-1);
    tracep->declBit(c+32,"branch_out", false,-1);
    tracep->declBit(c+33,"memRead_out", false,-1);
    tracep->declBit(c+34,"memtoReg_out", false,-1);
    tracep->declBus(c+40,"ALUOp_out", false,-1, 1,0);
    tracep->declBit(c+35,"memWrite_out", false,-1);
    tracep->declBit(c+36,"ALUSrc_out", false,-1);
    tracep->declBit(c+37,"regWrite_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DMem_MEMWB ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+132,"p_in", false,-1, 31,0);
    tracep->declBus(c+16,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+29,"memWrite", false,-1);
    tracep->declBit(c+93,"memRead", false,-1);
    tracep->declBus(c+84,"address", false,-1, 31,0);
    tracep->declBus(c+15,"writeData", false,-1, 31,0);
    tracep->declBus(c+132,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+10,"imm", false,-1, 31,0);
    tracep->declBus(c+44,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Imm_IDEX ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+10,"p_in", false,-1, 31,0);
    tracep->declBus(c+11,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+81,"readAddr", false,-1, 31,0);
    tracep->declBus(c+82,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+25,"sel", false,-1);
    tracep->declBus(c+14,"s0", false,-1, 31,0);
    tracep->declBus(c+11,"s1", false,-1, 31,0);
    tracep->declBus(c+19,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+5,"sel", false,-1);
    tracep->declBus(c+80,"s0", false,-1, 31,0);
    tracep->declBus(c+1,"s1", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+34,"sel", false,-1);
    tracep->declBus(c+18,"s0", false,-1, 31,0);
    tracep->declBus(c+16,"s1", false,-1, 31,0);
    tracep->declBus(c+17,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+129,"pc_i", false,-1, 31,0);
    tracep->declBus(c+81,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC_EXMEM ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+4,"p_in", false,-1, 31,0);
    tracep->declBus(c+1,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC_IDEX ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+2,"p_in", false,-1, 31,0);
    tracep->declBus(c+3,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC_IFID ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+81,"p_in", false,-1, 31,0);
    tracep->declBus(c+2,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+37,"regWrite", false,-1);
    tracep->declBus(c+45,"readReg1", false,-1, 4,0);
    tracep->declBus(c+46,"readReg2", false,-1, 4,0);
    tracep->declBus(c+47,"writeReg", false,-1, 4,0);
    tracep->declBus(c+17,"writeData", false,-1, 31,0);
    tracep->declBus(c+130,"readData1", false,-1, 31,0);
    tracep->declBus(c+131,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+48+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+11,"i", false,-1, 31,0);
    tracep->declBus(c+12,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_inst_EXMEM ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+7,"p_in", false,-1, 31,0);
    tracep->declBus(c+8,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_inst_IDEX ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+6,"p_in", false,-1, 31,0);
    tracep->declBus(c+7,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_inst_IFID ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+82,"p_in", false,-1, 31,0);
    tracep->declBus(c+6,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_inst_MEMWB ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+8,"p_in", false,-1, 31,0);
    tracep->declBus(c+9,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_readData1_IDEX ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+130,"p_in", false,-1, 31,0);
    tracep->declBus(c+13,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_readData2_EXMEM ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+14,"p_in", false,-1, 31,0);
    tracep->declBus(c+15,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_readData2_IDEX ");
    tracep->declBus(c+133,"size", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+131,"p_in", false,-1, 31,0);
    tracep->declBus(c+14,"p_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_top\n"); );
    // Body
    VSingleCycleCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingleCycleCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingleCycleCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__PC_EXMEM),32);
    bufp->fullIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__PC_out_IFID),32);
    bufp->fullIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__PC_out_IDEX),32);
    bufp->fullIData(oldp+4,((vlSelf->SingleCycleCPU__DOT__PC_out_IDEX 
                             + (vlSelf->SingleCycleCPU__DOT__imm_IDEX 
                                << 1U))),32);
    bufp->fullBit(oldp+5,(((IData)(vlSelf->SingleCycleCPU__DOT__ALU_zero_EXMEM) 
                           & (IData)(vlSelf->SingleCycleCPU__DOT__branch_EXMEM))));
    bufp->fullIData(oldp+6,(vlSelf->SingleCycleCPU__DOT__inst_IFID),32);
    bufp->fullIData(oldp+7,(vlSelf->SingleCycleCPU__DOT__inst_IDEX),32);
    bufp->fullIData(oldp+8,(vlSelf->SingleCycleCPU__DOT__inst_EXMEM),32);
    bufp->fullIData(oldp+9,(vlSelf->SingleCycleCPU__DOT__inst_MEMWB),32);
    bufp->fullIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__imm),32);
    bufp->fullIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__imm_IDEX),32);
    bufp->fullIData(oldp+12,((vlSelf->SingleCycleCPU__DOT__imm_IDEX 
                              << 1U)),32);
    bufp->fullIData(oldp+13,(vlSelf->SingleCycleCPU__DOT__readData1_IDEX),32);
    bufp->fullIData(oldp+14,(vlSelf->SingleCycleCPU__DOT__readData2_IDEX),32);
    bufp->fullIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__readData2_EXMEM),32);
    bufp->fullIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__readData_MEMWB),32);
    bufp->fullIData(oldp+17,(((IData)(vlSelf->SingleCycleCPU__DOT__memtoReg_MEMWB)
                               ? vlSelf->SingleCycleCPU__DOT__readData_MEMWB
                               : vlSelf->SingleCycleCPU__DOT__ALU_result_MEMWB)),32);
    bufp->fullIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__ALU_result_MEMWB),32);
    bufp->fullIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__mux_ALU_out),32);
    bufp->fullCData(oldp+20,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
    bufp->fullBit(oldp+21,(vlSelf->SingleCycleCPU__DOT__ALU_zero_EXMEM));
    bufp->fullBit(oldp+22,(vlSelf->SingleCycleCPU__DOT__branch_IDEX));
    bufp->fullBit(oldp+23,(vlSelf->SingleCycleCPU__DOT__memtoReg_IDEX));
    bufp->fullBit(oldp+24,(vlSelf->SingleCycleCPU__DOT__memWrite_IDEX));
    bufp->fullBit(oldp+25,(vlSelf->SingleCycleCPU__DOT__ALUSrc_IDEX));
    bufp->fullBit(oldp+26,(vlSelf->SingleCycleCPU__DOT__regWrite_IDEX));
    bufp->fullBit(oldp+27,(vlSelf->SingleCycleCPU__DOT__branch_EXMEM));
    bufp->fullBit(oldp+28,(vlSelf->SingleCycleCPU__DOT__memtoReg_EXMEM));
    bufp->fullBit(oldp+29,(vlSelf->SingleCycleCPU__DOT__memWrite_EXMEM));
    bufp->fullBit(oldp+30,(vlSelf->SingleCycleCPU__DOT__ALUSrc_EXMEM));
    bufp->fullBit(oldp+31,(vlSelf->SingleCycleCPU__DOT__regWrite_EXMEM));
    bufp->fullBit(oldp+32,(vlSelf->SingleCycleCPU__DOT__branch_MEMWB));
    bufp->fullBit(oldp+33,(vlSelf->SingleCycleCPU__DOT__memRead_MEMWB));
    bufp->fullBit(oldp+34,(vlSelf->SingleCycleCPU__DOT__memtoReg_MEMWB));
    bufp->fullBit(oldp+35,(vlSelf->SingleCycleCPU__DOT__memWrite_MEMWB));
    bufp->fullBit(oldp+36,(vlSelf->SingleCycleCPU__DOT__ALUSrc_MEMWB));
    bufp->fullBit(oldp+37,(vlSelf->SingleCycleCPU__DOT__regWrite_MEMWB));
    bufp->fullCData(oldp+38,(vlSelf->SingleCycleCPU__DOT__ALUOp_IDEX),2);
    bufp->fullCData(oldp+39,(vlSelf->SingleCycleCPU__DOT__ALUOp_EXMEM),2);
    bufp->fullCData(oldp+40,(vlSelf->SingleCycleCPU__DOT__ALUOp_MEMWB),2);
    bufp->fullBit(oldp+41,((1U & (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+42,((7U & (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+43,((((IData)(vlSelf->SingleCycleCPU__DOT__ALUOp_IDEX) 
                               << 4U) | ((8U & (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                                >> 0x1bU)) 
                                         | (7U & (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                                  >> 0xcU))))),6);
    bufp->fullCData(oldp+44,((0x7fU & vlSelf->SingleCycleCPU__DOT__inst_IFID)),7);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_MEMWB 
                                       >> 7U))),5);
    bufp->fullIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+59,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+60,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+61,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+62,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+63,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+64,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+65,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+66,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+67,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+68,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+69,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+70,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+71,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+72,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+73,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+74,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+75,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+76,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+77,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+78,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+79,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+80,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_out)),32);
    bufp->fullIData(oldp+81,(vlSelf->SingleCycleCPU__DOT__pc_out),32);
    bufp->fullIData(oldp+82,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_out)
                               ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->SingleCycleCPU__DOT__pc_out)] 
                                        << 0x18U) | 
                                       ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
                                            + vlSelf->SingleCycleCPU__DOT__pc_out))] 
                                         << 0x10U) 
                                        | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->SingleCycleCPU__DOT__pc_out))] 
                                            << 8U) 
                                           | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & ((IData)(3U) 
                                                + vlSelf->SingleCycleCPU__DOT__pc_out))]))))),32);
    bufp->fullIData(oldp+83,(vlSelf->SingleCycleCPU__DOT__ALU_result),32);
    bufp->fullIData(oldp+84,(vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM),32);
    bufp->fullBit(oldp+85,((0U == vlSelf->SingleCycleCPU__DOT__ALU_result)));
    bufp->fullBit(oldp+86,(vlSelf->SingleCycleCPU__DOT__branch));
    bufp->fullBit(oldp+87,(vlSelf->SingleCycleCPU__DOT__memRead));
    bufp->fullBit(oldp+88,(vlSelf->SingleCycleCPU__DOT__memtoReg));
    bufp->fullBit(oldp+89,(vlSelf->SingleCycleCPU__DOT__memWrite));
    bufp->fullBit(oldp+90,(vlSelf->SingleCycleCPU__DOT__ALUSrc));
    bufp->fullBit(oldp+91,(vlSelf->SingleCycleCPU__DOT__regWrite));
    bufp->fullBit(oldp+92,(vlSelf->SingleCycleCPU__DOT__memRead_IDEX));
    bufp->fullBit(oldp+93,(vlSelf->SingleCycleCPU__DOT__memRead_EXMEM));
    bufp->fullCData(oldp+94,(vlSelf->SingleCycleCPU__DOT__ALUOp),2);
    bufp->fullBit(oldp+95,(vlSelf->clk));
    bufp->fullBit(oldp+96,(vlSelf->start));
    bufp->fullIData(oldp+97,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+98,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+99,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+100,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+129,((((IData)(vlSelf->SingleCycleCPU__DOT__ALU_zero_EXMEM) 
                                & (IData)(vlSelf->SingleCycleCPU__DOT__branch_EXMEM))
                                ? vlSelf->SingleCycleCPU__DOT__PC_EXMEM
                                : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_out))),32);
    bufp->fullIData(oldp+130,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+131,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+132,(vlSelf->SingleCycleCPU__DOT__readData),32);
    bufp->fullIData(oldp+133,(0x20U),32);
    bufp->fullIData(oldp+134,(4U),32);
}
