#pragma once

// Cracking the Coding Interview, Volume 6
namespace CtCIv6
{
	// Chapter 3 - Stacks and Queues
	namespace Chapter3
	{
		// Three In One 
		// Describe how you could use a single array to implement three stacks.

		// Stack Min
		// How would you design a stack which, in addition to push() and pop(), has a function min() which returns the minimum element?
		// push(), pop(), and min() should all operate on O(1) time.
		template<typename T>
		class MinStack
		{
		public:
			void push(T const& element)
			{
				// Allocation Stuff...

				m_elements[m_size] = element;
				
				if (m_size == 0 || m_elements[m_size] < m_elements[m_minElements[m_size]];)
				{
					m_minElements[m_size] = m_size; 
				}
				else
				{
					m_minElements[m_size] = m_minElements[m_size - 1];
				}

				m_size++;
			}
			T pop()
			{
				// Allocation Stuff...

				m_size--;
			}
			T min() { return m_elements[m_minElements[m_size - 1]]; }

		private:
			T* m_elements = nullptr;
			int* m_minElements = nullptr;
			int m_size = 0;
			int m_capacity = 0;
		};
		// Keeps track of the minimum element as an index into the stack array. This way, as the stack grows or shrinks, we know which eleemnt is the minimum at that point.

		// Stack of Plates
		// Imagine a (literal) stack of plates. If the stack gets too high, it might topple. 
		// Therefore, in real life, we would likely start a new stack when the previous stack exceeds some threshold. 
		// Implement a data structure SetOfStacks that mimics this. SetOfStacks should be composed of several stacks and should create a new stack once the previous one exceeds capacity.
		// push() and pop() should behave identical to a single stack.
		// FOLLOW UP: Implement a popAt(int index) which performs a pop() operation on the A specific sub-stack.
		
		// Queue via Stacks
		// Implement a MyQueue class wchich implements a queue using two stacks.

		// Sort Stack
		// Write a program to sort a stack such that the smallest items are on top. You can use an additional temporary stack, 
		//  but you may not copy the elements into any other data structure.
		// The stack supports the following operations, push(), pop(), peek(), and isEmpty().

		// Animal Shelter
		// An animal shelter, which holds cats and dogs, operates strictly on a "first in, first out" basis. 
		// People must adopt either the "oldest" (based on arrival times) of all animals, 
		// or they can select wether they would prefer a dog or cat (and will receive the oldest of that type). 
		// They cannot specify which animal they would like. 
		// Create the data structure to maintain this system and implement operations such as enqueue, dequeueAny, dequeueDog, dequeueCat. 
		// You may use the built-in Linked List data structure.
	}

	void TestChapter3();
}