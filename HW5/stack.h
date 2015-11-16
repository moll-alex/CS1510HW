//Alexander Yanegwa Moll
//section B

#ifndef STACK
#define STACK

#include "abstractstack.h"

template <typename T>
class stack : public AbstractStack<T>
{
	private:
		T m_data;
		stack<T>* m_next;
	public:
		stack();
		bool isEmpty() const;
		const T& top() const throw (Oops);
		void push(const T& x);
		void pop();
		void clear();
		
		void print();
		void dif();
		void add();
		void div();
		void mult();
		void neg();
		void addall();
		void multall();
};

#include "stack.hpp"

#endif
