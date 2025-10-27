#pragma once

#include "Graph/Node.h"
#include <functional>

namespace Algorithms
{
	using NodeExplore = std::function<void(Node const &)>;

	using NodeRef = std::reference_wrapper<Node>;

	/// <summary>
	/// Explore all connected Nodes beginning at the Start Node
	/// </summary>
	namespace Traversal
	{
		void BreadthFirstSearch(Node& start, NodeExplore explore);
		void DepthFirstSearch(Node& start, NodeExplore explore);

		void Floodfill();
	}
}