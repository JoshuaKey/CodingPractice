#include "Graph/Node.h"

Node& Node::operator=(Node const& rhs)
{
	m_connections.clear();
	for (Link const& link : rhs.m_connections)
	{
		m_connections.emplace_back(link.node, link.weight);
	}
	m_name = rhs.m_name;
	m_position = rhs.m_position;

	return *this;
}
