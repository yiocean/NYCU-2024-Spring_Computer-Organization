// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__memWrite_EXMEM) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->PipelineCPU__DOT__rs2_EXMEM 
                   >> 0x18U);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->PipelineCPU__DOT__aluout_EXMEM));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->PipelineCPU__DOT__rs2_EXMEM 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->PipelineCPU__DOT__aluout_EXMEM));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->PipelineCPU__DOT__rs2_EXMEM 
                            >> 8U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->PipelineCPU__DOT__aluout_EXMEM));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->PipelineCPU__DOT__rs2_EXMEM);
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->PipelineCPU__DOT__aluout_EXMEM);
        }
    } else {
        vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__regWrite_MEMWB) {
            __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                    >> 7U))) ? 0U : vlSelf->PipelineCPU__DOT__finalout);
            __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = (0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                            >> 7U));
        }
    } else {
        __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

extern const VlUnpacked<CData/*3:0*/, 128> VPipelineCPU__ConstPool__TABLE_h25dff477_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelf->start) {
        vlSelf->PipelineCPU__DOT__imm_IDEX = vlSelf->PipelineCPU__DOT__imm;
        vlSelf->PipelineCPU__DOT__readData2_IDEX = vlSelf->PipelineCPU__DOT__readData2;
        vlSelf->PipelineCPU__DOT__readData1_IDEX = vlSelf->PipelineCPU__DOT__readData1;
        vlSelf->PipelineCPU__DOT__aluout_MEMWB = vlSelf->PipelineCPU__DOT__aluout_EXMEM;
        vlSelf->PipelineCPU__DOT__memtoReg_MEMWB = vlSelf->PipelineCPU__DOT__memtoReg_EXMEM;
        vlSelf->PipelineCPU__DOT__sum_MEMWB = vlSelf->PipelineCPU__DOT__sum_EXMEM;
        vlSelf->PipelineCPU__DOT__inst_EXMEM = vlSelf->PipelineCPU__DOT__inst_IDEX;
        vlSelf->PipelineCPU__DOT__readDataMem_MEMWB 
            = vlSelf->PipelineCPU__DOT__readDataMem;
        vlSelf->PipelineCPU__DOT__rs2_EXMEM = vlSelf->PipelineCPU__DOT__ALUSrc2;
        vlSelf->PipelineCPU__DOT__memtoReg_EXMEM = vlSelf->PipelineCPU__DOT__memtoReg_IDEX;
        if (vlSelf->PipelineCPU__DOT__control_signal_mux) {
            vlSelf->PipelineCPU__DOT__ALUOp_IDEX = 0U;
            vlSelf->PipelineCPU__DOT__memtoReg_IDEX = 0U;
        } else {
            vlSelf->PipelineCPU__DOT__ALUOp_IDEX = vlSelf->PipelineCPU__DOT__ALUOp;
            vlSelf->PipelineCPU__DOT__memtoReg_IDEX 
                = vlSelf->PipelineCPU__DOT__memtoReg;
        }
        vlSelf->PipelineCPU__DOT__sum_EXMEM = vlSelf->PipelineCPU__DOT__sum_IDEX;
        vlSelf->PipelineCPU__DOT__inst_IDEX = vlSelf->PipelineCPU__DOT__inst;
        vlSelf->PipelineCPU__DOT__sum_IDEX = ((IData)(4U) 
                                              + vlSelf->PipelineCPU__DOT__pc_o);
        vlSelf->PipelineCPU__DOT__ALUSrc_IDEX = ((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__ALUSrc));
        vlSelf->PipelineCPU__DOT__memWrite_MEMWB = vlSelf->PipelineCPU__DOT__memWrite_EXMEM;
        vlSelf->PipelineCPU__DOT__memRead_MEMWB = vlSelf->PipelineCPU__DOT__memRead_EXMEM;
        vlSelf->PipelineCPU__DOT__regWrite_MEMWB = vlSelf->PipelineCPU__DOT__regWrite_EXMEM;
        vlSelf->PipelineCPU__DOT__memWrite_EXMEM = vlSelf->PipelineCPU__DOT__memWrite_IDEX;
    } else {
        vlSelf->PipelineCPU__DOT__imm_IDEX = 0U;
        vlSelf->PipelineCPU__DOT__readData2_IDEX = 0U;
        vlSelf->PipelineCPU__DOT__readData1_IDEX = 0U;
        vlSelf->PipelineCPU__DOT__ALUOp_IDEX = 0U;
        vlSelf->PipelineCPU__DOT__aluout_MEMWB = 0U;
        vlSelf->PipelineCPU__DOT__memtoReg_MEMWB = 0U;
        vlSelf->PipelineCPU__DOT__sum_MEMWB = 0U;
        vlSelf->PipelineCPU__DOT__inst_EXMEM = 0U;
        vlSelf->PipelineCPU__DOT__readDataMem_MEMWB = 0U;
        vlSelf->PipelineCPU__DOT__rs2_EXMEM = 0U;
        vlSelf->PipelineCPU__DOT__memtoReg_EXMEM = 0U;
        vlSelf->PipelineCPU__DOT__sum_EXMEM = 0U;
        vlSelf->PipelineCPU__DOT__inst_IDEX = 0U;
        vlSelf->PipelineCPU__DOT__memtoReg_IDEX = 0U;
        vlSelf->PipelineCPU__DOT__sum_IDEX = 0U;
        vlSelf->PipelineCPU__DOT__ALUSrc_IDEX = 0U;
        vlSelf->PipelineCPU__DOT__memWrite_MEMWB = 0U;
        vlSelf->PipelineCPU__DOT__memRead_MEMWB = 0U;
        vlSelf->PipelineCPU__DOT__regWrite_MEMWB = 0U;
        vlSelf->PipelineCPU__DOT__memWrite_EXMEM = 0U;
    }
    vlSelf->PipelineCPU__DOT__finalout = ((0U == (IData)(vlSelf->PipelineCPU__DOT__memtoReg_MEMWB))
                                           ? vlSelf->PipelineCPU__DOT__aluout_MEMWB
                                           : ((1U == (IData)(vlSelf->PipelineCPU__DOT__memtoReg_MEMWB))
                                               ? vlSelf->PipelineCPU__DOT__readDataMem_MEMWB
                                               : vlSelf->PipelineCPU__DOT__sum_MEMWB));
    vlSelf->PipelineCPU__DOT__regWrite_EXMEM = ((IData)(vlSelf->start) 
                                                & (IData)(vlSelf->PipelineCPU__DOT__regWrite_IDEX));
    vlSelf->PipelineCPU__DOT__memWrite_IDEX = ((IData)(vlSelf->start) 
                                               & ((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__memWrite)));
    __Vtableidx2 = (((IData)(vlSelf->PipelineCPU__DOT__ALUOp_IDEX) 
                     << 4U) | ((8U & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                      >> 0x1bU)) | 
                               (7U & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                      >> 0xcU))));
    vlSelf->PipelineCPU__DOT__ALUCtl = VPipelineCPU__ConstPool__TABLE_h25dff477_0
        [__Vtableidx2];
    vlSelf->PipelineCPU__DOT__ForwardA = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_EXMEM) 
          & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__inst_EXMEM 
                             >> 7U)))) & ((0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__inst_EXMEM 
                                            >> 7U)) 
                                          == (0x1fU 
                                              & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                                 >> 0xfU))))) {
        vlSelf->PipelineCPU__DOT__ForwardA = 2U;
    }
    if ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_MEMWB) 
          & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__inst_MEMWB 
                             >> 7U)))) & ((0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__inst_MEMWB 
                                            >> 7U)) 
                                          == (0x1fU 
                                              & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                                 >> 0xfU))))) {
        vlSelf->PipelineCPU__DOT__ForwardA = 1U;
    }
    vlSelf->PipelineCPU__DOT__ForwardB = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_EXMEM) 
          & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__inst_EXMEM 
                             >> 7U)))) & ((0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__inst_EXMEM 
                                            >> 7U)) 
                                          == (0x1fU 
                                              & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                                 >> 0x14U))))) {
        vlSelf->PipelineCPU__DOT__ForwardB = 2U;
    }
    if ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_MEMWB) 
          & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__inst_MEMWB 
                             >> 7U)))) & ((0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__inst_MEMWB 
                                            >> 7U)) 
                                          == (0x1fU 
                                              & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                                                 >> 0x14U))))) {
        vlSelf->PipelineCPU__DOT__ForwardB = 1U;
    }
    vlSelf->PipelineCPU__DOT__regWrite_IDEX = ((IData)(vlSelf->start) 
                                               & ((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__regWrite)));
    vlSelf->PipelineCPU__DOT__ALUSrc1 = ((0U == (IData)(vlSelf->PipelineCPU__DOT__ForwardA))
                                          ? vlSelf->PipelineCPU__DOT__readData1_IDEX
                                          : ((1U == (IData)(vlSelf->PipelineCPU__DOT__ForwardA))
                                              ? vlSelf->PipelineCPU__DOT__finalout
                                              : vlSelf->PipelineCPU__DOT__aluResult_EXMEM));
    vlSelf->PipelineCPU__DOT__ALUSrc2 = ((0U == (IData)(vlSelf->PipelineCPU__DOT__ForwardB))
                                          ? ((IData)(vlSelf->PipelineCPU__DOT__ALUSrc_IDEX)
                                              ? vlSelf->PipelineCPU__DOT__imm_IDEX
                                              : vlSelf->PipelineCPU__DOT__readData2_IDEX)
                                          : ((1U == (IData)(vlSelf->PipelineCPU__DOT__ForwardB))
                                              ? vlSelf->PipelineCPU__DOT__finalout
                                              : vlSelf->PipelineCPU__DOT__aluResult_EXMEM));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__flush) {
            vlSelf->PipelineCPU__DOT__sum_IFID = 0U;
            vlSelf->PipelineCPU__DOT__pc_IFID = 0U;
            vlSelf->PipelineCPU__DOT__inst_IFID = 0U;
        } else if (vlSelf->PipelineCPU__DOT__IF_ID_Write) {
            vlSelf->PipelineCPU__DOT__sum_IFID = ((IData)(4U) 
                                                  + vlSelf->PipelineCPU__DOT__pc_o);
            vlSelf->PipelineCPU__DOT__pc_IFID = vlSelf->PipelineCPU__DOT__pc_o;
            vlSelf->PipelineCPU__DOT__inst_IFID = vlSelf->PipelineCPU__DOT__inst;
        }
    } else {
        vlSelf->PipelineCPU__DOT__sum_IFID = 0U;
        vlSelf->PipelineCPU__DOT__pc_IFID = 0U;
        vlSelf->PipelineCPU__DOT__inst_IFID = 0U;
    }
    vlSelf->PipelineCPU__DOT__imm = ((0x40U & vlSelf->PipelineCPU__DOT__inst_IFID)
                                      ? ((0x20U & vlSelf->PipelineCPU__DOT__inst_IFID)
                                          ? ((0x10U 
                                              & vlSelf->PipelineCPU__DOT__inst_IFID)
                                              ? 0U : 
                                             ((8U & vlSelf->PipelineCPU__DOT__inst_IFID)
                                               ? ((4U 
                                                   & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->PipelineCPU__DOT__inst_IFID) 
                                                           | ((0x800U 
                                                               & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                    >> 0x14U))))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                               : ((4U 
                                                   & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                 >> 7U)))))
                                                     : 0U)
                                                    : 0U))))
                                          : 0U) : (
                                                   (0x20U 
                                                    & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__inst_IFID)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U))))));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__4(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->PipelineCPU__DOT__memRead_EXMEM) {
        vlSelf->PipelineCPU__DOT__readDataMem = ((0xffffffU 
                                                  & vlSelf->PipelineCPU__DOT__readDataMem) 
                                                 | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->PipelineCPU__DOT__aluout_EXMEM))] 
                                                    << 0x18U));
        vlSelf->PipelineCPU__DOT__readDataMem = ((0xff00ffffU 
                                                  & vlSelf->PipelineCPU__DOT__readDataMem) 
                                                 | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->PipelineCPU__DOT__aluout_EXMEM))] 
                                                    << 0x10U));
        vlSelf->PipelineCPU__DOT__readDataMem = ((0xffff00ffU 
                                                  & vlSelf->PipelineCPU__DOT__readDataMem) 
                                                 | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->PipelineCPU__DOT__aluout_EXMEM))] 
                                                    << 8U));
        vlSelf->PipelineCPU__DOT__readDataMem = ((0xffffff00U 
                                                  & vlSelf->PipelineCPU__DOT__readDataMem) 
                                                 | vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                 [(0x7fU 
                                                   & vlSelf->PipelineCPU__DOT__aluout_EXMEM)]);
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__5(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__PCWrite) {
            vlSelf->PipelineCPU__DOT__pc_o = vlSelf->PipelineCPU__DOT__pc_i;
        }
    } else {
        vlSelf->PipelineCPU__DOT__pc_o = 0U;
    }
    vlSelf->PipelineCPU__DOT__inst = ((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
                                       ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & vlSelf->PipelineCPU__DOT__pc_o)] 
                                                << 0x18U) 
                                               | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                   [
                                                   (0x7fU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                      << 8U) 
                                                     | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->PipelineCPU__DOT__pc_o))]))));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__readData2 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                   >> 0x14U))];
    vlSelf->PipelineCPU__DOT__readData1 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                   >> 0xfU))];
    vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrEq = 0U;
    vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrLT = 0U;
    vlSelf->PipelineCPU__DOT__flush = 0U;
    if ((0x63U == (0x7fU & vlSelf->PipelineCPU__DOT__inst_IFID))) {
        if ((0x4000U & vlSelf->PipelineCPU__DOT__inst_IFID)) {
            if ((0x2000U & vlSelf->PipelineCPU__DOT__inst_IFID)) {
                vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrEq = 0U;
                vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrLT = 0U;
            } else {
                vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrLT 
                    = ((0x1000U & vlSelf->PipelineCPU__DOT__inst_IFID)
                        ? VL_GTES_III(32, vlSelf->PipelineCPU__DOT__readData1, vlSelf->PipelineCPU__DOT__readData2)
                        : VL_LTS_III(32, vlSelf->PipelineCPU__DOT__readData1, vlSelf->PipelineCPU__DOT__readData2));
            }
        } else if ((0x2000U & vlSelf->PipelineCPU__DOT__inst_IFID)) {
            vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrEq = 0U;
            vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrLT = 0U;
        } else {
            vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrEq 
                = ((0x1000U & vlSelf->PipelineCPU__DOT__inst_IFID)
                    ? (vlSelf->PipelineCPU__DOT__readData1 
                       != vlSelf->PipelineCPU__DOT__readData2)
                    : (vlSelf->PipelineCPU__DOT__readData1 
                       == vlSelf->PipelineCPU__DOT__readData2));
        }
    }
    if (((0x63U == (0x7fU & vlSelf->PipelineCPU__DOT__inst_IFID)) 
         & ((IData)(vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrEq) 
            | (IData)(vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrLT)))) {
        vlSelf->PipelineCPU__DOT__flush = 1U;
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__6(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->start) {
        vlSelf->PipelineCPU__DOT__aluout_EXMEM = vlSelf->PipelineCPU__DOT__aluout;
        vlSelf->PipelineCPU__DOT__memRead_EXMEM = vlSelf->PipelineCPU__DOT__memRead_IDEX;
    } else {
        vlSelf->PipelineCPU__DOT__aluout_EXMEM = 0U;
        vlSelf->PipelineCPU__DOT__memRead_EXMEM = 0U;
    }
    if ((1U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__aluout = (vlSelf->PipelineCPU__DOT__ALUSrc1 
                                            + vlSelf->PipelineCPU__DOT__ALUSrc2);
    } else if ((4U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__aluout = (vlSelf->PipelineCPU__DOT__ALUSrc1 
                                            - vlSelf->PipelineCPU__DOT__ALUSrc2);
    } else if ((7U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__aluout = (vlSelf->PipelineCPU__DOT__ALUSrc1 
                                            & vlSelf->PipelineCPU__DOT__ALUSrc2);
    } else if ((8U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__aluout = (vlSelf->PipelineCPU__DOT__ALUSrc1 
                                            | vlSelf->PipelineCPU__DOT__ALUSrc2);
    } else if ((6U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__aluout = (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ALUSrc1, vlSelf->PipelineCPU__DOT__ALUSrc2)
                                             ? 1U : 0U);
    } else if ((0xfU == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__aluout = (vlSelf->PipelineCPU__DOT__ALUSrc1 
                                            + vlSelf->PipelineCPU__DOT__ALUSrc2);
    }
    vlSelf->PipelineCPU__DOT__memRead_IDEX = ((IData)(vlSelf->start) 
                                              & ((~ (IData)(vlSelf->PipelineCPU__DOT__control_signal_mux)) 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__memRead)));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__pc_i = ((IData)(vlSelf->PipelineCPU__DOT__flush)
                                       ? ((IData)(vlSelf->PipelineCPU__DOT__flush)
                                           ? (((IData)(
                                                       (0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->PipelineCPU__DOT__inst_IFID)))
                                                ? vlSelf->PipelineCPU__DOT__readData1
                                                : vlSelf->PipelineCPU__DOT__pc_IFID) 
                                              + vlSelf->PipelineCPU__DOT__imm)
                                           : ((IData)(4U) 
                                              + vlSelf->PipelineCPU__DOT__pc_o))
                                       : ((IData)(4U) 
                                          + vlSelf->PipelineCPU__DOT__pc_o));
}

extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*1:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3896431d_0;
extern const VlUnpacked<CData/*2:0*/, 128> VPipelineCPU__ConstPool__TABLE_h18f4ec70_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*5:0*/, 128> VPipelineCPU__ConstPool__TABLE_h6cddf12d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_ha9537531_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3729482a_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__7(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__7\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (0x7fU & vlSelf->PipelineCPU__DOT__inst_IFID);
    vlSelf->PipelineCPU__DOT__memRead = VPipelineCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__memtoReg = VPipelineCPU__ConstPool__TABLE_h3896431d_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ALUOp = VPipelineCPU__ConstPool__TABLE_h18f4ec70_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__memWrite = VPipelineCPU__ConstPool__TABLE_hbdb291c7_0
        [__Vtableidx1];
    if ((0x10U & VPipelineCPU__ConstPool__TABLE_h6cddf12d_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__ALUSrc = VPipelineCPU__ConstPool__TABLE_ha9537531_0
            [__Vtableidx1];
    }
    vlSelf->PipelineCPU__DOT__regWrite = VPipelineCPU__ConstPool__TABLE_h3729482a_0
        [__Vtableidx1];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__PCWrite = 1U;
    vlSelf->PipelineCPU__DOT__IF_ID_Write = 1U;
    if (((IData)(vlSelf->PipelineCPU__DOT__memRead_IDEX) 
         & (((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                       >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                            >> 0xfU))) 
            | ((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                         >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                              >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__PCWrite = 0U;
        vlSelf->PipelineCPU__DOT__IF_ID_Write = 0U;
        vlSelf->PipelineCPU__DOT__control_signal_mux = 0U;
        vlSelf->PipelineCPU__DOT__control_signal_mux = 1U;
    } else {
        vlSelf->PipelineCPU__DOT__control_signal_mux = 0U;
    }
    if (((IData)(vlSelf->PipelineCPU__DOT__regWrite_IDEX) 
         & (((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                       >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                            >> 0xfU))) 
            | ((0x1fU & (vlSelf->PipelineCPU__DOT__inst_IDEX 
                         >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                              >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__PCWrite = 0U;
        vlSelf->PipelineCPU__DOT__IF_ID_Write = 0U;
        vlSelf->PipelineCPU__DOT__control_signal_mux = 1U;
    } else if (((IData)(vlSelf->PipelineCPU__DOT__regWrite_EXMEM) 
                & (((0x1fU & (vlSelf->PipelineCPU__DOT__inst_EXMEM 
                              >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                                                   >> 0xfU))) 
                   | ((0x1fU & (vlSelf->PipelineCPU__DOT__inst_EXMEM 
                                >> 7U)) == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__inst_IFID 
                                             >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__PCWrite = 0U;
        vlSelf->PipelineCPU__DOT__IF_ID_Write = 0U;
        vlSelf->PipelineCPU__DOT__control_signal_mux = 1U;
    }
}

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VPipelineCPU___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        VPipelineCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VPipelineCPU___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        VPipelineCPU___024root___nba_comb__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(3U))) {
        VPipelineCPU___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
}

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPipelineCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PipelineCPU.v", 5, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPipelineCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 5, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPipelineCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
