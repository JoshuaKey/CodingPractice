#pragma once

#include <functional>

#include "Math/Vector.h"
#include "Graph/Node.h"

template<>
struct std::hash<Math::Vector2D>
{
	std::size_t operator()(const Math::Vector2D& v) const
	{
		return std::hash<float>()(v.x)
			| (std::hash<float>()(v.y) << 4);
	}
};

template<>
struct std::hash<Node>
{
	std::size_t operator()(const Node& node) const
	{
		return std::hash<std::string>()(node.GetName())
			^ (std::hash<Point>()(node.GetPosition()) << 1);
	}
};