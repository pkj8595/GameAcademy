#include "Rectangle.h"

Rectangle::Rectangle() :AbstractObject()
{
}

Rectangle::Rectangle(const double base, const double height):AbstractObject(base, height)
{
	_area = 0;
	_round = 0;
}

Rectangle::~Rectangle()
{
}

//����
double Rectangle::AreaCalculation()
{
	_area = line1 * line2;
	return _area;
}

//�ѷ�
double Rectangle::compute()
{
	_round = line1 + line1 + line2 + line2;
	return _round;
}


