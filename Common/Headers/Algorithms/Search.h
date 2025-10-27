#pragma once

#include "Graph/Node.h"
#include <functional>

namespace Algorithms
{
	using NodeSearch = std::function<bool(Node const &)>;

	using NodeRef = std::reference_wrapper<Node>;

	/// <summary>
	/// Search for a specific Node beginning at the Start Node
	/// </summary>
	namespace Search
	{
		void BreadthFirstSearch(Node& start, Node& outTarget, NodeSearch search);
		void DepthFirstSearch(Node& start, Node& outTarget, NodeSearch search);

		void BinarySearch();
	}
}