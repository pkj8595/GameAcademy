#pragma once
#include <iostream>

//추상클래스
//순수가상함수를 한개라도 포함하고 있다면 무조건 추상클래스
//객체생성을 위해 작성 X
//상속에서 기반클래스 역할을 담당
//구체적이지 못한 멤버함수를 가지고 있다.(순수가상함수)
//추상클래스는 순수한 함수를 가지고 있기 때문에.. 객체생성이 X
class AbstractObject
{
protected:
	double line1, line2;

public:
	AbstractObject();
	AbstractObject(const double line1,const double line2);
	virtual ~AbstractObject();

	double GetLine1() { return line1; }
	double GetLine2() { return line2; }

	void SetLine1(const double line1) { this->line1 = line1; }
	void SetLine2(const double line2) { this->line2 = line2; }

	//순수 가상함수 
	virtual double AreaCalculation() = 0;
	virtual double compute() = 0;

};

