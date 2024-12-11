// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+32,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
        bufp->chgCData(oldp+33,(vlSelf->PipelineCPU__DOT__ALUOp_IDEX),3);
        bufp->chgIData(oldp+34,(vlSelf->PipelineCPU__DOT__imm_IDEX),32);
        bufp->chgIData(oldp+35,(vlSelf->PipelineCPU__DOT__readData1_IDEX),32);
        bufp->chgIData(oldp+36,(vlSelf->PipelineCPU__DOT__readData2_IDEX),32);
        bufp->chgIData(oldp+37,(vlSelf->PipelineCPU__DOT__sum_IDEX),32);
        bufp->chgIData(oldp+38,(vlSelf->PipelineCPU__DOT__aluout_MEMWB),32);
        bufp->chgIData(oldp+39,(vlSelf->PipelineCPU__DOT__sum_EXMEM),32);
        bufp->chgIData(oldp+40,(vlSelf->PipelineCPU__DOT__rs2_EXMEM),32);
        bufp->chgIData(oldp+41,(vlSelf->PipelineCPU__DOT__sum_MEMWB),32);
        bufp->chgIData(oldp+42,(vlSelf->PipelineCPU__DOT__readDataMem_MEMWB),32);
        bufp->chgIData(oldp+43,(vlSelf->PipelineCPU__DOT__finalout),32);
        bufp->chgCData(oldp+44,(vlSelf->PipelineCPU__DOT__ForwardA),2);
        bufp->chgCData(oldp+45,(vlSelf->PipelineCPU__DOT__ForwardB),2);
        bufp->chgCData(oldp+46,(vlSelf->PipelineCPU__DOT__memtoReg_IDEX),2);
        bufp->chgCData(oldp+47,(vlSelf->PipelineCPU__DOT__memtoReg_EXMEM),2);
        bufp->chgCData(oldp+48,(vlSelf->PipelineCPU__DOT__memtoReg_MEMWB),2);
        bufp->chgBit(oldp+49,(vlSelf->PipelineCPU__DOT__ALUSrc_IDEX));
        bufp->chgBit(oldp+50,(vlSelf->PipelineCPU__DOT__memWrite_IDEX));
        bufp->chgBit(oldp+51,(vlSelf->PipelineCPU__DOT__regWrite_IDEX));
        bufp->chgBit(oldp+52,(vlSelf->PipelineCPU__DOT__memWrite_EXMEM));
        bufp->chgBit(oldp+53,(vlSelf->PipelineCPU__DOT__regWrite_EXMEM));
        bufp->chgBit(oldp+54,(vlSelf->PipelineCPU__DOT__memRead_MEMWB));
        bufp->chgBit(oldp+55,(vlSelf->PipelineCPU__DOT__memWrite_MEMWB));
        bufp->chgBit(oldp+56,(vlSelf->PipelineCPU__DOT__regWrite_MEMWB));
        bufp->chgIData(oldp+57,(vlSelf->PipelineCPU__DOT__inst_IDEX),32);
        bufp->chgIData(oldp+58,(vlSelf->PipelineCPU__DOT__inst_EXMEM),32);
        bufp->chgIData(oldp+59,(((IData)(vlSelf->PipelineCPU__DOT__ALUSrc_IDEX)
                                  ? vlSelf->PipelineCPU__DOT__imm_IDEX
                                  : vlSelf->PipelineCPU__DOT__readData2_IDEX)),32);
        bufp->chgIData(oldp+60,(vlSelf->PipelineCPU__DOT__ALUSrc1),32);
        bufp->chgIData(oldp+61,(vlSelf->PipelineCPU__DOT__ALUSrc2),32);
        bufp->chgBit(oldp+62,((1U & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+63,((7U & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+64,((((IData)(vlSelf->PipelineCPU__DOT__ALUOp_IDEX) 
                                  << 4U) | ((8U & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                                   >> 0x1bU)) 
                                            | (7U & 
                                               (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                                >> 0xcU))))),7);
        bufp->chgCData(oldp+65,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+66,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+67,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_EXMEM 
                                          >> 7U))),5);
        bufp->chgCData(oldp+68,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+69,(vlSelf->PipelineCPU__DOT__imm),32);
        bufp->chgIData(oldp+70,(vlSelf->PipelineCPU__DOT__inst_IFID),32);
        bufp->chgIData(oldp+71,(vlSelf->PipelineCPU__DOT__pc_IFID),32);
        bufp->chgIData(oldp+72,(vlSelf->PipelineCPU__DOT__sum_IFID),32);
        bufp->chgCData(oldp+73,((0x7fU & vlSelf->PipelineCPU__DOT__inst_IFID)),7);
        bufp->chgCData(oldp+74,((7U & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+75,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+76,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+77,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+78,(vlSelf->PipelineCPU__DOT__inst),32);
        bufp->chgIData(oldp+79,(vlSelf->PipelineCPU__DOT__pc_o),32);
        bufp->chgIData(oldp+80,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+81,(vlSelf->PipelineCPU__DOT__readData1),32);
        bufp->chgIData(oldp+82,(vlSelf->PipelineCPU__DOT__readData2),32);
        bufp->chgBit(oldp+83,(vlSelf->PipelineCPU__DOT__flush));
        bufp->chgBit(oldp+84,(vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrEq));
        bufp->chgBit(oldp+85,(vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrLT));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+86,(vlSelf->PipelineCPU__DOT__aluout),32);
        bufp->chgIData(oldp+87,(vlSelf->PipelineCPU__DOT__aluout_EXMEM),32);
        bufp->chgBit(oldp+88,(vlSelf->PipelineCPU__DOT__memRead_IDEX));
        bufp->chgBit(oldp+89,(vlSelf->PipelineCPU__DOT__memRead_EXMEM));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+90,(vlSelf->PipelineCPU__DOT__memRead));
        bufp->chgBit(oldp+91,(vlSelf->PipelineCPU__DOT__memWrite));
        bufp->chgBit(oldp+92,(vlSelf->PipelineCPU__DOT__regWrite));
        bufp->chgCData(oldp+93,(vlSelf->PipelineCPU__DOT__ALUOp),3);
        bufp->chgBit(oldp+94,(vlSelf->PipelineCPU__DOT__ALUSrc));
        bufp->chgCData(oldp+95,(vlSelf->PipelineCPU__DOT__memtoReg),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+96,(((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                               & (IData)(vlSelf->PipelineCPU__DOT__memRead))));
        bufp->chgBit(oldp+97,(((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                               & (IData)(vlSelf->PipelineCPU__DOT__memWrite))));
        bufp->chgBit(oldp+98,(((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                               & (IData)(vlSelf->PipelineCPU__DOT__regWrite))));
        bufp->chgCData(oldp+99,(((IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)
                                  ? 0U : (IData)(vlSelf->PipelineCPU__DOT__memtoReg))),2);
        bufp->chgCData(oldp+100,(((IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)
                                   ? 0U : (IData)(vlSelf->PipelineCPU__DOT__ALUOp))),3);
        bufp->chgBit(oldp+101,(((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                                & (IData)(vlSelf->PipelineCPU__DOT__ALUSrc))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+102,(vlSelf->PipelineCPU__DOT__IF_ID_Write));
        bufp->chgBit(oldp+103,(vlSelf->PipelineCPU__DOT__PCWrite));
        bufp->chgBit(oldp+104,(vlSelf->PipelineCPU__DOT__control_signal_mux));
    }
    bufp->chgBit(oldp+105,(vlSelf->clk));
    bufp->chgBit(oldp+106,(vlSelf->start));
    bufp->chgIData(oldp+107,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+135,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+136,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+137,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+138,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+139,(vlSelf->PipelineCPU__DOT__pc_i),32);
    bufp->chgIData(oldp+140,((((IData)((0x67U == (0x707fU 
                                                  & vlSelf->PipelineCPU__DOT__inst_IFID)))
                                ? vlSelf->PipelineCPU__DOT__readData1
                                : vlSelf->PipelineCPU__DOT__pc_IFID) 
                              + vlSelf->PipelineCPU__DOT__imm)),32);
    bufp->chgIData(oldp+141,(((IData)((0x67U == (0x707fU 
                                                 & vlSelf->PipelineCPU__DOT__inst_IFID)))
                               ? vlSelf->PipelineCPU__DOT__readData1
                               : vlSelf->PipelineCPU__DOT__pc_IFID)),32);
    bufp->chgIData(oldp+142,(vlSelf->PipelineCPU__DOT__readDataMem),32);
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
