module IF_ID_reg (
    input clk, rst, flush, hazard,
    input [31:0] inst_i, pc_i, next_pc_i,
    output reg [31:0] inst_o, pc_o, next_pc_o
);

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            inst_o <= 0;
            pc_o <= 0;
            next_pc_o <= 0;
        end else begin
            if (hazard) begin // load-use hazard, stall
                inst_o <= inst_o;
                pc_o <= pc_o;
                next_pc_o <= next_pc_o;
            end 
            else if (flush) begin // branch hazard, flush
                inst_o <= 0;
                pc_o <= 0;
                next_pc_o <= 0;
            end
            else begin
                inst_o <= inst_i;
                pc_o <= pc_i;
                next_pc_o <= next_pc_i;
            end
        end
    end
    
endmodule


module IF_ID_register (
    input clk,
    input rst,
    input IF_ID_Write,
    input flush,
    input [31:0] inst_i,
    input [31:0] pc_i,
    input [31:0] pc_plus4_i,
    output reg [31:0] instr_o,
    output reg [31:0] pc_o,
    output reg [31:0] pc_plus4_o
);

    always @(posedge clk or posedge rst) begin
        if (!rst) begin
            instr_o <= 32'b0;
            pc_o <= 32'b0;
            pc_plus4_o <= 32'b0;
        end else if (flush) begin
            instr_o <= 32'b0;
            pc_o <= 32'b0;
            pc_plus4_o <= 32'b0;
        end else if (IF_ID_Write) begin
            instr_o <= instr_o;
            pc_o <= pc_o;
            pc_plus4_o <= pc_plus4_o;
        end
        else begin
            instr_o <= inst_i;
            pc_o <= pc_i;
            pc_plus4_o <= pc_plus4_i;
        end
    end

endmodule
