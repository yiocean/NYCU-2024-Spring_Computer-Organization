module ID_EX_register (
    input clk,
    input rst,

    input memRead,
    input [1:0] memtoReg,
    input [2:0] ALUOp,
    input memWrite,
    input ALUSrc,
    input regWrite,
    input [31:0] sum,
    input [31:0] readData1,
    input [31:0] readData2,
    input [31:0] imm,
    input [31:0] inst,

    output reg memRead_o,
    output reg [1:0] memtoReg_o,
    output reg [2:0] ALUOp_o,
    output reg memWrite_o,
    output reg ALUSrc_o,
    output reg regWrite_o,
    output reg [31:0] sum_o,
    output reg [31:0] readData1_o,
    output reg [31:0] readData2_o,
    output reg [31:0] imm_o,
    output reg [31:0] inst_o
);

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            memRead_o <= 0;
            memtoReg_o <= 0;
            ALUOp_o <= 0;
            memWrite_o <= 0;
            ALUSrc_o <= 0;
            regWrite_o <= 0;
            sum_o <= 0;
            readData1_o <= 0;
            readData2_o <= 0;
            imm_o <= 0;
            inst_o <= 0;
        end else begin
            memRead_o <= memRead;
            memtoReg_o <= memtoReg;
            ALUOp_o <= ALUOp;
            memWrite_o <= memWrite;
            ALUSrc_o <= ALUSrc;
            regWrite_o <= regWrite;
            sum_o <= sum;
            readData1_o <= readData1;
            readData2_o <= readData2;
            imm_o <= imm;
            inst_o <= inst;
        end
    end

endmodule


module ID_EX_reg (
    input clk, 
    input rst, 

    input regWrite, 
    input memRead, 
    input memWrite, 
    input ALUSrc,
    input [1:0] memtoReg,
    input [2:0] ALUOp,
    input [31:0] next_pc, 
    input [31:0] imm, 
    input [31:0] rs1, 
    input [31:0] rs2,
    input [4:0] rd, 
    input [4:0] rs1_num,
    input [4:0] rs2_num,
    input funct7,
    input [2:0] funct3,

    output reg regWrite_o, 
    output reg memRead_o, 
    output reg memWrite_o, 
    output reg ALUSrc_o,
    output reg [1:0] memtoReg_o,
    output reg [2:0] ALUOp_o,
    output reg [31:0] next_pc_o, 
    output reg [31:0] imm_o, 
    output reg [31:0] rs1_o, 
    output reg [31:0] rs2_o,
    output reg [4:0] rd_o, 
    output reg [4:0] rs1_num_o, 
    output reg [4:0] rs2_num_o,
    output reg funct7_o,
    output reg [2:0] funct3_o
);

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            regWrite_o <= 0;
            memRead_o <= 0;
            memWrite_o <= 0;
            ALUSrc_o <= 0;
            memtoReg_o <= 0;
            ALUOp_o <= 0;
            next_pc_o <= 0;
            imm_o <= 0;
            rs1_o <= 0;
            rs2_o <= 0;
            rd_o <= 0;
            funct7_o <= 0;
            funct3_o <= 0;
            rs1_num_o <= 0;
            rs2_num_o <= 0;
        end else begin
            regWrite_o <= regWrite;
            memRead_o <= memRead;
            memWrite_o <= memWrite;
            ALUSrc_o <= ALUSrc;
            memtoReg_o <= memtoReg;
            ALUOp_o <= ALUOp;
            next_pc_o <= next_pc;
            imm_o <= imm;
            rs1_o <= rs1;
            rs2_o <= rs2;
            rd_o <= rd;
            funct7_o <= funct7;
            funct3_o <= funct3;
            rs1_num_o <= rs1_num;
            rs2_num_o <= rs2_num;
        end
    end

endmodule
