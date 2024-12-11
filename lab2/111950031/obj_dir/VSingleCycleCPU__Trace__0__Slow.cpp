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
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+63+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+63+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+52,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"sum", false,-1, 31,0);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->declBit(c+42,"memRead", false,-1);
    tracep->declBit(c+43,"memWrite", false,-1);
    tracep->declBit(c+44,"regWrite", false,-1);
    tracep->declBit(c+45,"ASel", false,-1);
    tracep->declBit(c+46,"BSel", false,-1);
    tracep->declBus(c+95,"writeData", false,-1, 31,0);
    tracep->declBus(c+53,"readData1", false,-1, 31,0);
    tracep->declBus(c+54,"readData2", false,-1, 31,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBus(c+55,"ALUin1", false,-1, 31,0);
    tracep->declBus(c+56,"ALUin2", false,-1, 31,0);
    tracep->declBus(c+57,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+47,"ALUOp", false,-1, 2,0);
    tracep->declBus(c+48,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+96,"readDataMem", false,-1, 31,0);
    tracep->declBus(c+49,"ALUCtl", false,-1, 3,0);
    tracep->declBit(c+58,"BrEq", false,-1);
    tracep->declBit(c+59,"BrLT", false,-1);
    tracep->declBit(c+50,"PCSel", false,-1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+49,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+55,"A", false,-1, 31,0);
    tracep->declBus(c+56,"B", false,-1, 31,0);
    tracep->declBit(c+58,"BrEq", false,-1);
    tracep->declBit(c+59,"BrLT", false,-1);
    tracep->declBus(c+57,"ALUOut", false,-1, 31,0);
    tracep->declBus(c+60,"combine", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+47,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+5,"funct7", false,-1);
    tracep->declBus(c+6,"funct3", false,-1, 2,0);
    tracep->declBus(c+49,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+97,"combine", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+98,"b", false,-1, 31,0);
    tracep->declBus(c+2,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+7,"opcode", false,-1, 6,0);
    tracep->declBit(c+50,"PCSel", false,-1);
    tracep->declBit(c+45,"ASel", false,-1);
    tracep->declBit(c+42,"memRead", false,-1);
    tracep->declBus(c+48,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+47,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+43,"memWrite", false,-1);
    tracep->declBit(c+46,"BSel", false,-1);
    tracep->declBit(c+44,"regWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+62,"rst", false,-1);
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+43,"memWrite", false,-1);
    tracep->declBit(c+42,"memRead", false,-1);
    tracep->declBus(c+57,"address", false,-1, 31,0);
    tracep->declBus(c+54,"writeData", false,-1, 31,0);
    tracep->declBus(c+96,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBus(c+7,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+1,"readAddr", false,-1, 31,0);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU_1 ");
    tracep->declBus(c+99,"size", false,-1, 31,0);
    tracep->declBit(c+45,"sel", false,-1);
    tracep->declBus(c+53,"s0", false,-1, 31,0);
    tracep->declBus(c+1,"s1", false,-1, 31,0);
    tracep->declBus(c+55,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU_2 ");
    tracep->declBus(c+99,"size", false,-1, 31,0);
    tracep->declBit(c+46,"sel", false,-1);
    tracep->declBus(c+54,"s0", false,-1, 31,0);
    tracep->declBus(c+4,"s1", false,-1, 31,0);
    tracep->declBus(c+56,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+2,"nextPC", false,-1, 31,0);
    tracep->declBus(c+57,"aluResult", false,-1, 31,0);
    tracep->declBit(c+50,"PCSel", false,-1);
    tracep->declBus(c+52,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+2,"newPC", false,-1, 31,0);
    tracep->declBus(c+57,"AluData", false,-1, 31,0);
    tracep->declBus(c+96,"mem", false,-1, 31,0);
    tracep->declBus(c+48,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+95,"outResult", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"rst", false,-1);
    tracep->declBus(c+52,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"rst", false,-1);
    tracep->declBit(c+44,"regWrite", false,-1);
    tracep->declBus(c+8,"readReg1", false,-1, 4,0);
    tracep->declBus(c+9,"readReg2", false,-1, 4,0);
    tracep->declBus(c+51,"writeReg", false,-1, 4,0);
    tracep->declBus(c+95,"writeData", false,-1, 31,0);
    tracep->declBus(c+53,"readData1", false,-1, 31,0);
    tracep->declBus(c+54,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+10+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_branchComp ");
    tracep->declBus(c+53,"rs1", false,-1, 31,0);
    tracep->declBus(c+54,"rs2", false,-1, 31,0);
    tracep->declBit(c+58,"BrEq", false,-1);
    tracep->declBit(c+59,"BrLT", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__pc_o),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o)),32);
    bufp->fullIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__inst),32);
    bufp->fullIData(oldp+4,(vlSelf->SingleCycleCPU__DOT__imm),32);
    bufp->fullBit(oldp+5,(((0x80U > vlSelf->SingleCycleCPU__DOT__pc_o) 
                           & ((IData)(vlSelf->__VdfgTmp_h98940ace__0) 
                              >> 6U))));
    bufp->fullCData(oldp+6,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o)
                              ? 0U : (7U & ((IData)(vlSelf->__VdfgTmp_h0374c2a2__0) 
                                            >> 4U)))),3);
    bufp->fullCData(oldp+7,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode),7);
    bufp->fullCData(oldp+8,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o)
                              ? 0U : (0x1fU & (vlSelf->__VdfgTmp_h9594e3d4__0 
                                               >> 0xfU)))),5);
    bufp->fullCData(oldp+9,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o)
                              ? 0U : (0x1fU & (vlSelf->__VdfgTmp_he45b3cba__0 
                                               >> 0x14U)))),5);
    bufp->fullIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+13,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+14,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+21,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+22,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+23,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullBit(oldp+42,(vlSelf->SingleCycleCPU__DOT__memRead));
    bufp->fullBit(oldp+43,(vlSelf->SingleCycleCPU__DOT__memWrite));
    bufp->fullBit(oldp+44,(vlSelf->SingleCycleCPU__DOT__regWrite));
    bufp->fullBit(oldp+45,(vlSelf->SingleCycleCPU__DOT__ASel));
    bufp->fullBit(oldp+46,(vlSelf->SingleCycleCPU__DOT__BSel));
    bufp->fullCData(oldp+47,(vlSelf->SingleCycleCPU__DOT__ALUOp),3);
    bufp->fullCData(oldp+48,(vlSelf->SingleCycleCPU__DOT__memtoReg),2);
    bufp->fullCData(oldp+49,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
    bufp->fullBit(oldp+50,(vlSelf->SingleCycleCPU__DOT__PCSel));
    bufp->fullCData(oldp+51,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg),5);
    bufp->fullIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__pc_i),32);
    bufp->fullIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__readData1),32);
    bufp->fullIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__readData2),32);
    bufp->fullIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__ALUin1),32);
    bufp->fullIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__ALUin2),32);
    bufp->fullIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__ALUResult),32);
    bufp->fullBit(oldp+58,(vlSelf->SingleCycleCPU__DOT__BrEq));
    bufp->fullBit(oldp+59,(vlSelf->SingleCycleCPU__DOT__BrLT));
    bufp->fullCData(oldp+60,(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__combine),2);
    bufp->fullBit(oldp+61,(vlSelf->clk));
    bufp->fullBit(oldp+62,(vlSelf->start));
    bufp->fullIData(oldp+63,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+64,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+65,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+66,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+67,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+68,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+69,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+70,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+71,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+72,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+73,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+74,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+75,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+76,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+77,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+78,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+79,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+80,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+81,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+82,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+83,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+84,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+85,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+86,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+87,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+88,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+89,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+90,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+91,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+92,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+93,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+94,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+95,(vlSelf->SingleCycleCPU__DOT__writeData),32);
    bufp->fullIData(oldp+96,(vlSelf->SingleCycleCPU__DOT__readDataMem),32);
    bufp->fullCData(oldp+97,((((IData)(vlSelf->SingleCycleCPU__DOT__ALUOp) 
                               << 4U) | ((0x1ffffff8U 
                                          & (((0x80U 
                                               > vlSelf->SingleCycleCPU__DOT__pc_o) 
                                              << 3U) 
                                             & ((IData)(vlSelf->__VdfgTmp_h98940ace__0) 
                                                >> 3U))) 
                                         | ((0x80U 
                                             <= vlSelf->SingleCycleCPU__DOT__pc_o)
                                             ? 0U : 
                                            (7U & ((IData)(vlSelf->__VdfgTmp_h0374c2a2__0) 
                                                   >> 4U)))))),7);
    bufp->fullIData(oldp+98,(4U),32);
    bufp->fullIData(oldp+99,(0x20U),32);
}
