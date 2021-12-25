#pragma once
#include "stdafx.h"


class HomeWork2
{
private:
	int _classNum;
	char _classInitString[30] = "HomeWork2";
	//char _classString[] = "HomeWork2";
	char *pstr;

public :
	HomeWork2();
	~HomeWork2();

	void TestStringPointer();
};

