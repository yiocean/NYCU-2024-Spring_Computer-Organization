// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__memWrite_EXMEM) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->SingleCycleCPU__DOT__readData2_EXMEM 
                   >> 0x18U);
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__readData2_EXMEM 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__readData2_EXMEM 
                            >> 8U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->SingleCycleCPU__DOT__readData2_EXMEM);
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM);
        }
    } else {
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__regWrite_MEMWB) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_MEMWB 
                                    >> 7U))) ? 0U : 
                   ((IData)(vlSelf->SingleCycleCPU__DOT__memtoReg_MEMWB)
                     ? vlSelf->SingleCycleCPU__DOT__readData_MEMWB
                     : vlSelf->SingleCycleCPU__DOT__ALU_result_MEMWB));
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = (0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_MEMWB 
                            >> 7U));
        }
    } else {
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h8bf831f2_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_hdf017942_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelf->start) {
        vlSelf->SingleCycleCPU__DOT__ALU_zero_EXMEM 
            = (0U == vlSelf->SingleCycleCPU__DOT__ALU_result);
        vlSelf->SingleCycleCPU__DOT__memWrite_MEMWB 
            = vlSelf->SingleCycleCPU__DOT__memWrite_EXMEM;
        vlSelf->SingleCycleCPU__DOT__memRead_MEMWB 
            = vlSelf->SingleCycleCPU__DOT__memRead_EXMEM;
        vlSelf->SingleCycleCPU__DOT__branch_MEMWB = vlSelf->SingleCycleCPU__DOT__branch_EXMEM;
        vlSelf->SingleCycleCPU__DOT__ALUSrc_MEMWB = vlSelf->SingleCycleCPU__DOT__ALUSrc_EXMEM;
        vlSelf->SingleCycleCPU__DOT__ALUOp_MEMWB = vlSelf->SingleCycleCPU__DOT__ALUOp_EXMEM;
        vlSelf->SingleCycleCPU__DOT__PC_EXMEM = (vlSelf->SingleCycleCPU__DOT__PC_out_IDEX 
                                                 + 
                                                 (vlSelf->SingleCycleCPU__DOT__imm_IDEX 
                                                  << 1U));
        vlSelf->SingleCycleCPU__DOT__readData1_IDEX 
            = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                       >> 0xfU))];
        vlSelf->SingleCycleCPU__DOT__readData2_EXMEM 
            = vlSelf->SingleCycleCPU__DOT__readData2_IDEX;
        vlSelf->SingleCycleCPU__DOT__ALU_result_MEMWB 
            = vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM;
        vlSelf->SingleCycleCPU__DOT__readData_MEMWB 
            = vlSelf->SingleCycleCPU__DOT__readData;
        vlSelf->SingleCycleCPU__DOT__inst_MEMWB = vlSelf->SingleCycleCPU__DOT__inst_EXMEM;
        vlSelf->SingleCycleCPU__DOT__ALUOp_EXMEM = vlSelf->SingleCycleCPU__DOT__ALUOp_IDEX;
        vlSelf->SingleCycleCPU__DOT__imm_IDEX = vlSelf->SingleCycleCPU__DOT__imm;
        vlSelf->SingleCycleCPU__DOT__PC_out_IDEX = vlSelf->SingleCycleCPU__DOT__PC_out_IFID;
        vlSelf->SingleCycleCPU__DOT__readData2_IDEX 
            = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                       >> 0x14U))];
        vlSelf->SingleCycleCPU__DOT__inst_EXMEM = vlSelf->SingleCycleCPU__DOT__inst_IDEX;
        vlSelf->SingleCycleCPU__DOT__ALUOp_IDEX = vlSelf->SingleCycleCPU__DOT__ALUOp;
        vlSelf->SingleCycleCPU__DOT__PC_out_IFID = vlSelf->SingleCycleCPU__DOT__pc_out;
        vlSelf->SingleCycleCPU__DOT__inst_IDEX = vlSelf->SingleCycleCPU__DOT__inst_IFID;
        vlSelf->SingleCycleCPU__DOT__inst_IFID = ((0x80U 
                                                   <= vlSelf->SingleCycleCPU__DOT__pc_out)
                                                   ? 0U
                                                   : 
                                                  ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                    [
                                                    (0x7fU 
                                                     & vlSelf->SingleCycleCPU__DOT__pc_out)] 
                                                    << 0x18U) 
                                                   | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                       [
                                                       (0x7fU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->SingleCycleCPU__DOT__pc_out))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                          [
                                                          (0x7fU 
                                                           & ((IData)(2U) 
                                                              + vlSelf->SingleCycleCPU__DOT__pc_out))] 
                                                          << 8U) 
                                                         | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                         [
                                                         (0x7fU 
                                                          & ((IData)(3U) 
                                                             + vlSelf->SingleCycleCPU__DOT__pc_out))]))));
        vlSelf->SingleCycleCPU__DOT__regWrite_MEMWB 
            = vlSelf->SingleCycleCPU__DOT__regWrite_EXMEM;
        vlSelf->SingleCycleCPU__DOT__memtoReg_MEMWB 
            = vlSelf->SingleCycleCPU__DOT__memtoReg_EXMEM;
        vlSelf->SingleCycleCPU__DOT__memWrite_EXMEM 
            = vlSelf->SingleCycleCPU__DOT__memWrite_IDEX;
        vlSelf->SingleCycleCPU__DOT__branch_EXMEM = vlSelf->SingleCycleCPU__DOT__branch_IDEX;
        vlSelf->SingleCycleCPU__DOT__ALUSrc_EXMEM = vlSelf->SingleCycleCPU__DOT__ALUSrc_IDEX;
        vlSelf->SingleCycleCPU__DOT__regWrite_EXMEM 
            = vlSelf->SingleCycleCPU__DOT__regWrite_IDEX;
        vlSelf->SingleCycleCPU__DOT__memtoReg_EXMEM 
            = vlSelf->SingleCycleCPU__DOT__memtoReg_IDEX;
        vlSelf->SingleCycleCPU__DOT__memWrite_IDEX 
            = vlSelf->SingleCycleCPU__DOT__memWrite;
        vlSelf->SingleCycleCPU__DOT__branch_IDEX = vlSelf->SingleCycleCPU__DOT__branch;
        vlSelf->SingleCycleCPU__DOT__ALUSrc_IDEX = vlSelf->SingleCycleCPU__DOT__ALUSrc;
        vlSelf->SingleCycleCPU__DOT__regWrite_IDEX 
            = vlSelf->SingleCycleCPU__DOT__regWrite;
        vlSelf->SingleCycleCPU__DOT__memtoReg_IDEX 
            = vlSelf->SingleCycleCPU__DOT__memtoReg;
    } else {
        vlSelf->SingleCycleCPU__DOT__ALU_zero_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__memWrite_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__memRead_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__branch_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUSrc_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUOp_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__PC_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__readData1_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__readData2_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__ALU_result_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__readData_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__inst_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUOp_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__imm_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__PC_out_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__readData2_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__inst_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUOp_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__PC_out_IFID = 0U;
        vlSelf->SingleCycleCPU__DOT__inst_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__inst_IFID = 0U;
        vlSelf->SingleCycleCPU__DOT__regWrite_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__memtoReg_MEMWB = 0U;
        vlSelf->SingleCycleCPU__DOT__memWrite_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__branch_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUSrc_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__regWrite_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__memtoReg_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__memWrite_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__branch_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUSrc_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__regWrite_IDEX = 0U;
        vlSelf->SingleCycleCPU__DOT__memtoReg_IDEX = 0U;
    }
    vlSelf->SingleCycleCPU__DOT__mux_ALU_out = ((IData)(vlSelf->SingleCycleCPU__DOT__ALUSrc_IDEX)
                                                 ? vlSelf->SingleCycleCPU__DOT__imm_IDEX
                                                 : vlSelf->SingleCycleCPU__DOT__readData2_IDEX);
    __Vtableidx2 = (((IData)(vlSelf->SingleCycleCPU__DOT__ALUOp_IDEX) 
                     << 4U) | ((8U & (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                      >> 0x1bU)) | 
                               (7U & (vlSelf->SingleCycleCPU__DOT__inst_IDEX 
                                      >> 0xcU))));
    if (VSingleCycleCPU__ConstPool__TABLE_h8bf831f2_0
        [__Vtableidx2]) {
        vlSelf->SingleCycleCPU__DOT__ALUCtl = VSingleCycleCPU__ConstPool__TABLE_hdf017942_0
            [__Vtableidx2];
    }
    vlSelf->SingleCycleCPU__DOT__imm = ((0x40U & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                         ? ((0x20U 
                                             & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                             ? ((0x10U 
                                                 & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                     ? 
                                                    ((0x7ffff800U 
                                                      & ((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                                     >> 0x1fU))) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                            << 3U)) 
                                                        | ((0x3f0U 
                                                            & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                               >> 0x15U)) 
                                                           | (0xfU 
                                                              & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                                 >> 8U)))))
                                                     : 0U)
                                                    : 0U))))
                                             : 0U) : 
                                        ((0x20U & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                          ? ((0x10U 
                                              & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                              ? 0U : 
                                             ((8U & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                                          : ((0x10U 
                                              & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                              ? ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U)))
                                              : ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__inst_IFID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->SingleCycleCPU__DOT__inst_IFID 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U))))));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__memRead_EXMEM) {
        vlSelf->SingleCycleCPU__DOT__readData = ((0xffffffU 
                                                  & vlSelf->SingleCycleCPU__DOT__readData) 
                                                 | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM))] 
                                                    << 0x18U));
        vlSelf->SingleCycleCPU__DOT__readData = ((0xff00ffffU 
                                                  & vlSelf->SingleCycleCPU__DOT__readData) 
                                                 | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM))] 
                                                    << 0x10U));
        vlSelf->SingleCycleCPU__DOT__readData = ((0xffff00ffU 
                                                  & vlSelf->SingleCycleCPU__DOT__readData) 
                                                 | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM))] 
                                                    << 8U));
        vlSelf->SingleCycleCPU__DOT__readData = ((0xffffff00U 
                                                  & vlSelf->SingleCycleCPU__DOT__readData) 
                                                 | vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                 [(0x7fU 
                                                   & vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM)]);
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__4(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__5(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->SingleCycleCPU__DOT__pc_out = ((IData)(vlSelf->start)
                                            ? vlSelf->SingleCycleCPU__DOT__pc_in
                                            : 0U);
}

extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h4789efb2_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h83c796dd_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_hd5c73f6d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h7c96d48f_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__6(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelf->start) {
        vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM 
            = vlSelf->SingleCycleCPU__DOT__ALU_result;
        vlSelf->SingleCycleCPU__DOT__memRead_EXMEM 
            = vlSelf->SingleCycleCPU__DOT__memRead_IDEX;
    } else {
        vlSelf->SingleCycleCPU__DOT__ALU_result_EXMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__memRead_EXMEM = 0U;
    }
    if ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))) {
        vlSelf->SingleCycleCPU__DOT__ALU_result = (vlSelf->SingleCycleCPU__DOT__readData1_IDEX 
                                                   + vlSelf->SingleCycleCPU__DOT__mux_ALU_out);
    } else if ((4U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))) {
        vlSelf->SingleCycleCPU__DOT__ALU_result = (vlSelf->SingleCycleCPU__DOT__readData1_IDEX 
                                                   - vlSelf->SingleCycleCPU__DOT__mux_ALU_out);
    } else if ((7U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))) {
        vlSelf->SingleCycleCPU__DOT__ALU_result = (vlSelf->SingleCycleCPU__DOT__readData1_IDEX 
                                                   & vlSelf->SingleCycleCPU__DOT__mux_ALU_out);
    } else if ((8U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))) {
        vlSelf->SingleCycleCPU__DOT__ALU_result = (vlSelf->SingleCycleCPU__DOT__readData1_IDEX 
                                                   | vlSelf->SingleCycleCPU__DOT__mux_ALU_out);
    } else if ((6U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))) {
        vlSelf->SingleCycleCPU__DOT__ALU_result = (
                                                   VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__readData1_IDEX, vlSelf->SingleCycleCPU__DOT__mux_ALU_out)
                                                    ? 1U
                                                    : 0U);
    }
    vlSelf->SingleCycleCPU__DOT__memRead_IDEX = ((IData)(vlSelf->start) 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__memRead));
    __Vtableidx1 = (0x7fU & vlSelf->SingleCycleCPU__DOT__inst_IFID);
    vlSelf->SingleCycleCPU__DOT__branch = VSingleCycleCPU__ConstPool__TABLE_h4789efb2_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__memRead = VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__memtoReg = VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ALUOp = VSingleCycleCPU__ConstPool__TABLE_h83c796dd_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__memWrite = VSingleCycleCPU__ConstPool__TABLE_hbdb291c7_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ALUSrc = VSingleCycleCPU__ConstPool__TABLE_hd5c73f6d_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__regWrite = VSingleCycleCPU__ConstPool__TABLE_h7c96d48f_0
        [__Vtableidx1];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__pc_in = (((IData)(vlSelf->SingleCycleCPU__DOT__ALU_zero_EXMEM) 
                                           & (IData)(vlSelf->SingleCycleCPU__DOT__branch_EXMEM))
                                           ? vlSelf->SingleCycleCPU__DOT__PC_EXMEM
                                           : ((IData)(4U) 
                                              + vlSelf->SingleCycleCPU__DOT__pc_out));
}

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
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
            VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSingleCycleCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSingleCycleCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
