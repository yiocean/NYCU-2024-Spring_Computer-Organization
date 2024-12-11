module MuxPC(
    input wire [31:0] nextPC,
    input wire [31:0] aluResult,
    input wire PCSel,
    output reg [31:0] out
);

    always @(nextPC, aluResult, PCSel) begin
        case (PCSel)
            1'b0: out = nextPC;
            1'b1: out = aluResult;
            default: out = nextPC;
        endcase
    end

endmodule
