//Alexander Yanegwa Moll
//Section B

#ifndef CUSTOMER
#define CUSTOMER

#include <string>

class customer
{
	private:
		string name;
		int tickets;
		int toa;
	public:
		string getname() const {return name; }
		int gettickets() const {return tickets; }
		int gettoa() const {return toa; }
		void modtickets(int x) {tickets=x;}
		void modcustomer(string x, int tick, int time) {name=x; tickets=tick; toa=time;}
		void mintickets() {tickets--;}
};

#endif