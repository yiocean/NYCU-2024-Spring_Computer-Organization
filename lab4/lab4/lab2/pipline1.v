module pipline1 (
    input clk,
    input rst,
    input p_in,
    output reg p_out
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
