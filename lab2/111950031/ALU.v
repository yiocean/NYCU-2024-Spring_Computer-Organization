/* verilator lint_off CASEINCOMPLETE */
module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A, B,
    input wire BrEq,
    input wire BrLT,
    output reg signed [31:0] ALUOut
);

    wire [1:0] combine = {BrEq, BrLT};

    
    always @(*) begin
        case(ALUctl)
            4'b0001: ALUOut = A + B; // add & addi
            4'b0100: ALUOut = $signed(A) - $signed(B); // sub, need to use signd
            4'b0111: ALUOut = A & B; // and & andi
            4'b1000: ALUOut = A | B; // or & ori
            4'b0110: ALUOut = ($signed(A) < $signed(B)) ? 1 : 0; // slt & slti
            4'b1001: begin //beq
                case(BrEq)
                    1'b1: ALUOut = A + B;
                    1'b0: ALUOut = A + 32'd4;
                endcase
            end
            4'b1100: begin //bne
                case(BrEq)
                    1'b1: ALUOut = A + 32'd4;
                    1'b0: ALUOut = A + B; 
                endcase
            end
            4'b1101: begin //blt
                case(combine)
                    2'b01: ALUOut = A + B; 
                    2'b10: ALUOut = A + 32'd4;
                    2'b11: ALUOut = A + 32'd4;
                    2'b00: ALUOut = A + 32'd4;
                endcase
            end
            4'b1110: begin //bge
                case(BrLT)
                    1'b0: ALUOut = A + B; 
                    1'b1: ALUOut = A + 32'd4;
                endcase
            end
            //4'b1101: ALUOut = A + B; //jal
            4'b1111: ALUOut = A + B; //jalr
            //default: ALUOut = 0;
        endcase
    end

endmodule
