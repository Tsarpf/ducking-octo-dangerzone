#include "Slist.h"
#include "Node.h"
#include <string>
 
SList::SList()
{
	top = new Node;	
	top->data = nullptr; 
	top->next = nullptr;
}

std::string SList::front()
{
	return *(top->data);
}

SList::~SList(void)
{
	Node * nodeptr = top;
	while(nodeptr!=nullptr)
	{
		top = top->next;
		delete nodeptr;
		nodeptr = top;
	}
}


void SList::pop_front()
{
	Node * temp = top;
	top = top->next;
	delete temp;
}

void SList::push_front(std::string str)
{
	std::string newString = str;

	if(top->data==nullptr)
	{
		top->data = & newString;
	}
	else
	{
		Node * newTop = new Node;
		newTop->data = & newString;
		newTop->next = top;
		top = newTop;
		delete newTop;
	}
}