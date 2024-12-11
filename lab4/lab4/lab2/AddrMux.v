module AddrMux (
    input wire [31:0] pc,
    input wire [31:0] rs1,
    input wire [6:0] opcode,
    input wire [2:0] funct3,
    output reg [31:0] addr
);

    always @(*) begin
        if (opcode == 7'b1100111 && funct3 == 3'b000) begin
            addr = rs1;
        end else begin
            addr = pc;
        end
    end

endmodule
