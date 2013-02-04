#include "Slist.h"
#include "Node.h"
#include <string>
 
SList::SList()
{
	top = new Node;	
	top->data = nullptr; 
	top->next = nullptr;
}

std::string& SList::front()
{
	if(top->data == nullptr)
		throw std::exception("I be broken");
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
	if(top->data == nullptr)
		return;
	Node * temp = top;
	top = top->next;
	delete temp;
}

void SList::push_front(const std::string & str)
{
	Node * newTop = new Node;
	newTop->data = new std::string(str); 
	newTop->next = top;
	top = newTop;
	newTop == nullptr;
}