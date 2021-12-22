#pragma once
#include <iostream>

using std::cout;
using std::endl;

#define STACK_SIZE	5

//���Լ���
class Stack
{
private:
	int _data[STACK_SIZE];
	int _top;

public:
	Stack();
	~Stack();

	void push(int n);		//data ����
	void pop();				//���� ���� 
	void print();			//���
	bool isFull();			//������ ���� Ȯ��
	bool isEmpty();			//����ִ��� Ȯ��
};

