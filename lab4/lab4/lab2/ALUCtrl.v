/* verilator lint_off CASEINCOMPLETE */
module ALUCtrl (
    input [2:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation
    wire [6:0] combine = {ALUOp, funct7, funct3};

    always @(combine) begin
        case(combine)
            7'b0100000: ALUCtl = 4'b0001; // add
            7'b0110000: ALUCtl = 4'b0001; // addi
            7'b0111000: ALUCtl = 4'b0001; // addi
            7'b0000010: ALUCtl = 4'b0001; // lw & sw
            7'b0001010: ALUCtl = 4'b0001; // lw & sw
            7'b0101000: ALUCtl = 4'b0100; // sub
            // 7'b0010000: ALUCtl = 4'b1001; // beq
            // 7'b0011000: ALUCtl = 4'b1001; // beq
            7'b0100010: ALUCtl = 4'b0110; // slt
            7'b0110010: ALUCtl = 4'b0110; // slti
            7'b0111010: ALUCtl = 4'b0110; // slti
            7'b0100111: ALUCtl = 4'b0111; // and
            7'b0110111: ALUCtl = 4'b0111; // andi
            7'b0111111: ALUCtl = 4'b0111; // andi
            7'b0100110: ALUCtl = 4'b1000; // or
            7'b0110110: ALUCtl = 4'b1000; // ori
            7'b0111110: ALUCtl = 4'b1000; // ori
            // //bne
            // 7'b0010001: ALUCtl = 4'b1100;
            // 7'b0011001: ALUCtl = 4'b1100;
            // //blt
            // 7'b0010100: ALUCtl = 4'b1101;
            // 7'b0011100: ALUCtl = 4'b1101;
            // //bge
            // 7'b0010101: ALUCtl = 4'b1110;
            // 7'b0011101: ALUCtl = 4'b1110;
            default ALUCtl = 4'b1111; //jal, jalr
        endcase
    end

endmodule

