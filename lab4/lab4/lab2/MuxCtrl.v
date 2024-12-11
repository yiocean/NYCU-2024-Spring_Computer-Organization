module MuxCtrl(
    input sel,

    input memRead,
    input [1:0] memtoReg,
    input [2:0] ALUOp,
    input memWrite,
    input ALUSrc,
    input regWrite,
    output reg memRead_o,
    output reg [1:0] memtoReg_o,
    output reg [2:0] ALUOp_o,
    output reg memWrite_o,
    output reg ALUSrc_o,
    output reg regWrite_o
);

assign memRead_o = sel ? 1'b0 : memRead;
assign memtoReg_o = sel ? 2'b00 : memtoReg;
assign ALUOp_o = sel ? 3'b000 : ALUOp;
assign memWrite_o = sel ? 1'b0 : memWrite;
assign ALUSrc_o = sel ? 1'b0 : ALUSrc;
assign regWrite_o = sel ? 1'b0 : regWrite;

endmodule


module MuxControl (
    input hazard_i, regWrite_i, memRead_i, memWrite_i, ALUSrc_i, 
    input [1:0] memtoReg_i,
    input [2:0] ALUOp_i,
    output reg [2:0] ALUOp_o,
    output reg [1:0] memtoReg_o,
    output reg memRead_o, memWrite_o, ALUSrc_o, regWrite_o
);
    always @(*) begin
        case(hazard_i) 
        1'b1: begin // load-use hazard, stall
            ALUOp_o = 3'b000;
            memRead_o = 1'b0;
            memtoReg_o = 2'b00;
            memWrite_o = 1'b0;
            ALUSrc_o = 1'b0;
            regWrite_o = 1'b0;
        end 
        default: begin // hazard_i == 0
            ALUOp_o = ALUOp_i;
            memRead_o = memRead_i;
            memtoReg_o = memtoReg_i;
            memWrite_o = memWrite_i;
            ALUSrc_o = ALUSrc_i;
            regWrite_o = regWrite_i;
        end
        endcase
    end

endmodule
