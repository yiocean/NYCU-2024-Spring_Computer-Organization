// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->SingleCycleCPU__DOT__PC_EXMEM),32);
        bufp->chgIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__PC_out_IFID),32);
        bufp->chgIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__PC_out_IDEX),32);
        bufp->chgIData(oldp+3,((vlSelf->SingleCycleCPU__DOT__PC_out_IDEX 
                                + (vlSelf->SingleCycleCPU__DOT__imm_IDEX 
                                   << 1U))),32);
        bufp->chgBit(oldp+4,(((IData)(vlSelf->SingleCycleCPU__DOT__ALU_zero_EXMEM) 
                              & (IData)(vlSelf->SingleCycleCPU__DOT__branch_EXMEM))));
        bufp->chgIData(oldp+5,(vlSelf->SingleCycleCPU__DOT__inst_IFID),32);
        bufp->chgIData(oldp+6,(vlSelf->SingleCycleCPU__DOT__inst_IDEX),32);
        bufp->chgIData(oldp+7,(vlSelf->SingleCycleCPU__DOT__inst_EXMEM),32);
        bufp->chgIData(oldp+8,(vlSelf->SingleCycleCPU__DOT__inst_MEMWB),32);
        bufp->chgIData(oldp+9,(vlSelf->SingleCycleCPU__DOT__imm),32);
        bufp->chgIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__imm_IDEX),32);
        bufp->chgIData(oldp+11,((vlSelf->SingleCycleCPU__DOT__imm_IDEX 
                                 << 1U)),32);
        bufp->chgIData(oldp+12,(vlSelf->SingleCycleCPU__DOT__readData1_IDEX),32);
        bufp->chgIData(oldp+13,(vlSelf->SingleCycleCPU__DOT__readData2_IDEX),32);
        bufp->chgIData(oldp+14,(vlSelf->SingleCycleCPU__DOT__readData2_EXMEM),32);
        bufp->chgIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__readData_MEMWB),32);
        bufp->chgIData(oldp+16,(((IData)(vlSelf->SingleCycleCPU__DOT__memtoReg_MEMWB)
                                  ? vlSelf->SingleCycleCPU__DOT__readData_MEMWB
                                  : vlSelf->SingleCycleCPU__DOT__ALU_result_MEMWB)),32);
        bufp->chgIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__ALU_result_MEMWB),32);
        bufp->chgIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__mux_ALU_out),32);
        bufp->chgCData(oldp+19,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
        bufp->chgBit(oldp+20,(vlSelf->SingleCycleCPU__DOT__ALU_zero_EXMEM));
        bufp->chgBit(oldp+21,(vlSelf->SingleCycleCPU__DOT__branch_IDEX));
        bufp->chgBit(oldp+22,(vlSelf->SingleCycleCPU__DOT__memtoReg_IDEX));
        bufp->chgBit(oldp+23,(vlSelf->SingleCycleCPU__DOT__memWrite_IDEX));
        bufp->chgBit(oldp+24,(vlSelf->SingleCycleCPU__DOT__ALUSrc_IDEX));
        bufp->chgBit(oldp+25,(vlSelf->SingleCycleCPU__DOT__regWrite_IDEX));
        bufp->chgBit(oldp+26,(vlSelf->SingleCycleCPU__DOT__branch_EXMEM));
        bufp->chgBit(oldp+27,(vlSelf->SingleCycleCPU__DOT__memtoReg_EXMEM));
        bufp->chgBit(oldp+28,(vlSelf->SingleCycleCPU__DOT__memWrite_EXMEM));
        bufp->chgBit(oldp+29,(vlSelf->SingleCycleCPU__DOT__ALUSrc_EXMEM));
        bufp->chgBit(oldp+30,(vlSelf->SingleCycleCPU__DOT__regWrite_EXMEM));
        bufp->chgBit(oldp+31,(vlSelf->SingleCycleCPU__DOT__branch_MEMWB));
        bufp->chgBit(oldp+32,(vlSelf->SingleCycleCPU__DOT__memRead_MEMWB));
        bufp->chgBit(oldp+33,(vlSelf->SingleCycleCPU__DOT__memtoReg_MEMWB));
        bufp->chgBit(oldp+34,(vlSelf->SingleCycleCPU__DOT__memWrite_MEMWB));
        bufp->chgBit(oldp+35,(vlSelf->SingleCycleCPU__DOT__ALUSrc_MEMWB));
        bufp->chgBit(oldp+36,(vlSelf->SingleCycleCPU__DOT__regWrite_MEMWB));
        bufp->chgCData(oldp+37,(vlSelf->SingleCycleCPU__DOT__ALUOp_IDEX),2);
        bufp->chgCData(oldp+38,(vlSelf->SingleCycleCPU__DOT__ALUOp_EXMEM),2);
        bufp->chgCData(oldp+39,(vlSelf->SingleCycleCPU__DOT__ALUOp_MEMWB),2);
        bufp->chgBit(oldp+40,((1U & (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+41,((7U & (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+42,((((IData)(vlSelf->SingleCycleCPU__DOT__ALUOp_IDEX) 
                                  << 4U) | ((8U & (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                                   >> 0x1bU)) 
                                            | (7U & 
                                               (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                                >> 0xcU))))),6);
        bufp->chgCData(oldp+43,((0x7fU & vlSelf->SingleCycleCPU__DOT__inst_IFID)),7);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_MEMWB 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+59,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+60,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+61,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+62,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+63,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+64,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+65,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+66,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+67,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+68,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+69,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+70,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+71,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+72,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+73,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+74,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+75,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+76,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+77,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+78,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+79,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_out)),32);
        bufp->chgIData(oldp+80,(vlSelf->SingleCycleCPU__DOT__pc_out),32);
        bufp->chgIData(oldp+81,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_out)
                                  ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->SingleCycleCPU__DOT__pc_out)] 
                                           << 0x18U) 
                                          | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
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
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+82,(vlSelf->SingleCycleCPU__DOT__ALU_result),32);
        bufp->chgIData(oldp+83,(vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM),32);
        bufp->chgBit(oldp+84,((0U == vlSelf->SingleCycleCPU__DOT__ALU_result)));
        bufp->chgBit(oldp+85,(vlSelf->SingleCycleCPU__DOT__branch));
        bufp->chgBit(oldp+86,(vlSelf->SingleCycleCPU__DOT__memRead));
        bufp->chgBit(oldp+87,(vlSelf->SingleCycleCPU__DOT__memtoReg));
        bufp->chgBit(oldp+88,(vlSelf->SingleCycleCPU__DOT__memWrite));
        bufp->chgBit(oldp+89,(vlSelf->SingleCycleCPU__DOT__ALUSrc));
        bufp->chgBit(oldp+90,(vlSelf->SingleCycleCPU__DOT__regWrite));
        bufp->chgBit(oldp+91,(vlSelf->SingleCycleCPU__DOT__memRead_IDEX));
        bufp->chgBit(oldp+92,(vlSelf->SingleCycleCPU__DOT__memRead_EXMEM));
        bufp->chgCData(oldp+93,(vlSelf->SingleCycleCPU__DOT__ALUOp),2);
    }
    bufp->chgBit(oldp+94,(vlSelf->clk));
    bufp->chgBit(oldp+95,(vlSelf->start));
    bufp->chgIData(oldp+96,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+97,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+98,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+99,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+100,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+101,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+102,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+103,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+104,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+128,((((IData)(vlSelf->SingleCycleCPU__DOT__ALU_zero_EXMEM) 
                               & (IData)(vlSelf->SingleCycleCPU__DOT__branch_EXMEM))
                               ? vlSelf->SingleCycleCPU__DOT__PC_EXMEM
                               : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_out))),32);
    bufp->chgIData(oldp+129,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+130,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+131,(vlSelf->SingleCycleCPU__DOT__readData),32);
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
