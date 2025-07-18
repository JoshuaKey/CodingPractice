#pragma once

#include <list>

// Cracking the Coding Interview, Volume 6
namespace CtCIv6
{
	// Chapter 2 - Linked Lists
	namespace Chapter2
	{
		void RemoveDups(std::list<int> & duplicatedList);

		void ReturnKthToTheLast(std::list<int> const & list, int k);

		void DeleteMiddleNode(std::list<int>::iterator & middleNode);

		void Partition(std::list<int> & unorderedList, int partition);

		std::list<int> SumLists(std::list<int> const & a, std::list<int> const & b);

		bool Palindrome(std::list<char> const& list);

		std::list<int>::iterator Intersection(std::list<int> const & listA, std::list<int> const& listB);

		std::list<int>::iterator LoopDetection(std::list<int> const & circularList);
	}

	void TestChapter2();
}