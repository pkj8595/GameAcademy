#include "HomeWork2.h"

HomeWork2::HomeWork2() 
{
	_classNum = 2;
	//_classInitString[0] = 'u';
	pstr = _classInitString; //�迭�� �ּҰ��� �����Ϳ� ����

	cout << "_classInitString : " << _classInitString << endl;
	cout << "pstr : " << pstr << endl;
	
	//�����Ϳ� ���� �־� �־��µ� 
}

HomeWork2::~HomeWork2()
{
}

void HomeWork2::TestStringPointer() 
{
	pstr = "string change to pstr";
	cout << "_classInitString : " << _classInitString << endl;
	cout << "*pstr : " << *pstr << " pstr : " << pstr << endl;

	while (*pstr != '\0') 
	{
		cout << *pstr << '\n';
		pstr++;
	}
}