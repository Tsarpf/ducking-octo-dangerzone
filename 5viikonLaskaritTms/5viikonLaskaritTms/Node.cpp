#include "Node.h"


Node::Node()
{
}

Node::Node(const Node & n)
{
	data = new std::string;
	*data = *n.data;

	next = n.next;
}

Node::~Node()
{
	delete data;
	next = nullptr;
}
Node& Node::operator=(const Node& node)
{
	
}