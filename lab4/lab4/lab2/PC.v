module PC (
    input clk,
    input rst,
    input [31:0] pc_i,
    input PCWrite,
    output reg [31:0] pc_o
);

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            pc_o <= 0;
        end else if (PCWrite) begin
            pc_o <= pc_o;
        end else begin
            pc_o <= pc_i;
        end
    end
endmodule
