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
		string const getname() {return name; }
		int const gettickets() {return tickets; }
		int const gettoa() {return toa; }
		void modtickets(int x) {tickets=x;}
		void modcustomer(string x, int tick, int time) {name=x; tickets=tick; toa=time;}
};

#endif