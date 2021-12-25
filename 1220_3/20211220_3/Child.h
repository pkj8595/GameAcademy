#pragma once
#include"parent.h"
class Child : public parent
{
public:
	Child() { std::cout << "자식 클래스 생성자" << std::endl; }
	virtual~Child() { std::cout << "자식 클래스 소멸자" << std::endl; }

};

