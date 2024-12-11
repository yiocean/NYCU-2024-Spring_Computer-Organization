module MuxWR(
    input wire [31:0] newPC,
    input wire [31:0] AluData,
    input wire [31:0] mem,
    input wire [1:0] memtoReg,
    output reg [31:0] outResult
);

    always @(*) begin
        case(memtoReg)
            2'b00: outResult = AluData;
            2'b01: outResult = mem;
            2'b10: outResult = newPC;
            default outResult = newPC;
        endcase
    end

endmodule
