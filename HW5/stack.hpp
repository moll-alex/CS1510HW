//Alexander Yanegwa Moll
//Section B
template <typename T>
stack<T>::stack()
{
	m_next=NULL;
}
template <typename T>
bool stack<T>::isEmpty() const
{
	if (m_next==NULL)
		return true;
	else
		return false;
}
template <typename T>
const T& stack<T>::top() const throw (Oops)
{
	string msg="Whatever";
	Oops error(msg);
	if (m_next!=NULL)
		return m_data;
	else
		throw error;
}
template <typename T>
void stack<T>::push(const T& x)
{
	stack<T>* tmp=new stack;
	tmp->m_data=m_data;
	tmp->m_next=m_next;
	m_data=x;
	m_next=tmp;
}
template <typename T>
void stack<T>::pop()
{
	if(m_next!=NULL)
	{
		stack<T>* tmp=m_next;
		m_data=tmp->m_data;
		m_next=tmp->m_next;
		delete tmp;
	}
}
template <typename T>
void stack<T>::clear()
{
	while(m_next!=NULL)
	{
		this->pop();
	}
}
template <typename T>
void stack<T>::print()
{
	cout<<"[";
	if(m_next != NULL)
	{
		stack<T>*tmp=m_next;
		cout<<" "<<m_data;
		while(tmp->m_next != NULL)
		{
			cout<<" "<<tmp->m_data;
			tmp=tmp->m_next;
		}
	}
	cout<<" ]"<<endl;
	return;
}
template <typename T>
void stack<T>::dif()
{
	T x=this->top();
	this->pop();
	T y=this->top();
	this->pop();
	y=y-x;
	this->push(y);
	return;
}
template <typename T>
void stack<T>::add()
{
	T x=this->top();
	this->pop();
	T y=this->top();
	this->pop();
	y=x+y;
	this->push(y);
}
template <typename T>
void stack<T>::div()
{
	T x=this->top();
	this->pop();
	T y=this->top();
	this->pop();
	y=y/x;
	this->push(y);
}
template <typename T>
void stack<T>::mult()
{
	T x=this->top();
	this->pop();
	T y=this->top();
	this->pop();
	y=y*x;
	this->push(y);
}
template <typename T>
void stack<T>::neg()
{
	T x=this->top();
	this->pop();
	x=x*(-1);
	this->push(x);
	return;
}
template <typename T>
void stack<T>::addall()
{
	int x=0;
	while (m_next!=NULL)
	{
		x+=this->top();
		this->pop();
	}
	this->push(x);
	return;
}
template <typename T>
void stack<T>::multall()
{
	int x=1;
	while (m_next!=NULL)
	{
		x*=this->top();
		this->pop();
	}
	
	this->push(x);
	return;
}




















