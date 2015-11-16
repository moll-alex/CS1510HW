//Alexander Yanegwa Moll
//section B

#ifndef QUEUE_H
#define QUEUE_H

#include "abstractqueue.h"
#include "customer.h"
template <typename T>
class queue : public AbstractQueue<T>
{
	private:
		queue<T>*m_next;
		T m_data;
	public:
		queue() : m_next(NULL) {}
		bool isEmpty() const;
		const T& front() const throw (Oops);
		const T& back() const throw (Oops);
		void enqueue(const T& x);
		void dequeue();
		void clear();
};
#include "queue.hpp"
#endif