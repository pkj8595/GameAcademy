#pragma once
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

class Point
{
private:
	int x;
	int y;

	//함수가 사라질때 임사 복사본이 사라진다.
	//임시 복사본이 사라진다는 것을 복사 생성자가 사라진다는 것
	//const가 붙으면 복사생성자가 호출되지 않는다.
	//실수로 함수 안에서 값이 변경되는 것을 방지한다.(코드)
public:
	Point(const int &xpos, const int &ypos);
	~Point();

	int GetX()const { return x; }
	int GetY()const { return y; }

	bool SetX(int xpos);
	bool SetY(int ypos);
};

