#pragma once
#include<iostream>

struct Node {

	int value;			//��
	Node * pNext;		//��带 ����ų �� �ִ� ������
	Node(int n) : value(n), pNext(NULL) {}
};

class SLL
{
	Node *pHead;		//�Ӹ�

	void insert(int num);
	void Delete(int num);
	void Print();

	SLL();
	~SLL();
};

