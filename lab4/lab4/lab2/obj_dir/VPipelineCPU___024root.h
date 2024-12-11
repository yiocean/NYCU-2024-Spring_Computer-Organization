// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__flush;
        CData/*0:0*/ PipelineCPU__DOT__memRead_EXMEM;
        CData/*0:0*/ PipelineCPU__DOT__memRead;
        CData/*0:0*/ PipelineCPU__DOT__memWrite;
        CData/*0:0*/ PipelineCPU__DOT__regWrite;
        CData/*0:0*/ PipelineCPU__DOT__ASel;
        CData/*0:0*/ PipelineCPU__DOT__BSel;
        CData/*0:0*/ PipelineCPU__DOT__IF_ID_Write;
        CData/*3:0*/ PipelineCPU__DOT__ALUCtl;
        CData/*0:0*/ PipelineCPU__DOT__BrEq;
        CData/*0:0*/ PipelineCPU__DOT__BrLT;
        CData/*0:0*/ PipelineCPU__DOT__PCSel;
        CData/*0:0*/ PipelineCPU__DOT__PCWrite;
        CData/*0:0*/ PipelineCPU__DOT__control_signal_mux;
        CData/*2:0*/ PipelineCPU__DOT__ALUOp;
        CData/*2:0*/ PipelineCPU__DOT__ALUOp_IDEX;
        CData/*0:0*/ PipelineCPU__DOT__ALUSrc;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg;
        CData/*4:0*/ PipelineCPU__DOT__ID_EX_rs1;
        CData/*4:0*/ PipelineCPU__DOT__ID_EX_rs2;
        CData/*4:0*/ PipelineCPU__DOT__EX_MEM_rd;
        CData/*4:0*/ PipelineCPU__DOT__MEM_WB_rd;
        CData/*0:0*/ PipelineCPU__DOT__ID_EX_regWrite;
        CData/*0:0*/ PipelineCPU__DOT__EX_MEM_regWrite;
        CData/*0:0*/ PipelineCPU__DOT__MEM_WB_regWrite;
        CData/*1:0*/ PipelineCPU__DOT__ForwardA;
        CData/*1:0*/ PipelineCPU__DOT__ForwardB;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg_IDEX;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg_EXMEM;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg_MEMWB;
        CData/*0:0*/ PipelineCPU__DOT__ALUSrc_IDEX;
        CData/*0:0*/ PipelineCPU__DOT__memRead_IDEX;
        CData/*0:0*/ PipelineCPU__DOT__memWrite_IDEX;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_IDEX;
        CData/*0:0*/ PipelineCPU__DOT__memWrite_EXMEM;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_EXMEM;
        CData/*0:0*/ PipelineCPU__DOT__memRead_MEMWB;
        CData/*0:0*/ PipelineCPU__DOT__memWrite_MEMWB;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_MEMWB;
        CData/*0:0*/ PipelineCPU__DOT__m_branchComp__DOT__BrEq;
        CData/*0:0*/ PipelineCPU__DOT__m_branchComp__DOT__BrLT;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__memRead_EXMEM;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ PipelineCPU__DOT__inst;
        IData/*31:0*/ PipelineCPU__DOT__writeData;
        IData/*31:0*/ PipelineCPU__DOT__readData1;
        IData/*31:0*/ PipelineCPU__DOT__readData2;
        IData/*31:0*/ PipelineCPU__DOT__imm;
        IData/*31:0*/ PipelineCPU__DOT__ALUin1;
    };
    struct {
        IData/*31:0*/ PipelineCPU__DOT__ALUin2;
        IData/*31:0*/ PipelineCPU__DOT__ALUResult;
        IData/*31:0*/ PipelineCPU__DOT__pc_i;
        IData/*31:0*/ PipelineCPU__DOT__pc_o;
        IData/*31:0*/ PipelineCPU__DOT__aluResult_EXMEM;
        IData/*31:0*/ PipelineCPU__DOT__aluResult_MEMWB;
        IData/*31:0*/ PipelineCPU__DOT__inst_IFID;
        IData/*31:0*/ PipelineCPU__DOT__pc_IFID;
        IData/*31:0*/ PipelineCPU__DOT__sum_IFID;
        IData/*31:0*/ PipelineCPU__DOT__readDataMem;
        IData/*31:0*/ PipelineCPU__DOT__imm_IDEX;
        IData/*31:0*/ PipelineCPU__DOT__readData1_IDEX;
        IData/*31:0*/ PipelineCPU__DOT__readData2_IDEX;
        IData/*31:0*/ PipelineCPU__DOT__sum_IDEX;
        IData/*31:0*/ PipelineCPU__DOT__aluout;
        IData/*31:0*/ PipelineCPU__DOT__aluout_EXMEM;
        IData/*31:0*/ PipelineCPU__DOT__aluout_MEMWB;
        IData/*31:0*/ PipelineCPU__DOT__sum_EXMEM;
        IData/*31:0*/ PipelineCPU__DOT__rs2_EXMEM;
        IData/*31:0*/ PipelineCPU__DOT__rs2;
        IData/*31:0*/ PipelineCPU__DOT__sum_MEMWB;
        IData/*31:0*/ PipelineCPU__DOT__readDataMem_MEMWB;
        IData/*31:0*/ PipelineCPU__DOT__finalout;
        IData/*31:0*/ PipelineCPU__DOT__inst_IDEX;
        IData/*31:0*/ PipelineCPU__DOT__inst_EXMEM;
        IData/*31:0*/ PipelineCPU__DOT__inst_MEMWB;
        IData/*31:0*/ PipelineCPU__DOT__ALUSrc1;
        IData/*31:0*/ PipelineCPU__DOT__ALUSrc2;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__aluout_EXMEM;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
