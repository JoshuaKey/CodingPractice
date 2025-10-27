#include "Algorithms/ShortestPath.h"

#include "Profiling/Benchmark.h"

#include "Utility/Hash.h"

#include <stack>
#include <queue>
#include <unordered_map>

namespace
{
	using EvaluationFunction = std::function<float(Node const&, Link const &)>;
	EvaluationFunction DEFAULT_EVALUATION_FUNCTION = [](Node const& node, Link const& link)
		{
			return link.weight;
		};

	struct WeightedNode
	{
		Algorithms::NodeRef node;
		float distance;

		friend bool operator >(WeightedNode const& lhs, WeightedNode const& rhs)
		{
			return lhs.distance > rhs.distance;
		}
	};

	template<typename Container, typename Mapping>
	void AddNodeLinks(Algorithms::NodeRef node, Container& c, Mapping& m, EvaluationFunction evaluate = DEFAULT_EVALUATION_FUNCTION)
	{
		for (Link& link : node.get().GetLinks())
		{
			auto iter = m.find(std::ref(link.node));
			if (iter != m.end())
			{
				continue;
			}

			float evaluation = evaluate(node, link);

			c.emplace(link.node, evaluation);
			m.emplace(std::ref(link.node), node);
		}
	}

	template<typename Mapping>
	void CreatePath(Algorithms::NodeRef node, std::vector<Algorithms::NodeRef>& outPath, Mapping& m, Algorithms::NodeRef stopNode)
	{
		outPath.clear();
		while (node != stopNode)
		{
			outPath.push_back(node);

			auto iter = m.find(node);
			if (iter == m.end())
			{
				return;
			}
			node = iter->second;
		};
		outPath.push_back(stopNode);
	}
}

void Algorithms::ShortestPath::BreadthFirstSearch(NodeRef start, std::vector<NodeRef>& outPath, NodeSearch search)
{
	Benchmark b("Algorithms::ShortestPath::BreadthFirstSearch()");

	std::unordered_map<NodeRef, NodeRef, std::hash<Node>> previousNodes;
	std::queue<WeightedNode> nodes;

	nodes.emplace(start, 0);
	previousNodes.emplace(start, start);

	while (!nodes.empty())
	{
		NodeRef node = nodes.front().node;
		nodes.pop();

		if (search(node))
		{
			CreatePath(node, outPath, previousNodes, start);

			return;
		}

		AddNodeLinks(node, nodes, previousNodes);
	}
}

void Algorithms::ShortestPath::DepthFirstSearch(NodeRef start, std::vector<NodeRef>& outPath, NodeSearch search)
{
	Benchmark b("Algorithms::ShortestPath::DepthFirstSearch()");

	std::unordered_map<NodeRef, NodeRef, std::hash<Node>> previousNodes;
	std::stack<WeightedNode> nodes;

	nodes.emplace(start, 0);
	previousNodes.emplace(start, start);

	while (!nodes.empty())
	{
		NodeRef node = nodes.top().node;
		nodes.pop();

		if (search(node))
		{
			CreatePath(node, outPath, previousNodes, start);

			return;
		}

		AddNodeLinks(node, nodes, previousNodes);
	}
}

void Algorithms::ShortestPath::Dijikstras(NodeRef start, std::vector<NodeRef>& outPath, NodeSearch search)
{
	Benchmark b("Algorithms::ShortestPath::Dijikstras()");

	std::unordered_map<NodeRef, NodeRef, std::hash<Node>> previousNodes;
	std::priority_queue<WeightedNode, std::vector<WeightedNode>, std::greater<WeightedNode>> nodes;

	nodes.emplace(start, 0.0f);
	previousNodes.emplace(start, start);

	while (!nodes.empty())
	{
		NodeRef node = nodes.top().node;
		nodes.pop();

		if (search(node))
		{
			CreatePath(node, outPath, previousNodes, start);

			return;
		}

		AddNodeLinks(node, nodes, previousNodes);
	}
}

void Algorithms::ShortestPath::AStar(NodeRef start, NodeRef target, std::vector<NodeRef>& outPath, NodeSearch search)
{
	Benchmark b("Algorithms::ShortestPath::AStar()");

	std::unordered_map<NodeRef, NodeRef, std::hash<Node>> previousNodes;
	std::priority_queue<WeightedNode, std::vector<WeightedNode>, std::greater<WeightedNode>> nodes;

	nodes.emplace(start, 0.0f);
	previousNodes.emplace(start, start);

	while (!nodes.empty())
	{
		NodeRef node = nodes.top().node;
		nodes.pop();

		if (search(node))
		{
			CreatePath(node, outPath, previousNodes, start);

			return;
		}

		AddNodeLinks(node, nodes, previousNodes, [start, target](Node const & node, Link const & link)
			{
				float g = Length(link.node.GetPosition() - start.get().GetPosition());
				float h = Length(link.node.GetPosition() - target.get().GetPosition());
				return g + h;
			}
		);
	}
}
