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

	//�Լ��� ������� �ӻ� ���纻�� �������.
	//�ӽ� ���纻�� ������ٴ� ���� ���� �����ڰ� ������ٴ� ��
	//const�� ������ ��������ڰ� ȣ����� �ʴ´�.
	//�Ǽ��� �Լ� �ȿ��� ���� ����Ǵ� ���� �����Ѵ�.(�ڵ�)
public:
	Point(const int &xpos, const int &ypos);
	~Point();

	int GetX()const { return x; }
	int GetY()const { return y; }

	bool SetX(int xpos);
	bool SetY(int ypos);
};

