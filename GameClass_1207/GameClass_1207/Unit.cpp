#include "Unit.h"

//����̴ϼȶ������� �������� �ض�
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

	cout << "�θ�Ŭ����" << endl;
	cout << "�θ�� ���ڱ�" << privateMoney << endl;
	cout << "�濡�� �ֿ ���ڱ�"<< publicMoney << endl;
	cout << "�Ѵ޻�Ȱ��" << familyMoney << endl;
}
