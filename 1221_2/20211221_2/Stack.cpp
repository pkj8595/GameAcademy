#include "Stack.h"

Stack::Stack()
{
	for (int i = 0; i < STACK_SIZE; i++) 
	{
		_data[i] = NULL;
	}
	_top = 0;
}

Stack::~Stack()
{
}

void Stack::push(int n)
{
	if (!isFull()) 
	{
		_data[_top] = n;
		_top++;
	}
	print();
}

void Stack::pop()
{
	if(!isEmpty())
	{
		_top--;
		_data[_top] = NULL;
	}
	print();
}
 
void Stack::print()
{
	cout << "Stack : ";
	for (int i = 0; i < STACK_SIZE; i++) 
	{
		cout << _data[i] << " | ";
	}
	cout << " ||top :" << _top << endl;

}

bool Stack::isFull()
{
	if (_top >= STACK_SIZE) 
	{
		cout << "isFull--------" << endl;
		return true;
	}
	return false;
}

bool Stack::isEmpty()
{
	if (_top <= 0)
	{
		cout << "isEmpty--------" << endl;
		return true;
	}
	else
	{
		return false;
	}
}
