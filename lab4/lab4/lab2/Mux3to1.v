module Mux3to1(
    input wire [31:0] s0,
    input wire [31:0] s1,
    input wire [31:0] s2,
    input wire [1:0] sel,
    output reg [31:0] out
);

    always @(*) begin
        case(sel)
            2'b00: out = s0;
            2'b01: out = s1;
            2'b10: out = s2;
            default out = s2;
        endcase
    end

endmodule
