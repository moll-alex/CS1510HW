//Alexander Yanegwa Moll
//Section B

#include "queue.h"
#include <string>
#include <iostream>
using namespace std;

void putenqueue(queue<customer>& A, queue<customer>& B, customer& C);
void reinsertA(queue<customer>& tmp);
void reinsertB(queue<customer>& tmp);

int main()
{	
	int customer_num=0;
	int time_input=0;
	int time=0;
	int timeAcounter=0;
	int tickAcounter=0;
	int timeBcounter=0;
	int tickBcounter=0;
	
	queue<customer> A;
	queue<customer> B;
	customer temp;
	customer tmpA;
	customer tmpB;
	
	string name;
	int tickets;
	
	cin>>customer_num;
	cin>>time_input;
	time=time_input;
	cin>>name;
	cin>>tickets;
	temp.modcustomer(name, tickets, time_input);
	A.enqueue(temp);
	cout<<"At time "<<temp.gettoa()<<" "<<temp.getname()<<" joins line A."<<endl;
	
	while(customer_num!=0)
	{
		cin>>time_input;
		cin>>name;
		cin>>tickets;
		while(time!=time_input)
		{
			if (!A.isEmpty())
			{
				tmpA=A.front();
				timeAcounter=time;
				while ((timeAcounter-tmpA.gettoa())>4)
				{
					tmpA.decrement();
					//cout<<"HEYO"<<endl;
					if (tmpA.gettickets()==0)
					{
						cout<<"At time "<<time<<" "<<tmpA.getname()<<" is done!"<<endl;
						A.dequeue();
						customer_num--;
					}
					else
					{
						tickAcounter++;
						timeAcounter-=5;
						if (tickAcounter==3)
						{
							cout<<"At time "<<time<<" ";
							reinsertA(A);
							tickAcounter=0;
						}
					}
				}
			}
			if (!B.isEmpty())
			{
				tmpB=B.front();
				timeBcounter=time;
				while ((timeBcounter-tmpB.gettoa())>=5)
				{
					tmpB.decrement();
					if (tmpB.gettickets()==0)
					{
						cout<<"At time "<<time<<" "<<tmpB.getname()<<" is done!"<<endl;
						B.dequeue();
						customer_num--;
					}
					else
					{
						tickBcounter++;
						timeBcounter-=5;
						if (tickBcounter==3)
						{
							cout<<"At time "<<time<<" ";
							reinsertB(B);
							tickBcounter=0;
						}
					}
				}
			}
			time++;
		}
		temp.modcustomer(name, tickets, time_input);
		putenqueue(A, B, temp);
	}
	A.clear();
	B.clear();
}
void putenqueue(queue<customer>& A, queue<customer>& B, customer& C)
{
	if (A.getsize()<=B.getsize())
	{
		A.enqueue(C);
		cout<<"At time "<<C.gettoa()<<" "<<C.getname()<<" joins line A."<<endl;
	}
	else
	{
		B.enqueue(C);
		cout<<"At time "<<C.gettoa()<<" "<<C.getname()<<" joins line B."<<endl;
	}
	return;
}
void reinsertA(queue<customer>& tmp)
{
	customer cust=tmp.front();
	tmp.enqueue(cust);
	tmp.dequeue();
	cout<<cust.getname()<<" goes to back of line A."<<endl;
}
void reinsertB(queue<customer>& tmp)
{
	customer cust=tmp.front();
	tmp.enqueue(cust);
	tmp.dequeue();
	cout<<cust.getname()<<" goes to back of line B."<<endl;
}

