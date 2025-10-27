#include <iostream>

#include "Math/Vector.h"
#include "Graph/Node.h"

#include "Algorithms/Traverse.h"
#include "Algorithms/Search.h"
#include "Algorithms/ShortestPath.h"

int main()
{
	Node a("A", { 0.0f, 0.0f });
	Node b("B", { 100.0f, 0.0f });
	Node c("C",	{ 0.0f, 100.0f });
	Node d("D", { 100.0f, 100.0f });
	Node e("E", { 0.0f, 200.0f });
	Node f("F", { 100.0f, 200.0f });
	Node g("G", { 50.0f, 300.0f});

	a.AddLink(b);
	a.AddLink(c);
	a.AddLink(d);

	b.AddLink(d);
	c.AddLink(d);

	c.AddLink(e);
	d.AddLink(f);

	e.AddLink(g);
	f.AddLink(g);

	std::cout << "Breadth First Search - Traversing:" << std::endl;
	Algorithms::Traversal::BreadthFirstSearch(a, [](Node const& node)
		{
			std::cout << "\tExploring: " << node.GetName() << std::endl;
		}
	);

	std::cout << "\nDepth First Search - Traversing:" << std::endl;
	Algorithms::Traversal::DepthFirstSearch(a, [](Node const& node)
		{
			std::cout << "\tExploring: " << node.GetName() << std::endl;
		}
	);

	////
	std::cout << "\nBreadth First Search - Searching for G:" << std::endl;
	Node breadthResult;
	Algorithms::Search::BreadthFirstSearch(a, breadthResult, [&g](Node const& node)
		{
			std::cout << "\tSearching: " << node.GetName() << std::endl;
			return node == g;
		}
	);
	std::cout << "Found: " << breadthResult.GetName() << std::endl;

	////
	std::cout << "\nDepth First Search - Searching for G:" << std::endl;
	Node depthResult;
	Algorithms::Search::DepthFirstSearch(a, depthResult, [&g](Node const& node)
		{
			std::cout << "\tSearching: " << node.GetName() << std::endl;
			return node == g;
		}
	);
	std::cout << "Found: " << depthResult.GetName() << std::endl;

	////
	std::cout << "\nBreadth First Search - Finding Path to G:" << std::endl;
	std::vector<Algorithms::NodeRef> breadthPath;
	Algorithms::ShortestPath::BreadthFirstSearch(a, breadthPath, [&g](Node const& node)
		{
			std::cout << "\tSearching: " << node.GetName() << std::endl;
			return node == g;
		}
	);
	std::cout << "Found Path: " << std::endl;
	for (auto rIter = breadthPath.crbegin(); rIter != breadthPath.crend(); ++rIter)
	{
		std::cout << "\t" << rIter->get().GetName() << std::endl;
	}

	////
	std::cout << "\nDepth First Search - Finding Path to G:" << std::endl;
	std::vector<Algorithms::NodeRef> depthPath;
	Algorithms::ShortestPath::DepthFirstSearch(a, depthPath, [&g](Node const& node)
		{
			std::cout << "\tSearching: " << node.GetName() << std::endl;
			return node == g;
		}
	);
	std::cout << "Found Path: " << std::endl;
	for (auto rIter = depthPath.crbegin(); rIter != depthPath.crend(); ++rIter)
	{
		std::cout << "\t" << rIter->get().GetName() << std::endl;
	}

	////
	std::cout << "\nDijkstra's Algorithm - Finding Path to G:" << std::endl;
	std::vector<Algorithms::NodeRef> dijkstrasPath;
	Algorithms::ShortestPath::Dijikstras(a, dijkstrasPath, [&g](Node const& node)
		{
			std::cout << "\tSearching: " << node.GetName() << std::endl;
			return node == g;
		}
	);
	std::cout << "Found Path: " << std::endl;
	for (auto rIter = dijkstrasPath.crbegin(); rIter != dijkstrasPath.crend(); ++rIter)
	{
		std::cout << "\t" << rIter->get().GetName() << std::endl;
	}

	////
	std::cout << "\nA* - Finding Path to G:" << std::endl;
	std::vector<Algorithms::NodeRef> aStarPath;
	Algorithms::ShortestPath::AStar(a, g, aStarPath, [&g](Node const& node)
		{
			std::cout << "\tSearching: " << node.GetName() << std::endl;
			return node == g;
		}
	);
	std::cout << "Found Path: " << std::endl;
	for (auto rIter = aStarPath.crbegin(); rIter != aStarPath.crend(); ++rIter)
	{
		std::cout << "\t" << rIter->get().GetName() << std::endl;
	}
	

	int x;
	std::cin >> x;

	return 0 ;
}