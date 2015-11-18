//Alexander Yanegwa Moll
//section B

template <typename T>
bool queue<T>::isEmpty() const
{
}
template <typename T>
const T& queue<T>::front() const throw (Oops)
{
	string msg="Whatever";
	Oops error(msg);
	if (m_next!=NULL)
		return m_next->m_next->m_data;
	else 
		throw error;
}
template <typename T>
const T& queue<T>::back() const throw (Oops)
{
	string msg="Stahp";
	Oops error(msg);
	if (m_next!=NULL)
		return m_next->m_data;
	else
		throw error;
}
template <typename T>
void queue<T>::enqueue(const T& x)
{
	queue*tmp=new queue;
	tmp->m_data=x;
	if (m_next!=NULL)
	{
		tmp->m_next=m_next->m_next;
		m_next->m_next=tmp;
		m_next=tmp;
		m_size++;
	}
	else
	{
		m_next=tmp;
		tmp->m_next=tmp;
	}
}
template <typename T>
void queue<T>::dequeue()
{
	if (m_next!=NULL)
	{
		queue*tmp=m_next->m_next;
		m_next->m_next=tmp->m_next;
		delete tmp;
		m_size--;
		if (m_next==tmp)
			m_next=NULL;
	}
}
template <typename T>
void queue<T>::clear()
{
	while (m_next!=NULL)
		this->dequeue();
	m_size=0;
}