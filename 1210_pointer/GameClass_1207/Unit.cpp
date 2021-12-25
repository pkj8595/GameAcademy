#include "Unit.h"

//멤버이니셜라이저를 습관으로 해라
Unit::Unit() : privateMoney(100),publicMoney(0)
{
}

Unit::~Unit()
{
}

void Unit::Init()
{
	privateMoney = 100;
	publicMoney = 5000;
	familyMoney = 3000;

	cout << "부모클래스" << endl;
	cout << "부모님 비자금" << privateMoney << endl;
	cout << "길에서 주운돈 비자금"<< publicMoney << endl;
	cout << "한달생활비" << familyMoney << endl;
}
