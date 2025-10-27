#include "Algorithms/Traverse.h"

#include "Profiling/Benchmark.h"

#include "Utility/Hash.h"

#include <stack>
#include <queue>
#include <unordered_map>

void Algorithms::Traversal::BreadthFirstSearch(Node & start, NodeExplore explore)
{
	Benchmark b("Algorithms::Traversal::BreadthFirstSearch()");

	std::unordered_map<NodeRef, bool, std::hash<Node>> explored;
	std::queue<NodeRef> nodes;

	nodes.push(start);
	explored[start] = false;

	while (!nodes.empty())
	{
		Node& node = nodes.front();
		nodes.pop();

		explore(node);
		explored[node] = true;

		for (Link& link : node.GetLinks())
		{
			auto iter = explored.find(link.node);
			if (iter != explored.end())
			{
				continue;
			}

			nodes.push(link.node);
			explored[link.node] = false;
		}
	}
}

void Algorithms::Traversal::DepthFirstSearch(Node & start, NodeExplore explore)
{
	Benchmark b("Algorithms::Traversal::DepthFirstSearch()");

	std::unordered_map<NodeRef, bool, std::hash<Node>> explored;
	std::stack<NodeRef> nodes;

	nodes.push(start);
	explored[start] = false;

	while (!nodes.empty())
	{
		Node& node = nodes.top();
		nodes.pop();

		explore(node);
		explored[node] = true;

		for (Link& link : node.GetLinks())
		{
			auto iter = explored.find(link.node);
			if (iter != explored.end())
			{
				continue;
			}

			nodes.push(link.node);
			explored[link.node] = false;
		}
	}
}
