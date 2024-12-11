module pipline32 #(
    parameter size = 32
) 
(
    input clk,
    input rst,
    input [size-1:0] p_in,
    output reg [size-1:0] p_out
);
    always @(posedge clk) begin
        if (!rst) begin
            p_out <= 0;
        end
        else begin
            p_out <= p_in;
        end
    end
endmodule
