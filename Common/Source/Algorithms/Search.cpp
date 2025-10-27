#include "Algorithms/Search.h"

#include "Profiling/Benchmark.h"

#include "Utility/Hash.h"

#include <stack>
#include <queue>
#include <unordered_map>

void Algorithms::Search::BreadthFirstSearch(Node& start, Node& outTarget, NodeSearch search)
{
	Benchmark b("Algorithms::Search::BreadthFirstSearch()");

	std::unordered_map<NodeRef, bool, std::hash<Node>> explored;
	std::queue<NodeRef> nodes;

	nodes.push(start);
	explored[start] = false;

	while (!nodes.empty())
	{
		Node& node = nodes.front();
		nodes.pop();

		if (search(node))
		{
			outTarget = node;
			return;
		}
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

void Algorithms::Search::DepthFirstSearch(Node& start, Node& outTarget, NodeSearch search)
{
	Benchmark b("Algorithms::Search::DepthFirstSearch()");

	std::unordered_map<NodeRef, bool, std::hash<Node>> explored;
	std::stack<NodeRef> nodes;

	nodes.push(start);
	explored[start] = false;

	while (!nodes.empty())
	{
		Node& node = nodes.top();
		nodes.pop();

		if (search(node))
		{
			outTarget = node;
			return;
		}
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
