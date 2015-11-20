//Alexander Yanegwa Moll
//Section B

#include "queue.h"
#include <string>
#include <iostream>
using namespace std;

void putenqueue(queue<customer>& A, queue<customer>& B, customer& C);

int main()
{	
	int customer_num=0;
	int time_input=0;
	int time=0;
	
	queue<customer> A;
	queue<customer> B;
	customer temp;
	
	string name;
	int tickets;
	
	cin>>customer_num;
	cin>>time_input;
	cin>>name;
	cin>>tickets;
	temp.modcustomer(name, tickets, time_input);
	A.enqueue(temp);
	
	while(customer_num!=0)
	{
		customer_num--;
	}
	A.clear();
	B.clear();
}
void putenqueue(queue<customer>& A, queue<customer>& B, customer& C)
{
	if (A.getsize()<=B.getsize())
		A.enqueue(C);
	else
		B.enqueue(C);
	return;
}
