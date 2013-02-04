#include "Node.h"

/*
struct Node
{
	std::string * data;
	Node * next;
	Node(std::string);
	Node(const Node & n);
	~Node();
	Node& operator=(const Node& node);
};
*/

Node::Node()
{

}

Node::Node(std::string str, Node * node)
{
	data = new std::string(str);
	next = node;
}

Node::Node(const Node & n)
{
	data = new std::string(*n.data);

	next = n.next;
}

Node::~Node() 
{
	delete data;
	next = nullptr;
}
Node& Node::operator=(const Node& node) 
{
	if(this == &node)
		return *this;

	*data = *node.data;

	next = node.next;
	
	return *this;
}