#pragma once

#include <vector>
#include <list>
#include <string>

// Cracking the Coding Interview, Volume 6
namespace CtCIv6
{
	// Chapter 4 - Trees and Graphs
	namespace Chapter4
	{
		// Route Between Nodes
		// Given a directed graph, design an algorithm to find out wether there is a route between two nodes.
		bool IsRoute(Graph g, Node n, Node m);

		// Minimal Tree
		// Given a sorted (increasing order) array with unique integer elements, write and algorithm to create a binary search tree with minimal height.
		BinaryTree CreateBST(std::vector<int>);
		 
		// List Of Depths
		// Given a binary tree, design an algorithm which creates a linked list of all the nodes at each depth.
		// A Tree of depth D will create D Linked Lists.
		std::vector<std::list<int>> GetListOfDepths(BinaryTree tree);

		// Check Balanced
		// Implement a function to check if a binary tree is balanced. 
		// For the purposes of this question, a balanced tree is defined to a bew a tree such that the heights of two subtrees never differ by more than one.
		bool IsBalanced(BinaryTree tree);

		// Validate BST
		// Implement a funciton to determine if a binary tree is a binary search tree.
		bool IsBST(BinaryTree tree);

		// Successor
		// Write an algorithm to find the "next" node (i.e. in-order successor)  of a given node in a binary search tree. You may assume that each node has a link to its parent.
		Node GetNextNode(Node n);

		// Build Order
		// You are given a list of projects and a list of dependencies (which is a list of pairs, where the second project is dependent on the first project). 
		// All of a project's dependencies must be built before the project is. Find a build order that will allow all projects to be built.
		// If there is not valid build order, return an error.
		std::vector<std::string> GetBuildOrder(std::vector<std::string> projects, std::vector<std::pair<std::string, std::string>> dependencies);

		// First Common Ancestry
		// Design an algorithm and write code to find the first common ancestor of two nodes in a binary tree. Avoid storing additional nodes in a data stucture.
		// NOTE: This is not neccesarily a binary search tree.
		Node FindFirstCommonAncestor(Node n, Node m);

		// BST Sequences
		// A Binary search tree was created by traversing through an array from left to right and inserting each eleemnt. 
		// Given a binary search tree with distinct elements, print all possible arrays that could have led to this tree.
		std::vector<std::vector<int>> GetBSTSequences(BinaryTree tree);

		// Check Subtree
		// T1 and T2 are two very large binary trees, with T1 much larger than T2. Create an algorithm to determine if T2 is a subtree of T1.
		bool IsSubtree(BinaryTree t1, BinaryTree t2);

		// Random Node
		// You are implementing a binary tree class from scratch which has methods to insert(), find() delete(), and getRandomNode() which returns a random node from the tree. 
		// All nodes whould be equally likely to be chosen. Design aand implement an algorithm for getRandomNode() and explain how you would implement the rest of the methods.
		 
		// EITHER, Have the Binary Tree use an Array as the underlying structure, then get a value in the array using a PRNG
		// OR, PRNG, Odd is Left, Even is right, deivide by 2 each time?

		// Paths with Sum
		//You are given a binary tree in which each node contains an integer value (which might be positive or negative). 
		// Design an algorithm to count the number of paths that sum to a given value. 
		// The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).
		int FindPathsWithSum(BinaryTree tree, int sum);
	}

	void TestChapter4();
}