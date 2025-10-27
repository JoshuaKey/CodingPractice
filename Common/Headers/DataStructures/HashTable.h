#pragma once

namespace DS
{
	template<typename T>
	class HashTable
	{
	};

	template<typename T>
	using Dictionary = HashTable<T>;

	template<typename T>
	using Map = HashTable<T>;
}

// - Key Value Structure -> Container internally uses a Key Value Structure
// - Associative -> Elements are referenced by their key instead of an index
// - Const -> Elements can not be modified once in the container

// - Ordered -> Elements are sorted
// - Unordered -> Elements are unsorted

// - Unique ->  Each element maps to a single specific key
// - Multiple Keys -> Multiple elements may map a single specific key

// - Set -> An element's value is also it's key
// - Map -> Each element has an associated key which maps to the element's value

// List - Doubly Linked List

// Forward List - Singly Linked List

// Set
// - Unique Key Value Structure
// - Associative
// - Ordered (Binary Search Tree)
// - Const
// - Set

// Multi Set
// - Multi Key Value Structure
// - Associative
// - Ordered (Binary Search Tree)
// - Const

// Unordered Set
// - Unique Key Value Structure
// - Associative
// - Unordered (Hash Table)
// - Const

// Unordered Multi Set
// - Multi Key Value Structure
// - Associative
// - Unordered (Hash Table)
// - Const

// Map
// - Unique Key Value Structure
// - Associative
// - Ordered (Binary Search Tree)
// - Const

// Multi Map
// - Multi Key Value Structure
// - Associative
// - Ordered (Binary Search Tree)
// - Const

//template < class Key, class T, class Compare = less<Key>, class Alloc = allocator<pair<const Key,T>>> 
//class multimap;

// Unordered Map
// - Unique Key Value Structure
// - Associative
// - Unordered (Hash Table)
// - Const

//template < class Key, class T, class Hash = hash<Key>, class Pred = equal_to<Key>, class Alloc = allocator< pair<const Key,T> > > 
//class unordered_map;

// Unordered Multi Map
// - Multi Key Value Structure
// - Associative
// - Unordered (Hash Table)
// - Const

//template < class Key, class Value, class Hash = hash<Key>, class Pred = equal_to<Key>, class Alloc = allocator< pair<const Key,Value>> 
// class unordered_multimap;

//Hash Table => Map => Dictionary

/**

Associative - An element in a container is the composition of a 'key' used to access the element, and the 'value' of the element, aka a Key-Value Pair.
Associative Array - An array with Key Value Pairs
Variations of Associative Array:
	- Map
	- Dictionary
	- Hash Table
	- Set???
	- Ordered vs Unordered
	- Unique Association vs Multi Association

Array
	- Static Container
	- O(1) Access
Dynamic Array
	- Dynamic Container
	- O(1) Access
	- O(1) Amoritized Insertion
Stack
	- First In, Last Out
	- Dynamic Array
	- O(1) Amoritized Insertion
	- O(1) Removal
Queue
	- First In, First Out
	- Dynamic Array
	- O(1) Amoritized Insertion
	- O(1) Removal
Dequeue
	- First In, Last Out
	- First In, First Out
	- Dynamic Array
	- O(1) Amoritized Insertion
	- O(1) Removal
String
	- Dynamic Array of Chars
	- String Builder
	- String operations

Singly Linked List
Doubly Linked List
Tree (N-ary Tree)
Graph
	- Unidirectional Graph
	- Bidirectional Graph
	- Subgraphs
	- Cylic Graph
	- Acyclic Graph
	- Adjacency List
	- Adjacency Matrix
 
Set
	- 
Map
Map
	- 

Binary Tree
	- Used in Max Heap
		- Used in Heap Sort
	- Used in Min Heap
		- Used in Heap Sort
	- Used in AVL Tree
	- Used in Red-Black Tree
	- Used in Binary Search Tree
		- Used in Binary Search
Trie (Prefix Tree)
	- Used in String / Prefix lookup

*/