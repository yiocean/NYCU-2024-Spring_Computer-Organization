/* verilator lint_off MULTITOP */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
/* verilator lint_off SYNCASYNCNET */
module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module


wire [31:0] inst;
wire memRead, memWrite, regWrite, ASel, BSel, IF_ID_Write;
wire memRead_o, memWrite_o, regWrite_o;
wire [1:0] memtoReg_o;
wire [2:0] ALUOp_o;
wire ALUSrc_o;
wire [31:0] writeData, readData1, readData2;
wire [31:0] imm;
wire [31:0] ALUin1, ALUin2, ALUResult;

wire [3:0] ALUCtl;
wire BrEq, BrLT, PCSel;

wire [31:0] pc_i, pc_o;
wire [31:0] sum, sum2, aluResult_EXMEM, aluResult_MEMWB;
wire PCWrite, flush, control_signal_mux;
wire [31:0] inst_IFID, pc_IFID, sum_IFID, addr;
wire [2:0] ALUOp, ALUOp_IDEX;
wire [31:0] readDataMem;
wire ALUSrc;
wire [1:0] memtoReg;

wire [4:0] ID_EX_rs1, ID_EX_rs2, EX_MEM_rd, MEM_WB_rd;
wire ID_EX_regWrite, EX_MEM_regWrite, MEM_WB_regWrite;
wire [31:0] imm_IDEX, readData1_IDEX, readData2_IDEX, sum_IDEX, aluout, aluout_EXMEM, aluout_MEMWB;
wire [31:0] sum_EXMEM, rs2_EXMEM, rs2, sum_MEMWB;;
wire [31:0] readDataMem_MEMWB, finalout;
wire [1:0] ForwardA, ForwardB, memtoReg_IDEX, memtoReg_EXMEM, memtoReg_MEMWB;
wire ALUSrc_IDEX, memRead_IDEX, memWrite_IDEX, regWrite_IDEX;
wire memRead_EXMEM, memWrite_EXMEM, regWrite_EXMEM;
wire memRead_MEMWB, memWrite_MEMWB, regWrite_MEMWB;
wire [31:0] inst_IDEX, inst_EXMEM, inst_MEMWB;
wire [31:0] IDEX_tmp, ALUSrc1, ALUSrc2;


PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_i),
    .PCWrite(PCWrite),
    .pc_o(pc_o)
);

Adder m_Adder_1(
    .a(pc_o),
    .b(32'd4),
    .sum(sum)
);

InstructionMemory m_InstMem(
    .readAddr(pc_o),
    .inst(inst)
);

IF_ID_register m_IF_ID_Register(
    .clk(clk),
    .rst(start),
    .IF_ID_Write(IF_ID_Write),
    .flush(flush),
    .inst_i(inst),
    .pc_i(pc_o),
    .pc_plus4_i(sum),
    .instr_o(inst_IFID),
    .pc_o(pc_IFID),
    .pc_plus4_o(sum_IFID)
);

AddrMux addrMux (
    .pc(pc_IFID),
    .rs1(readData1),
    .opcode(inst_IFID[6:0]),
    .funct3(inst_IFID[14:12]),
    .addr(addr)
);

Adder m_Adder_2(
    .a(addr),
    .b(imm),
    .sum(sum2)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite_MEMWB),
    .readReg1(inst_IFID[19:15]),
    .readReg2(inst_IFID[24:20]),
    .writeReg(inst_IFID[11:7]),
    .writeData(finalout),
    .readData1(readData1),
    .readData2(readData2)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(inst_IFID[31:0]),
    .imm(imm)
);

branchComp m_branchComp(
    .rs1(readData1),
    .rs2(readData2),
    .opcode(inst_IFID[6:0]),
    .funct3(inst_IFID[14:12]),
    .flush(flush)
);

HazardDetectionUnit m_HazardDetectionUnit(
    .IF_ID_rs1(inst_IFID[19:15]),
    .IF_ID_rs2(inst_IFID[24:20]),
    .ID_EX_rd(inst_IDEX[11:7]),
    .EX_MEM_rd(inst_EXMEM[11:7]),
    .ID_EX_MemRead(memRead_IDEX),
    .ID_EX_regWrite(regWrite_IDEX),
    .EX_MEM_regWrite(regWrite_EXMEM),
    .PCWrite(PCWrite),
    .IF_ID_Write(IF_ID_Write),
    .control_signal_mux(control_signal_mux)
);

Control m_Control(
    .opcode(inst_IFID[6:0]),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite)
);

MuxCtrl m_MuxCtrl(
    .sel(control_signal_mux),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite),
    .memRead_o(memRead_o),
    .memtoReg_o(memtoReg_o),
    .ALUOp_o(ALUOp_o),
    .memWrite_o(memWrite_o),
    .ALUSrc_o(ALUSrc_o),
    .regWrite_o(regWrite_o)
);

// done 

ID_EX_register m_ID_EX_register(
    .clk(clk),
    .rst(start),
    .memRead(memRead_o),
    .memtoReg(memtoReg_o),
    .ALUOp(ALUOp_o),
    .memWrite(memWrite_o),
    .ALUSrc(ALUSrc_o),
    .regWrite(regWrite_o),
    .sum(sum),
    .readData1(readData1),
    .readData2(readData2),
    .imm(imm),
    .inst(inst),
    .memRead_o(memRead_IDEX),
    .memtoReg_o(memtoReg_IDEX),
    .ALUOp_o(ALUOp_IDEX),
    .memWrite_o(memWrite_IDEX),
    .ALUSrc_o(ALUSrc_IDEX),
    .regWrite_o(regWrite_IDEX),
    .sum_o(sum_IDEX),
    .readData1_o(readData1_IDEX),
    .readData2_o(readData2_IDEX),
    .imm_o(imm_IDEX),
    .inst_o(inst_IDEX)
);

Mux2to1 #(.size(32)) m_Mux_IDEX_1(
    .sel(ALUSrc_IDEX),
    .s0(readData2_IDEX),
    .s1(imm_IDEX),
    .out(IDEX_tmp)
);

ForwardingUnit m_ForwardingUnit(
    .ID_EX_rs1(inst_IDEX[19:15]),
    .ID_EX_rs2(inst_IDEX[24:20]),
    .EX_MEM_rd(inst_EXMEM[11:7]),
    .EX_MEM_RegWrite(regWrite_EXMEM),
    .MEM_WB_rd(inst_MEMWB[11:7]),
    .MEM_WB_RegWrite(regWrite_MEMWB),
    .ForwardA(ForwardA),
    .ForwardB(ForwardB)
);

Mux3to1 m_MUX_ALUSrc1(
    .sel(ForwardA),
    .s0(readData1_IDEX),
    .s1(finalout),
    .s2(aluResult_EXMEM),
    .out(ALUSrc1)
);

Mux3to1 m_MUX_ALUSrc2(
    .sel(ForwardB),
    .s0(IDEX_tmp),
    .s1(finalout),
    .s2(aluResult_EXMEM),
    .out(ALUSrc2)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(ALUSrc1),
    .B(ALUSrc2),
    .ALUOut(aluout)
);

ALUCtrl m_ALUCtrrl(
    .ALUOp(ALUOp_IDEX),
    .funct7(inst_IDEX[30]),
    .funct3(inst_IDEX[14:12]),
    .ALUCtl(ALUCtl)
);

EX_MEM_register m_EX_MEM_register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite_IDEX),
    .memtoReg(memtoReg_IDEX),
    .memRead(memRead_IDEX),
    .memWrite(memWrite_IDEX),
    .sum(sum_IDEX),
    .aluout(aluout),
    .rs2_EXMEM(ALUSrc2),
    .inst(inst_IDEX),

    .regWrite_o(regWrite_EXMEM),
    .memtoReg_o(memtoReg_EXMEM),
    .memRead_o(memRead_EXMEM),
    .memWrite_o(memWrite_EXMEM),
    .sum_o(sum_EXMEM),
    .aluout_o(aluout_EXMEM),
    .rs2_EXMEM_o(rs2_EXMEM),
    .inst_o(inst_EXMEM)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite_EXMEM),
    .memRead(memRead_EXMEM),
    .address(aluout_EXMEM),
    .writeData(rs2_EXMEM),
    .readData(readDataMem)
);

MEM_WB_register m_MEM_WB_register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite_EXMEM),
    .memtoReg(memtoReg_EXMEM),
    .memRead(memRead_EXMEM),
    .memWrite(memWrite_EXMEM),
    .sum(sum_EXMEM),
    .aluout(aluout_EXMEM),
    .readDataMem(readDataMem),

    .regWrite_o(regWrite_MEMWB),
    .memtoReg_o(memtoReg_MEMWB),
    .memRead_o(memRead_MEMWB),
    .memWrite_o(memWrite_MEMWB),
    .sum_o(sum_MEMWB),
    .aluout_o(aluout_MEMWB),
    .readDataMem_o(readDataMem_MEMWB)
);

MuxWR m_Mux_WR(
    .AluData(aluout_MEMWB),
    .newPC(sum_MEMWB),
    .mem(readDataMem_MEMWB),
    .memtoReg(memtoReg_MEMWB),
    .outResult(finalout)
);

MuxPC m_Mux_PC(
    .nextPC(sum),
    .aluResult(sum2),
    .PCSel(flush),
    .out(pc_i)
);

endmodule
