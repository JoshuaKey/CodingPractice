#pragma once

#include "Graph/Node.h"

#include <functional>
#include <vector>

namespace Algorithms
{
	using NodeSearch = std::function<bool(Node const &)>;

	using NodeRef = std::reference_wrapper<Node>;

	/// <summary>
	/// Find the Shortest Path to a Target Node beginning at the Start Node
	/// </summary>
	namespace ShortestPath
	{
		void BreadthFirstSearch(NodeRef start, std::vector<NodeRef> & outPath, NodeSearch search);
		void DepthFirstSearch(NodeRef start, std::vector<NodeRef>& outPath, NodeSearch search);

		void Dijikstras(NodeRef start, std::vector<NodeRef>& outPath, NodeSearch search);
		void AStar(NodeRef start, NodeRef target, std::vector<NodeRef>& outPath, NodeSearch search);
	}
}