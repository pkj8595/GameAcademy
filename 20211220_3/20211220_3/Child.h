#pragma once
#include"parent.h"
class Child : public parent
{
public:
	Child() { std::cout << "�ڽ� Ŭ���� ������" << std::endl; }
	virtual~Child() { std::cout << "�ڽ� Ŭ���� �Ҹ���" << std::endl; }

};

