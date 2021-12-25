#pragma once
#include <iostream>

using std::cout;
using std::endl;

#define STACK_SIZE	5

//후입선출
class Stack
{
private:
	int _data[STACK_SIZE];
	int _top;

public:
	Stack();
	~Stack();

	void push(int n);		//data 삽입
	void pop();				//삽입 삭제 
	void print();			//출력
	bool isFull();			//데이터 공간 확인
	bool isEmpty();			//비어있는지 확인
};

