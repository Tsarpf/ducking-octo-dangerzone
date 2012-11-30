#pragma once

#ifndef Node_H_
#define Node_H_

#include <string>
struct Node
{
	std::string * data;
	Node * next;
	Node();
	Node(const Node & n);
	~Node();
	Node& operator=(const Node& node);
};


#endif //Node_H_