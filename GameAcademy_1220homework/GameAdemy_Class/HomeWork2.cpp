#include "HomeWork2.h"

HomeWork2::HomeWork2() 
{
	_classNum = 2;
	//_classInitString[0] = 'u';
	pstr = _classInitString; //배열의 주소값을 포인터에 저장

	cout << "_classInitString : " << _classInitString << endl;
	cout << "pstr : " << pstr << endl;
	
	//포인터에 값은 넣어 주었는데 
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