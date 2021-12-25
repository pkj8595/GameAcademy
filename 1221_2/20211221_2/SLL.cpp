#include "SLL.h"

void SLL::insert(int num)
{
}

void SLL::Delete(int num)
{
	Node* pCurrent = pHead;
	Node* pNext = pHead->pNext;

	if(pCurrent ->value == num)
	{
		pHead = pNext;
		delete pCurrent;
		return;
	}
	while (pNext->value != num)
	{
		pCurrent = pCurrent->pNext;
		pNext = pNext->pNext;
		if (pNext == nullptr)return;
	}
	pCurrent->pNext = pNext->pNext;
}

void SLL::Print()
{
	Node *temp = pHead;
	std::cout << "==========================" << std::endl;

	while(temp != NULL)
	{
		std::cout << temp->value << " ";
		 
	}
}

SLL::SLL()
{
}

SLL::~SLL()
{
	while(pHead != NULL) {
		Node * head;
	}
}

