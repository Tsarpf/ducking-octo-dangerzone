#ifndef SList_H_
#define SList_H_

#include "Node.h"
#include <string>
#include <vector>


class SList
{
public:
	SList(void);
	~SList(void);
	void push_front(const std::string &);
	void pop_front();
	std::string& front();
	//iterator
	class iterator
	{
	public:
		//postfix - don't use these.
		iterator operator++(int)
		{
		}
		iterator operator--(int)
		{
		}
		//prefix - use these.
		iterator& operator++()
		{
		}
		iterator& operator--()
		{
		}

		iterator begin()
		{
		}

		iterator end()
		{
		}

		operator->()
		{
		}

		operator*()
		{
		}

		operator==()
		{
		}






	};

private:
	Node * top;
};


#endif //SList_H_