/* verilator lint_off CASEINCOMPLETE */
module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A, B,
    output reg signed [31:0] ALUOut,
    output zero
);

    
    always @(*) begin
        case(ALUctl)
            4'b0001: ALUOut = A + B; // add & addi
            4'b0100: ALUOut = $signed(A) - $signed(B); // sub & beq, need to use signd
            4'b0111: ALUOut = A & B; // and & andi
            4'b1000: ALUOut = A | B; // or & ori
            4'b0110: ALUOut = ($signed(A) < $signed(B)) ? 1 : 0; // slt
            //default: ALUOut = 0;
        endcase
    end

    assign zero = (ALUOut == 0);

endmodule
