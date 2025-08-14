#pragma once

#include <list>

// Cracking the Coding Interview, Volume 6
namespace CtCIv6
{
	// Chapter 2 - Linked Lists
	namespace Chapter2
	{
		// Write an algorithm to remove any duplicated values in an unordered linked list.
		// BONUS: Write the algorithm using O(1) space complexity
		void RemoveDups(std::list<int> & duplicatedList);

		// Write an algorithm to return the kth element from the last in a singly linked list.
		void ReturnKthToTheLast(std::list<int> const & list, int k);

		// Write an algorithm to delete a node in the middle of a singly linked list given the middle node.
		void DeleteMiddleNode(std::list<int>::iterator & middleNode);

		// Write a function to partition a liked list around a value k, such that all nodes less than k appear before all nodes greater than or equal to k.
		// If k is contained within the list, then it can appear anywhere within the right partition.
		// Input: 3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [Partition = 5
		// Output: 3 -> 2 -> 1 -> 10 -> 5 -> 5 -> 8
		void Partition(std::list<int> & unorderedList, int partition);

		// You are given two linked lists where each node represents a single digit.
		// The digits are stored in reverse order. such that the 1's digit is the head node.
		// Write a function that adds the two numbers and returns the result as a linked list.
		std::list<int> SumLists(std::list<int> const & a, std::list<int> const & b);

		// Implement a function to check if a linked list is a palindrome.
		bool Palindrome(std::list<char> const& list);

		// Given tow (singly) linked lists, determine if the two lists intersect.
		// Return the intersecting node.
		// Note that the intersection is based on Reference, not value.
		std::list<int>::iterator Intersection(std::list<int> const & listA, std::list<int> const& listB);

		// Given a circular linked list, implement an algorithm that returns the first node in circular linked list.
		// Input: A -> B -> C -> D -> E -> C
		// Output: C
		std::list<int>::iterator LoopDetection(std::list<int> const & circularList);
	}

	void TestChapter2();
}