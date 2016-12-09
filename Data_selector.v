`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:16:23 12/08/2016 
// Design Name: 
// Module Name:    Data_selector 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Data_selector(
	input clk,
	input rst,
	input data_collect_finish,
	input [7:0] data_in,
	output reg [7:0] data_out,
	output reg [13:0] read_select,
	output reg [13:0] write_out_se,
	output reg data_process_finish,
	output reg wr_enable
    );
	 
	 reg [6:0] row, column; //row and column selection
	 reg [13:0] scanpixel; //the central pixel address
	 reg [7:0] MEM [0:8];
	 reg [3:0] mem_select;
	 reg [8:0] temp_out;
	 integer i = 0;
	 parameter w1 = 1, w2 = 2, w3 = 1, w4 = 2, w5 = 4, w6 = 2, w7 = 1, w8 = 2, w9 = 1; //Gaussian blur
	 
	 initial begin
	 row <= 7'd0;
	 column <= 7'd0;
	 scanpixel = 0;
	 mem_select <= 0;
	 write_out_se = scanpixel;
	 wr_enable = 0;
	 for (i = 0;i<9; i = i+1) MEM[i] = 0; // a memory to store 9 data(3x3)
	 end
	 
	 always @(posedge clk or posedge rst) begin
		if(rst) begin
			row <= 7'd0;
			column <= 7'd0;
			read_select = 0;
			mem_select <= 0;
			write_out_se = 0;
			wr_enable = 0;
		end
		else begin
			
			if (data_collect_finish) begin
				
				scanpixel = row*100 + column;
				if (row == 0 || row == 99 || column == 0 || column == 99) begin // If encounter the edge
					wr_enable = 1;
					write_out_se = scanpixel;
					data_out = data_in;
					if (column == 99) begin
						row <= row + 1;
						column <= 0;
					end
					else column <= column+1;
				end
				else if (column < 99 && row < 99) begin //do some efficient stuff on reading the memory data
					if (column > 1) begin
						MEM[0] = MEM[1];
						MEM[3] = MEM[4];
						MEM[6] = MEM[7];
						MEM[1] = MEM[2];
						MEM[4] = MEM[5];
						MEM[7] = MEM[8];
						case (mem_select) 
							2: begin
								wr_enable = 0;
								read_select = scanpixel - 99;
								MEM[mem_select] = data_in;
								mem_select <= 5;
								end
							5: begin
								read_select = scanpixel - 99;
								MEM[mem_select] = data_in;
								mem_select <= 8;
								end
							8: begin
								wr_enable = 1;
								read_select = scanpixel - 99;
								MEM[mem_select] = data_in;
								temp_out = (MEM[0] * w1 + MEM[1] * w2 + MEM[2] * w3 + MEM[3] * w4 + MEM[4] * w5 + MEM[5] * w6 + MEM[6] * w7 + MEM[7] * w8 + MEM[8] * w9);
								data_out = temp_out / 16;
								write_out_se = scanpixel;
								column <= column + 1;
								mem_select <= 2;
								end
								
							default: begin
								wr_enable = 0;
								mem_select <= 2;
								end
						endcase
					end
					else begin  										//Only need to retrieve 9 data from the mem when column = 1, otherwise just 
						case (mem_select) 							//shift the data in every row of the local mem from right to left by 1
							0: begin
								wr_enable = 0;
								read_select = scanpixel - 101; //left up
								MEM[mem_select] = data_in;
								mem_select <= 1;
								end
								
							1: begin
								read_select = scanpixel - 100;
								MEM[mem_select] = data_in;
								mem_select <= 2;
								end
							2: begin
								read_select = scanpixel - 99; //right up
								MEM[mem_select] = data_in;
								mem_select <= 3;
								end
							3: begin
								read_select = scanpixel - 1;
								MEM[mem_select] = data_in;
								mem_select <= 4;
								end
							4: begin
								read_select = scanpixel;
								MEM[mem_select] = data_in;
								mem_select <= 5;
								end
							5: begin
								read_select = scanpixel + 1;
								MEM[mem_select] = data_in;
								mem_select <= 6;
								end
							6: begin
								read_select = scanpixel + 99;
								MEM[mem_select] = data_in;
								mem_select <= 7;
								end
							7: begin
								read_select = scanpixel + 100;
								MEM[mem_select] = data_in;
								mem_select <= 8;
								end
							8: begin
								wr_enable = 1;
								read_select = scanpixel + 101;
								MEM[mem_select] = data_in;
								temp_out = (MEM[0] * w1 + MEM[1] * w2 + MEM[2] * w3 + MEM[3] * w4 + MEM[4] * w5 + MEM[5] * w6 + MEM[6] * w7 + MEM[7] * w8 + MEM[8] * w9);
								data_out = temp_out / 16;
								write_out_se = scanpixel;
								column <= column + 1;
								mem_select <= 0;
								end
							default: begin
								wr_enable = 0;
								mem_select <= 0;
								end
						endcase
					end
				end
				else if (column == 100 && row < 100) begin
					row <= row + 1;
					column <= 1;
				end
				else if (row == 100) begin
					row <= 0;
					column <= 0;
					read_select = 0;
					mem_select <= 0;
					wr_enable = 0;
					data_process_finish <= 1;
				end
			end
		end
		
	 end


endmodule
