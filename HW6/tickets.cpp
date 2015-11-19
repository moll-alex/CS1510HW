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
	
	while(customer_num!=0)
	{
		cin>>time_input;
		if (time!=time_input && A.isEmpty() && B.isEmpty())
		{	
			time=time_input;
			cin>>name;
			cin>>tickets;
			temp.modcustomer(name, tickets, time_input);
			putenqueue(A, B, temp);
			customer_num++;
		}	
		else if (time!=time_input && (!A.isEmpty() || !B.isEmpty()))
		{
			if (!A.isEmpty())
			{
				temp=A.front();
				if (temp.gettoa()==(time+5))
				{
					temp.mintickets();
					if (temp.gettickets()==0)
					{
						A.dequeue();
					}
				}
			}
			if (!B.isEmpty())
			{
				temp=B.front();
			}
		}
		customer_num--;
	}
}
void putenqueue(queue<customer>& A, queue<customer>& B, customer& C)
{
	if (A.getsize()<=B.getsize())
	{
		cout<<"At time "<<C.gettoa()<<" "<<C.getname()<<" joins line A"<<endl;
		A.enqueue(C);
	}
	else
	{
		cout<<"At time "<<C.gettoa()<<" "<<C.getname()<<" joins line B"<<endl;
		B.enqueue(C);
	}
	return;
}