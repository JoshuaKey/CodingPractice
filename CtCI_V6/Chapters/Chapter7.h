#pragma once

// Cracking the Coding Interview, Volume 6
namespace CtCIv6
{
	// Chapter 7 - Object Oriented Design
	namespace Chapter7
	{
		// 7.1 Deck of Cards
		// Desing the data structures fpr a generic deck of cards. Explain how you would subclass the data strcutres to implement blackjack.

		// 7.2 Call Center
		// Imagine you have a call center with three levels of employees: respondent, manager and director. 
		// An incoming telephone call must be first allocated to a respondent whoc is free. If the respondent can't handle  the call, they must escalate the call to a manager. 
		// If the manager is not free or not able to handle it, then the call should be escalated to a director. 
		// Design the classes and data structures for this problem. Implement a method dispatchCall() which assigns a call to the first available employee.

		// 7.3 Jukebox
		// Design a musical jukebox using object oreiented principles.

		// 7.4 Parking Lot
		// Design a parking lot using object oriented principles.

		// 7.5 Online Book Reader
		// Design the data structure for an online book reader system.

		// 7.6 Jigsaw
		// Implement an NxN jigsaw puzzle. Design the data structures and create an algorithm to solve the puzle. 
		// You can assume that you have a fitsWith method which, when passwed two puzzle edges, returns true if the two edges belongs together.

		// 7.7 Chat Server
		// Explain how you would design a chat server, in particular, provide details about the various backend components, classes, and methods. 
		// What would be the hardest problems to solve?

		// 7.8 Othello
		// Othello is played as follows: Each Othello piece is white on one side and black on the other. 
		// When a piece is surrounded by its ooopenents on both the left and right sides or both the top and bottom sides, it is said to be captured and its color is flipped. 
		// On your turn, you must capture at least one of your opponent's pieces. The game ends when either user has no more valid moves. 
		// The win is assigned to the person with the  most pieces. 
		// Implement the object oriented design for Othello.

		// 7.9 Circular Array
		// Implement a CircularArray calss that supports an array-like data strcuture which should be efficiently rotated. 
		// If possible, the class should use a generic type (also called a template) and whould support iteration via the standard for (Obj o : circularArray) notation.

		// 7.10 Minesweeper
		// Design and implement a text based Minesweeper game. 
		// Minesweeper is the classic single player computer game where an NxM grid has B bombs hidden across the grid. 
		// The remaining cells are either blank or have a number behind them. The number reflects the number of bombs in adjacent cells. 
		// The user plays by selecting a cell. 
		// If it is a bomb, the player loses.
		// If it is a number, the number is exposed. 
		// If it is blank, it is exposed and the surrounding cells are exposed as well. This occurs recursively until a cell with a number is exposed. 
		// The player wins when all non-bomb cells are exposed. 
		// The player can also flag certain cells as potential bombs. This doesn't impact the gameplay, but prevents the player from accidently selecting a cell.

		// 7.11 File System
		// Explain the data structures and algorithms that you would use to design and in-memory file system. Illustrate with an example in code where possible.

		// 7.12 Hash Table
		// Design and implement a Hash Table which uses chaining (linked lists) to handle collisions.
	}

	void TestChapter7();
}