//Alexander Yanegwa Moll
//Section B

#include "queue.h"
#include <iostream>
using namespace std;


int main()
{
	cout<<"hello world"<<endl;
	queue<customer> A;
	customer robert;
	customer bob;
	customer temp;
	bob.modcustomer("bob", 3, 7);
	robert.modcustomer("robert", 4, 5);
	A.enqueue(bob);
	A.enqueue(robert);
	temp=A.front();
	cout<<temp.getname();
	temp=A.back();
	cout<<temp.getname();
	A.clear();
	temp=A.front();
	A.clear();
}