#pragma once
#include <string>
#include <vector>

// Cracking the Coding Interview, Volume 6
namespace CtCIv6
{
	// Chapter 1 - Arrays and Strings
	namespace Chapter1
	{
		bool IsUnique(std::string const& string);

		bool CheckPermutation(std::string const & string1, std::string const & string2);

		void URLify(char* string, size_t stringLength);

		bool PalindromePermutation(std::string const & string);

		bool OneAway(std::string const & intialString, std::string const & modifiedString);

		std::string StringCompression(std::string const & initialString);

		void RotateMatrix(int* data, int N);

		void ZeroMatrix(int** matrix, int N, int M);

		bool StringRotation(std::string const & intialString, std::string const & rotatedString);
	}

	void TestChapter1();
}