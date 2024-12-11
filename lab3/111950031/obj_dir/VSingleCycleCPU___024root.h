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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ SingleCycleCPU__DOT__memRead_EXMEM;
        CData/*3:0*/ SingleCycleCPU__DOT__ALUCtl;
        CData/*0:0*/ SingleCycleCPU__DOT__ALU_zero_EXMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__branch;
        CData/*0:0*/ SingleCycleCPU__DOT__memRead;
        CData/*0:0*/ SingleCycleCPU__DOT__memtoReg;
        CData/*0:0*/ SingleCycleCPU__DOT__memWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__ALUSrc;
        CData/*0:0*/ SingleCycleCPU__DOT__regWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__branch_IDEX;
        CData/*0:0*/ SingleCycleCPU__DOT__memRead_IDEX;
        CData/*0:0*/ SingleCycleCPU__DOT__memtoReg_IDEX;
        CData/*0:0*/ SingleCycleCPU__DOT__memWrite_IDEX;
        CData/*0:0*/ SingleCycleCPU__DOT__ALUSrc_IDEX;
        CData/*0:0*/ SingleCycleCPU__DOT__regWrite_IDEX;
        CData/*0:0*/ SingleCycleCPU__DOT__branch_EXMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__memtoReg_EXMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__memWrite_EXMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__ALUSrc_EXMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__regWrite_EXMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__branch_MEMWB;
        CData/*0:0*/ SingleCycleCPU__DOT__memRead_MEMWB;
        CData/*0:0*/ SingleCycleCPU__DOT__memtoReg_MEMWB;
        CData/*0:0*/ SingleCycleCPU__DOT__memWrite_MEMWB;
        CData/*0:0*/ SingleCycleCPU__DOT__ALUSrc_MEMWB;
        CData/*0:0*/ SingleCycleCPU__DOT__regWrite_MEMWB;
        CData/*1:0*/ SingleCycleCPU__DOT__ALUOp;
        CData/*1:0*/ SingleCycleCPU__DOT__ALUOp_IDEX;
        CData/*1:0*/ SingleCycleCPU__DOT__ALUOp_EXMEM;
        CData/*1:0*/ SingleCycleCPU__DOT__ALUOp_MEMWB;
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
        CData/*4:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__memRead_EXMEM;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ SingleCycleCPU__DOT__PC_EXMEM;
        IData/*31:0*/ SingleCycleCPU__DOT__pc_in;
        IData/*31:0*/ SingleCycleCPU__DOT__pc_out;
        IData/*31:0*/ SingleCycleCPU__DOT__PC_out_IFID;
        IData/*31:0*/ SingleCycleCPU__DOT__PC_out_IDEX;
        IData/*31:0*/ SingleCycleCPU__DOT__inst_IFID;
        IData/*31:0*/ SingleCycleCPU__DOT__inst_IDEX;
        IData/*31:0*/ SingleCycleCPU__DOT__inst_EXMEM;
        IData/*31:0*/ SingleCycleCPU__DOT__inst_MEMWB;
        IData/*31:0*/ SingleCycleCPU__DOT__imm;
        IData/*31:0*/ SingleCycleCPU__DOT__imm_IDEX;
        IData/*31:0*/ SingleCycleCPU__DOT__readData1_IDEX;
        IData/*31:0*/ SingleCycleCPU__DOT__readData2_IDEX;
        IData/*31:0*/ SingleCycleCPU__DOT__readData2_EXMEM;
    };
    struct {
        IData/*31:0*/ SingleCycleCPU__DOT__readData;
        IData/*31:0*/ SingleCycleCPU__DOT__readData_MEMWB;
        IData/*31:0*/ SingleCycleCPU__DOT__ALU_result;
        IData/*31:0*/ SingleCycleCPU__DOT__ALU_result_EXMEM;
        IData/*31:0*/ SingleCycleCPU__DOT__ALU_result_MEMWB;
        IData/*31:0*/ SingleCycleCPU__DOT__mux_ALU_out;
        IData/*31:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__ALU_result_EXMEM;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> SingleCycleCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

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
