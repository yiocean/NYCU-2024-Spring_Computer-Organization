module EX_MEM_register (
    input clk,
    input rst,

    input regWrite,
    input [1:0] memtoReg,
    input memRead,
    input memWrite,
    input [31:0] sum,
    input [31:0] aluout,
    input [31:0] rs2_EXMEM,
    input [31:0] inst,

    output reg regWrite_o,
    output reg [1:0] memtoReg_o,
    output reg memRead_o,
    output reg memWrite_o,
    output reg [31:0] sum_o,
    output reg [31:0] aluout_o,
    output reg [31:0] rs2_EXMEM_o,
    output reg [31:0] inst_o
);

    always @(posedge clk) begin
        if (!rst) begin
            regWrite_o <= 0;
            memtoReg_o <= 0;
            memRead_o <= 0;
            memWrite_o <= 0;
            sum_o <= 0;
            aluout_o <= 0;
            rs2_EXMEM_o <= 0;
            inst_o <= 0;
        end
        else begin
            regWrite_o <= regWrite;
            memtoReg_o <= memtoReg;
            memRead_o <= memRead;
            memWrite_o <= memWrite;
            sum_o <= sum;
            aluout_o <= aluout;
            rs2_EXMEM_o <= rs2_EXMEM;
            inst_o <= inst;
        end
    end

endmodule
