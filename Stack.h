#pragma once
#ifndef  STACK
#define STACK

#include <iostream>
#include <string>

using namespace std;

template <typename typen>
struct Node
{
	typen data;
	Node* next;
};

template <class type>
class Stack
{
private:
	type data;
	Node<type>* top_element;

public:
	Stack();
	Stack(type value, int initial_size);
	Node<type>* top();

	void pop();

	void push(type value);
	void print();

	int size();
	//friend ostream& operator<< (ostream& out, Stack& stack);


	~Stack();
	
};

#endif // ! STACK
