#include "Rectangle.h"


//��ü upleft�� ������������ x1,y1�� ���ڷ� ���޹޴� �����ڸ� ȣ���ض�.
Rectangle::Rectangle(const int & x1, const int & x2, const int & y1, const int & y2)
	:upLeft(x1,y1) ,lowRight(x2,y2)
{

}

Rectangle::~Rectangle()
{
}

void Rectangle::RectPos() const
{
	cout << "�»�� : " << upLeft.GetX() << " , " << upLeft.GetY() << endl;
	cout << "���ϴ� : " << lowRight.GetX() << " , " << lowRight.GetY() << endl;
}
