//Alexander Yanegwa Moll
//Section B

#include "customer.h"
customer& customer::operator=(const customer &rhs)
{
	if (this==&rhs)
		return *this;
	tickets=rhs.gettickets();
	name=rhs.getname();
	toa=rhs.gettoa();
	return *this;
}