#include "Chapter1.h"

// Implement an algorithm to deterrmine if a string has all unique characters. 
// What if you cannot use additional data structures?
bool CtCIv6::Chapter1::IsUnique(std::string const& string)
{
	//Brute Force

	return false;
}

// Given two strings, write an algorithm to determine if one is a permutation of the other.
bool CtCIv6::Chapter1::CheckPermutation(std::string const& string1, std::string const& string2)
{
	// Brute Force

	return false;
}


// Write a method to replace all spaces in a string with '%20'. 
// You may assume the string has sufficient space at the end to hold the additional characters, and that you are given the 'true' length of the string.
// Input: "Mr John Smith"
// Output: "Mr%20John%20Smith"
void CtCIv6::Chapter1::URLify(char* string, size_t stringLength)
{
}

// Given a string, write a function to check if it is a permutation of a palindrome.
// A palindrome is a word or phrase that is the same forwards and backwards.
// A permutation is a rearrangement of letters.
// The palindrom does not need to be limited to just dictionary words.
bool CtCIv6::Chapter1::PalindromePermutation(std::string const& string)
{
	return false;
}

// There are three types of 'edits' that can be performed on a string;
//		inserting a character
//		removing a character
//		replacing a character
// Write an aglorithm to check if two strings are one or zero edits away.
bool CtCIv6::Chapter1::OneAway(std::string const& intialString, std::string const& modifiedString)
{
	return false;
}

// Implement a method to perform basic string compression using the counts of repeated chaarcters.
// For example, the string "aabcccccaaa" would become "a2b1c5a3".
// If the 'compressed' string would not become smaller than the original string then you should return the orignal string.
// You can assume the string only contains alphabetic characters
std::string CtCIv6::Chapter1::StringCompression(std::string const& initialString)
{
	return std::string();
}

// Given an image represented by an NxN matrix, where each pixel is the image in 4 bytes, write a method to rotate the image by 90 degress
void CtCIv6::Chapter1::RotateMatrix(int* data, int N)
{
}

// Write an algorithm such that, if an element in an NxM matrix is 0, it's row and column are set to 0.
void CtCIv6::Chapter1::ZeroMatrix(int** matrix, int N, int M)
{
}

// Assume you have a method, "isString()" which checks if one word is a substring of another.
// Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to "isString()".
// For example, "waterbottle" is a rotation of "erbottlewat"
bool CtCIv6::Chapter1::StringRotation(std::string const& intialString, std::string const& rotatedString)
{
	return false;
}
