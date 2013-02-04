#include "Slist.h"
#include <iostream>

using namespace std;

int main()
{
	SList * kives = new SList;
	kives->push_front("penis");
	kives->push_front("asdasd");
	std::cout << kives->front() << endl;
	kives->pop_front();
	std::cout << kives->front();
	//std::cout << "Hello world" << std::endl;
	int penis = 0;
	std::cin >> penis;

	delete kives;
	return 0;
}