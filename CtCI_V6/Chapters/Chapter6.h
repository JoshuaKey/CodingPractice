#pragma once

// Cracking the Coding Interview, Volume 6
namespace CtCIv6
{
	// Chapter 6 - Math and Logic
	namespace Chapter6
	{
		//===================================================================================================================================================
		// 6.2 Basketball
		// You have a basketball and someone says that you can play one of two games.
		// 1.) You get one shot to make the hoop
		// 2.) You get three shots and you have to make two of the three shots.
		// If P is the probability of making a particular shot, for which values of P should you pick one game or the other?
		//===================================================================================================================================================

		// Assuming:
		// P = Chance of making a shot
		// P' = 1 - P = Chance of missing a shot
		// Then:
		// 1.) You have P chance of winning
		// 2.) Game has 8 possible states (0 = Make the Shot, X = Miss)
		//		000, 00X, 0X0, X00, 0XX, X0X, XX0, XXX
		//	With 4 distinct states.
		//		000, 00X, 0XX, XXX
		//	000 = P * P * P
		//	00X = P * P * P'
		//	0XX = P * P' * P'
		//	XXX = P' * P' * P'
		//	The player wins if they get a state of 000 or 00X
		//	000 occurs onces.
		//	00X occurs 3 times.
		//	Therefore, the cance of winning is:
		//		(P * P * P) * 1 + (P * P * P') * 3
		// Graphing both of these, we see:
		//	Game 1 has a higher chance of winning with P < 50%
		//	Game 2 has a higher chance of winning with P > 50%

		//===================================================================================================================================================
		// 6.3 Domnios
		// There is an 8x8 Chessboard in which two diagonally opposite corners have been cut off. You are given 31 dominos and a single domino can cover exactly two adjacent squares. 
		// Can you use the 31 dominos to cover the entire board? Prove your answer (by providing an example or showing why it's impossible.)
		//===================================================================================================================================================

		// N / A

		//===================================================================================================================================================
		// 6.4 Ants on a Triangle
		// There are three ants on different vertices of a triangle. 
		// What is the probability of collision if they start walking on the sides of the triangle? 
		// Assume that each any randomly picks a direction, with either direction being equally likely to be chosen and that they walk at the same speed.
		// BONUS: Find the probability of collision for N ants on an N-vertex polygon.
		//===================================================================================================================================================

		// The first ant may choose any direction it wants.
		// The second ant must choose the oppsite "side", aka, moving in the same direction as the first ant. There is 50% chance of this happening.
		// The third ant must make the same decision, which again is 50%.
		// 50% * 50% = 25%
		// N vertex -> (1/2) ^ (N - 1)

		//===================================================================================================================================================
		// 6.7 The Apocalypse
		// In the new post-apocalyptic world, the world queen is desperately concerned about the birth rate. 
		// Therefore, she decress that all families should ensure that they have one girl else they face massive fines. 
		// If all families abide by this policy, that is, they have to continue to have children until they have one girl,
		//	at which point they immediately stop, what will the gender ratio of the new generation be? 
		// Assume the odds of someone having a boy or girl on any given pregnancy is equal.
		// Solve this out logically, then write a computer simulation of it.
		//===================================================================================================================================================

		// N / A

		//===================================================================================================================================================
		// 6.8 The Egg Drop Problem
		// There is a building of 100 floors. If an egg drops from the Nth floor or above, it will break. If it's dropped from any floor below, it will not break. 
		// You're given two eggs. 
		// Find the EXACT Nth floor whil minimizing the number of drops for the worst case. You may reuse an egg if it doesn't break.
		//===================================================================================================================================================

		// Because we only have 2 eggs to test with and an egg breaks past the Nth floor, we need to start from the bottom and go up. 
		// If an egg breaks, we must use the remaining egg to individually check each floor between the previous check and the current check.
		//	For example, if we know Floor 25 is ok and our egg cracked on Floor 50, we now have to test Floor 26, Floor 27, Floor 28, etc. until we reach the Nth floor.
		// This requires us to minimize the distance between jumps, while minizing how many jumps we have in the first place.

		// The smallest example would be to check ever other Floor, starting at Floor 2. Aka Floor 2, Floor 4, Floor 6, etc. up to Floor 100.
		// If the egg breaks, we use the remaining egg to check the previous floor. Aka Floor 1, Floor 3, Floor 5, etc.
		// Worst Case Scenario, we'd have to test the egg 50+1 times if it's on Floor 99 or Floor 100. Aka 100 / N + N-1, where N is the Gap size.
		// Plotting this equation out, we can actually see that the lowest point is a gap of 10, which gives us checks worst case scenario.

		// In fact, if we increase the number of floors, we see that the smallest amount of checks will always be Floor^(1/2), or the logarithmic base which gives a result of 2.
		//	For example, a building with 284 floors would have an optimal jump of 17 floors (technically 16.8).

		//===================================================================================================================================================
		// 6.9 100 lockers
		// There are 100 closed lockers in a hallway. A man begins by opening all 100 lockers. 
		// Next he closes every second locker (2, 4, 6, etc.). Then on his thirst pass, he "toggles" every third locker (opens them if closed, closes them if opened). 
		// This process continues for 100 passes such that each ith pass, the man "toggles" each ith locker. After the 100th pass, how mny lockers are open?
		//===================================================================================================================================================

		// We can observe that this process is identical to factorization, i.e. a locker is "toggled" for each factor it has.
		//	Therefore, a locker will be open if the amount of factors it has is odd.
		// Luckily, this isn't difficult, as factors come in pairs of 2 UNLESS the factor is a root of the number.
		// Therefore, the only lockers that will be open are squares from 1 to 100, aka, 1, 4, 9, 16, 25, 36, 49, 64, 81 and 100, aka 10 lockers in total.

		//===================================================================================================================================================
		// 6.10
		// You have 1000 bottles of soda and exatly one is poisoned. You have 10 test strips which can be used to detect poison. 
		// A single drop of poison will turn the test strip psitive permanently.
		// You can put any number of of dropsone a test strip at once and you can reuse a test strip as many times as you'd like (as long as the results are negative). 
		//	However you can only run tests once per day and it takes seven days to return a result. How would you figure out the poisoned bottle in as few days as possible?
		// BONUS: Write code to simulate your approach.
		//===================================================================================================================================================

		// N / A
	}

	void TestChapter6();
}