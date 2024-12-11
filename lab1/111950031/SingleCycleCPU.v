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
wire branch, memRead, memtoReg, memWrite, ALUSrc, regWrite, zeroFlag;
wire [31:0] writeData, readData1, readData2;
wire [31:0] imm;
wire [31:0] branchTarget;
wire [31:0] Adder2Sum;
wire [31:0] ALUin2, ALUResult;
wire [1:0] ALUOp;
wire [31:0] readDataMem;
wire [3:0] ALUCtl;


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
    .branch(branch),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
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

ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(branchTarget)
);

Adder m_Adder_2(
    .a(pc_o),
    .b(branchTarget),
    .sum(Adder2Sum)
);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(branch & zeroFlag),
    .s0(sum),
    .s1(Adder2Sum),
    .out(pc_i)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
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

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(readData1),
    .B(ALUin2),
    .ALUOut(ALUResult),
    .zero(zeroFlag)
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

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(ALUResult),
    .s1(readDataMem),
    .out(writeData)
);

endmodule
