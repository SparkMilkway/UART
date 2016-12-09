`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:43:30 12/08/2016
// Design Name:   Test
// Module Name:   X:/EC551/EC551_Lab3/LastTry/UART/UART/Test_Test.v
// Project Name:  UART
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_Test;

	// Inputs
	reg [7:0] a;

	// Outputs
	wire [7:0] b;

	// Instantiate the Unit Under Test (UUT)
	Test uut (
		.a(a), 
		.b(b)
	);

	initial begin
	#100 $finish;
	end
	initial begin
		// Initialize Inputs
		a = 0;
		#10 a = 8'b10101101;
		#10 a = 8'b10111100;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

