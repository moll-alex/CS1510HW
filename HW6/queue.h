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
		int m_size;
	public:
		queue() : m_next(NULL), m_size(0) {}
		bool isEmpty() const;
		const T& front() const throw (Oops);
		const T& back() const throw (Oops);
		void enqueue(const T& x);
		void dequeue();
		void clear();
		int getsize() {return m_size; }
};
#include "queue.hpp"
#endif