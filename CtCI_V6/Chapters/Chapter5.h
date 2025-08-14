#pragma once

#include <string>
#include <utility>

// Cracking the Coding Interview, Volume 6
namespace CtCIv6
{
	// Chapter 5 - Bit Manipulation
	namespace Chapter5 
	{
		// Insertion
		// You are given two 32 bit numbers, N and M and two bit positions, i and j. 
		// Write a method to insert M into N such that M starts at bit j and ends at bit i. You can assume that the two bits j through i have enough space to fit all of M. 
		// EXAMPLE:
		//	INPUT: N = 10000000000, M = 10011, i = 2, j = 6
		//	OUTPUT:    10001001100
		int InsertBitNumber(int N, int M, int i, int j);

		// Binary to String
		// Given a real number between 0 and 1 (e.g. 0.72) that is passed in as a double, print the binary representation. If the number can not be represented accurately in binary with at most 32 characters, print "ERROR".
		std::string PrintFloatingPointBinary(double number);

		// Flip Bit to Win
		// You have an integer and you can flip exactly one bit from a 0 to a 1. Write code to find the length of the longest sequence of 1s you could create.
		int FlipBitForLongestSequence(int number);

		// Next Number
		// Given a positive integer, print the next smallest and next largest number that have the same number of 1 bits in their binary representation.
		std::pair<int, int> GetNextNumbersWithEqualBits(int number);

		//===================================================================================================================================================
		// Debugger
		// Explain what the following code does:
		//	(n & (n - 1)) == 0
		//===================================================================================================================================================

		// First, n - 1 takes the right-most 'on' bit in the number and flips it to 0, subsequently flipping the bits to the right to 1 or 'on'.
		//	For example, 
		//		5 =				  101
		//		5 - 1 = 4 =		  100
		//		6 =				  110
		//		6 - 1 = 5 =		  101
		//		16 =			10000
		//		16 - 1 = 15 =	01111
		//		18 =			10010
		//		18 - 1 = 17 =	10001
		//		24 =			11000
		//		24 - 1 = 23 =	10111
		//		26 =			11010
		//		26 - 1 = 25 =	11001
		// Then, n & (n - 1), returns only the shared bits between the 2 numbers.
		//	Since the previous process flipped the right most 'on' bit to 0 and bits to the right of it on (not that that matters), the result is
		//	the remaining 'on' bits. In our previous examples...
		//		5 & 4 = 4
		//		6 & 5 = 4
		//		16 & 15 = 0
		//		18 & 17 = 16
		//		24 & 23 = 16
		//		26 & 25 = 24
		// Finally, n & (n - 1) == 0, checks if the result is equal to 0.
		//	This only happens if n is a power of 2, aka, 1, 2, 4, 8, 16, 32, etc.
		//	For example,
		//		4 =				  100
		//		4 - 1 = 3 =		  011
		//		4 & 3 = 0
		//		4 is a power of 2.

		// Conversion
		// Write a function to determine the numbers of bits ouy would need to flip to convert integer A to integer B.
		int GetBitsToConvert(int a, int b);

		//Pairwie Swap
		// Write a program to swap odd and even bits in an integer with as few instructions as possible (e.g. bit 0 and bit 1 are swapped, bit 2 and 3 are swapped, etc.)
		int PairwiseBitSwap(int number);

		// Draw Line
		// A monochrome screen is stored as a single array of bytes, allowing eight consecutive pixels to be stored in one byte. The screen has width w, where w is divisible by 8.
		// The height of the screen, of course, can be derved from the length of the array and the width.
		// Implement a function that draws a horizontal line from (x1, y) to x2, y).
		void DrawLine(int* screen, int width, int height, int x1, int x2, int y);
	}

	void TestChapter5();
}