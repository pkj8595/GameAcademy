#include "Rectangle.h"


//객체 upleft의 생성과정에서 x1,y1를 인자로 전달받는 생성자를 호출해라.
Rectangle::Rectangle(const int & x1, const int & x2, const int & y1, const int & y2)
	:upLeft(x1,y1) ,lowRight(x2,y2)
{

}

Rectangle::~Rectangle()
{
}

void Rectangle::RectPos() const
{
	cout << "좌상단 : " << upLeft.GetX() << " , " << upLeft.GetY() << endl;
	cout << "우하단 : " << lowRight.GetX() << " , " << lowRight.GetY() << endl;
}
