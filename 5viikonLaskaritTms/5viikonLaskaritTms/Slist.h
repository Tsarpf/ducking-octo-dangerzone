#ifndef SList_H_
#define SList_H_

#include "Node.h"
#include <string>



class SList
{
public:
	SList(void);
	~SList(void);
	void push_front(std::string);
	void pop_front();
	std::string front();
private:
	Node * top;
};


#endif //SList_H_