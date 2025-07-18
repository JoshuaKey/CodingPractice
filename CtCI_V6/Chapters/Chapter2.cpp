#include "Chapter2.h"

/// <summary>
/// Write an algorithm to remove any duplicated values in an unordered linked list.
/// BONUS: Write the algorithm using O(1) space complexity
/// </summary>
/// <param name="duplicatedList"></param>
void CtCIv6::Chapter2::RemoveDups(std::list<int>& duplicatedList)
{
}

/// <summary>
/// Write an algorithm to return the kth element from the last in a singly linked list.
/// </summary>
/// <param name="list"></param>
/// <param name="k"></param>
void CtCIv6::Chapter2::ReturnKthToTheLast(std::list<int> const & list, int k)
{
}


/// <summary>
/// Write an algorithm to delete a node in the middle of a singly linked list given the middle node.
/// Input: A -> B -> C -> D -> E -middleNode = C]
/// Output: A -> B -> D -> E
/// </summary>
/// <param name="middleNode"></param>
void CtCIv6::Chapter2::DeleteMiddleNode(std::list<int>::iterator& middleNode)
{
}

/// <summary>
/// Write a function to partition a liked list around a value k, such that all nodes less than k appear before all nodes greater than or equal to k.
/// If k is contained within the list, then it can appear anywhere within the right partition.
/// Input: 3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [Partition = 5
/// Output: 3 -> 2 -> 1 -> 10 -> 5 -> 5 -> 8
/// </summary>
/// <param name="unorderedList"></param>
/// <param name="partition"></param>
void CtCIv6::Chapter2::Partition(std::list<int> & unorderedList, int partition)
{
}

/// <summary>
/// You are given two linked lists where each node represents a single digit.
/// The digits are stored in reverse order. such that the 1's digit is the head node.
/// Write a function that adds the two numbers and returns the result as a linked list.
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
std::list<int> CtCIv6::Chapter2::SumLists(std::list<int> const & a, std::list<int> const & b)
{
	return std::list<int>();
}

/// <summary>
/// Implement a function to check if a linked list is a palindrome.
/// </summary>
/// <param name="list"></param>
/// <returns></returns>
bool CtCIv6::Chapter2::Palindrome(std::list<char> const& list)
{
    return false;
}

/// <summary>
/// Given tow (singly) linked lists, determine if the two lists intersect.
/// Return the intersecting node.
/// Note that the intersection is based on Reference, not value.
/// 
/// </summary>
/// <param name="listA"></param>
/// <param name="listB"></param>
/// <returns></returns>
std::list<int>::iterator CtCIv6::Chapter2::Intersection(std::list<int> const& listA, std::list<int> const& listB)
{
	return std::list<int>::iterator();
}

/// <summary>
/// Given a circular linked list, implement an algorithm that returns the first node in circular linked list.
/// Input: A -> B -> C -> D -> E -> C
/// Output: C
/// </summary>
/// <param name="circularList"></param>
/// <returns></returns>
std::list<int>::iterator CtCIv6::Chapter2::LoopDetection(std::list<int> const& circularList)
{
	return std::list<int>::iterator();
}
