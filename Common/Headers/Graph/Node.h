#pragma once

#include "Math/Vector.h"
#include "Math/VectorMath.h"

#include <vector>
#include <string>

class Node;
struct Link;

class Node
{

public:
	Node() = default;
	Node(std::string const & name, Point const & position) : 
		m_connections(),
		m_name(name),
		m_position(position) 
	{ 
	};

	Node(Node const& rhs) = default;

	Node& operator=(Node const& rhs);

public:
	void AddLink(Node & node)
	{
		Point distanceVector = this->m_position - node.m_position;
		float distance = Length(distanceVector);

		m_connections.emplace_back(node, distance);
		node.m_connections.emplace_back(*this, distance);
	}

public:
	void SetName(std::string const& name) { m_name = name; }
	void SetPosition(Point const& position) { m_position = position; }

public:
	std::vector<Link>& GetLinks() { return m_connections; }
	std::vector<Link> const & GetLinks() const { return m_connections; }

	std::string const & GetName() const { return m_name; }

	Point GetPosition() const { return m_position; }

public:
	friend bool operator<(Node const& lhs, Node const& rhs)
	{
		return lhs.m_position.x < rhs.m_position.x;
	}
	friend bool operator==(Node const& lhs, Node const& rhs)
	{
		return lhs.m_name == rhs.m_name
			&& lhs.m_position == rhs.m_position;
	}

private:
	std::vector<Link> m_connections;

	std::string m_name = "";
	Point m_position = {0.0f, 0.0f};
};

struct Link
{
	Node & node;
	float weight;
};



