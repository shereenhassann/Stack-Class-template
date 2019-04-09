#include "Stack.h"


template <class type>
Stack<type>::Stack()
{
	this->top_element = NULL;
}

template <class type>
Stack<type>::Stack(type value, int initial_size)
{
	this->top_element = NULL;

//	Node<type>* ptr = new Node<type>();
	for (int i = 0; i < initial_size; i++)
	{
		this->push(value);
	}
}

template <class type>
Node<type>* Stack<type>::top()
{
	return (top_element);
}

template <class type>
void Stack<type>::push(type value)
{
	Node<type>* ptr = new Node<type>();
	ptr->data = value;
	ptr->next = top_element;
	top_element = ptr;
}

template<class type>
void Stack<type>::print()
{
	Node<type>* ptr = top_element;
	Node<type>* ptr2 = ptr;
	cout << "Stack elements: " << endl;
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr2 = ptr;
		ptr = ptr->next;
	}

	cout << "\n\n";
}

template<class type>
int Stack<type>::size()
{
	int count = 0;
	Node<type>* ptr = top_element;
	Node<type>* ptr2 = ptr;
	while (ptr != NULL)
	{
		count++;
		ptr2 = ptr;
		ptr = ptr->next;
	}
	return count;
}

template <class type>
void Stack<type>::pop()
{
	Node<type>* ptr = top_element;
	top_element = top_element->next;
	delete ptr;
}

template <class type>
Stack<type>::~Stack()
{
}


template class Stack<int>;
template class Stack<string>;
template class Stack<float>;
