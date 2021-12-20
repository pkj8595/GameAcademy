#include "IsoScale.h"

//기반클래스 받아와야함!!
IsoScale::IsoScale() : AbstractObject()
{
	side = 0;
	area = 0;
}

IsoScale::IsoScale(const double base, const double height):AbstractObject(base,height)
{
	side = 0;
	area = 0;
	
}

IsoScale::~IsoScale()
{
}

//
double IsoScale::AreaCalculation()
{
	area = (line1 * line2) *0.5;
	return area;
}

double IsoScale::compute()
{
	side = sqrt((line1*line1) + (line2*line2)); // 제곱근함수 
	return side;
}
