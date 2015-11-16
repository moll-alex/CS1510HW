//Alexander Yanegwa Moll
//Section B
#include <cstdlib>
#include <iostream>
#include "stack.h"
using namespace std;
int main()
{
	stack<int> awesome;
	int x;
	string input;
	while(input!="$")
	{
		cin>>input;
		if (input=="/")
			awesome.div();
		else if (input=="+")
			awesome.add();
		else if (input=="-")
			awesome.dif();
		else if (input=="*")
			awesome.mult();
		else if (input=="C")
			awesome.clear();
		else if (input=="X")
			awesome.print();
		else if (input=="!")
			awesome.neg();
		else if (input=="S")
			awesome.addall();
		else if (input=="P")
			awesome.multall();
		else
		{
			x=atoi(input.c_str());
			awesome.push(x);
		}
	}
	awesome.clear();
	return 0;
}
