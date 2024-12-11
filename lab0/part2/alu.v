module alu(
    input [3:0] a,
    input [3:0] b,
    input [2:0] s,
    output reg [3:0] y
); 
    // alu has two input operand a and b.
    // It executes different operation over input a and b based on input s
    // then generate result to output y
    
    // TODO: implement your 4bits ALU design here and using your own fulladder module in this module
    // For testbench verifying, do not modify input and output pin
    always @(*) begin
        case(s)
            3'b000: y = a + b; // Addition
            3'b001: y = a - b; // Subtraction
            3'b010: y = a & b; // AND operation
            3'b011: y = a | b; // OR operation
            3'b100: y = a ^ b; // XOR operation
            default: y = 4'b0000; // Default case
        endcase
    end
    
endmodule

