module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module
wire [31:0] pc_i, pc_o;
wire [31:0] sum;
wire [31:0] inst;
wire memRead, memWrite, regWrite, ASel, BSel;
wire [31:0] writeData, readData1, readData2;
wire [31:0] imm;
wire [31:0] ALUin1, ALUin2, ALUResult;
wire [2:0] ALUOp;
wire [1:0] memtoReg;
wire [31:0] readDataMem;
wire [3:0] ALUCtl;
wire BrEq, BrLT, PCSel;


PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_i),
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

Control m_Control(
    .opcode(inst[6:0]),
    .PCSel(PCSel),
    .ASel(ASel),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .BSel(BSel),
    .regWrite(regWrite)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite),
    .readReg1(inst[19:15]),
    .readReg2(inst[24:20]),
    .writeReg(inst[11:7]),
    .writeData(writeData),
    .readData1(readData1),
    .readData2(readData2)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(inst[31:0]),
    .imm(imm)
);

Mux2to1 #(.size(32)) m_Mux_ALU_1(
    .sel(ASel),
    .s0(readData1),
    .s1(pc_o),
    .out(ALUin1)
);

Mux2to1 #(.size(32)) m_Mux_ALU_2(
    .sel(BSel),
    .s0(readData2),
    .s1(imm),
    .out(ALUin2)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(inst[30]), // not inst[31] QQ
    .funct3(inst[14:12]),
    .ALUCtl(ALUCtl)
);

branchComp m_branchComp(
    .rs1(readData1),
    .rs2(readData2),
    .BrEq(BrEq),
    .BrLT(BrLT)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(ALUin1),
    .B(ALUin2),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .ALUOut(ALUResult)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUResult),
    .writeData(readData2),
    .readData(readDataMem)
);

MuxWR m_Mux_WriteData(
    .newPC(sum),
    .AluData(ALUResult),
    .mem(readDataMem),
    .memtoReg(memtoReg),
    .outResult(writeData)
);

MuxPC m_Mux_PC(
    .nextPC(sum),
    .aluResult(ALUResult),
    .PCSel(PCSel),
    .out(pc_i)
);

endmodule
