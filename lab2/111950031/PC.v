module PC (
    input clk,
    input rst,
    input [31:0] pc_i,
    output reg [31:0] pc_o
);

    // TODO: implement your program counter here
    always @(posedge clk or negedge rst) begin //not posedge rst
        if (!rst) begin
            pc_o <= 0;
        end else begin
            pc_o <= pc_i;
        end
        // case(rst)
        //     1'b1: pc_o <= 0;
        //     1'b0: pc_o <= pc_i + 4; 
        // endcase
    end
endmodule

