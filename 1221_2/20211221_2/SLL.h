#pragma once
#include<iostream>

struct Node {

	int value;			//값
	Node * pNext;		//노드를 가리킬 수 있는 포인터
	Node(int n) : value(n), pNext(NULL) {}
};

class SLL
{
	Node *pHead;		//머리

	void insert(int num);
	void Delete(int num);
	void Print();

	SLL();
	~SLL();
};

