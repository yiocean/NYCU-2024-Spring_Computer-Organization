// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleCPU.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLECPU___024ROOT_H_
#define VERILATED_VSINGLECYCLECPU___024ROOT_H_  // guard

#include "verilated.h"

class VSingleCycleCPU__Syms;

class VSingleCycleCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(start,0,0);
    CData/*0:0*/ SingleCycleCPU__DOT__memRead;
    CData/*0:0*/ SingleCycleCPU__DOT__PCSel;
    CData/*0:0*/ SingleCycleCPU__DOT__memWrite;
    CData/*0:0*/ SingleCycleCPU__DOT__regWrite;
    CData/*0:0*/ SingleCycleCPU__DOT__ASel;
    CData/*0:0*/ SingleCycleCPU__DOT__BSel;
    CData/*2:0*/ SingleCycleCPU__DOT__ALUOp;
    CData/*1:0*/ SingleCycleCPU__DOT__memtoReg;
    CData/*3:0*/ SingleCycleCPU__DOT__ALUCtl;
    CData/*0:0*/ SingleCycleCPU__DOT__BrEq;
    CData/*0:0*/ SingleCycleCPU__DOT__BrLT;
    CData/*6:0*/ SingleCycleCPU__DOT____Vcellinp__m_Control__opcode;
    CData/*4:0*/ SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg;
    CData/*1:0*/ SingleCycleCPU__DOT__m_ALU__DOT__combine;
    CData/*7:0*/ __VdfgTmp_h98940ace__0;
    CData/*7:0*/ __VdfgTmp_h0374c2a2__0;
    CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
    CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
    CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
    CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
    CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__start;
    CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__memRead;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ __VdfgTmp_h3e485fe9__0;
    IData/*31:0*/ SingleCycleCPU__DOT__pc_i;
    IData/*31:0*/ SingleCycleCPU__DOT__pc_o;
    IData/*31:0*/ SingleCycleCPU__DOT__inst;
    IData/*31:0*/ SingleCycleCPU__DOT__writeData;
    IData/*31:0*/ SingleCycleCPU__DOT__readData1;
    IData/*31:0*/ SingleCycleCPU__DOT__readData2;
    IData/*31:0*/ SingleCycleCPU__DOT__imm;
    IData/*31:0*/ SingleCycleCPU__DOT__ALUin1;
    IData/*31:0*/ SingleCycleCPU__DOT__ALUin2;
    IData/*31:0*/ SingleCycleCPU__DOT__ALUResult;
    IData/*31:0*/ SingleCycleCPU__DOT__readDataMem;
    IData/*31:0*/ __VdfgTmp_he45b3cba__0;
    IData/*23:0*/ __VdfgTmp_h9594e3d4__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__ALUResult;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(r[32],31,0);
    VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_InstMem__DOT__insts;
    VlUnpacked<IData/*31:0*/, 32> SingleCycleCPU__DOT__m_Register__DOT__regs;
    VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingleCycleCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleCPU___024root(VSingleCycleCPU__Syms* symsp, const char* v__name);
    ~VSingleCycleCPU___024root();
    VL_UNCOPYABLE(VSingleCycleCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
