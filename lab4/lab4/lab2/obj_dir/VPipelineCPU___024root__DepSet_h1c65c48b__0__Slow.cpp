// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

VL_ATTR_COLD void VPipelineCPU___024root___eval_static(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial\n"); );
    // Body
    VPipelineCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__aluout_EXMEM 
        = vlSelf->PipelineCPU__DOT__aluout_EXMEM;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__memRead_EXMEM 
        = vlSelf->PipelineCPU__DOT__memRead_EXMEM;
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hd0a1b870__0;
    // Body
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_hd0a1b870__0[0U] = 0x2e747874U;
    __Vtemp_hd0a1b870__0[1U] = 0x494f4e53U;
    __Vtemp_hd0a1b870__0[2U] = 0x52554354U;
    __Vtemp_hd0a1b870__0[3U] = 0x494e5354U;
    __Vtemp_hd0a1b870__0[4U] = 0x4553545fU;
    __Vtemp_hd0a1b870__0[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hd0a1b870__0)
                 ,  &(vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_final(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_triggers__stl(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_settle(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPipelineCPU___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 5, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPipelineCPU___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 128> VPipelineCPU__ConstPool__TABLE_h25dff477_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*1:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3896431d_0;
extern const VlUnpacked<CData/*2:0*/, 128> VPipelineCPU__ConstPool__TABLE_h18f4ec70_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*5:0*/, 128> VPipelineCPU__ConstPool__TABLE_h6cddf12d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_ha9537531_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3729482a_0;

VL_ATTR_COLD void VPipelineCPU___024root___stl_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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
    vlSelf->PipelineCPU__DOT__readData2 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                   >> 0x14U))];
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
    vlSelf->PipelineCPU__DOT__readData1 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_IFID 
                   >> 0xfU))];
    vlSelf->PipelineCPU__DOT__finalout = ((0U == (IData)(vlSelf->PipelineCPU__DOT__memtoReg_MEMWB))
                                           ? vlSelf->PipelineCPU__DOT__aluout_MEMWB
                                           : ((1U == (IData)(vlSelf->PipelineCPU__DOT__memtoReg_MEMWB))
                                               ? vlSelf->PipelineCPU__DOT__readDataMem_MEMWB
                                               : vlSelf->PipelineCPU__DOT__sum_MEMWB));
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
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VPipelineCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] PipelineCPU.aluout_EXMEM or [changed] PipelineCPU.memRead_EXMEM)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] PipelineCPU.aluout_EXMEM or [changed] PipelineCPU.memRead_EXMEM)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipelineCPU___024root___ctor_var_reset(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelineCPU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ASel = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__BSel = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__IF_ID_Write = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__writeData = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__readData1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__readData2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUin1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUin2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUCtl = VL_RAND_RESET_I(4);
    vlSelf->PipelineCPU__DOT__BrEq = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__BrLT = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__PCSel = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__pc_i = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__aluResult_EXMEM = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__aluResult_MEMWB = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__control_signal_mux = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__inst_IFID = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__pc_IFID = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__sum_IFID = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUOp = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__ALUOp_IDEX = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__readDataMem = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memtoReg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__ID_EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__ID_EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__ID_EX_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EX_MEM_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__MEM_WB_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__imm_IDEX = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__readData1_IDEX = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__readData2_IDEX = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__sum_IDEX = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__aluout = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__aluout_EXMEM = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__aluout_MEMWB = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__sum_EXMEM = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__rs2_EXMEM = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__sum_MEMWB = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__readDataMem_MEMWB = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__finalout = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ForwardA = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__ForwardB = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__memtoReg_IDEX = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__memtoReg_EXMEM = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__memtoReg_MEMWB = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__ALUSrc_IDEX = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memRead_IDEX = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memWrite_IDEX = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__regWrite_IDEX = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memRead_EXMEM = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memWrite_EXMEM = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__regWrite_EXMEM = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memRead_MEMWB = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memWrite_MEMWB = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__regWrite_MEMWB = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__inst_IDEX = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__inst_EXMEM = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__inst_MEMWB = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUSrc1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUSrc2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrEq = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__m_branchComp__DOT__BrLT = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__start = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__aluout_EXMEM = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__memRead_EXMEM = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
