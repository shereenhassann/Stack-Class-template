//Stack class similar to the STL c++ stack 
//using templates
//using linked list method

#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack<int> stack1(2,4);
	cout <<"Size: " <<stack1.size() << endl;
	stack1.print();

	stack1.push(3);
	stack1.push(2);
	stack1.push(1);
	stack1.push(5);
	cout << "Size: " << stack1.size() << endl;
	stack1.print();

	stack1.pop();
	cout << "*popped*\n";
	stack1.print();
	cout << "Size: " << stack1.size() << endl;


    return 0;
}

