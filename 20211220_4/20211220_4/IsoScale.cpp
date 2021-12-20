#include "IsoScale.h"

//���Ŭ���� �޾ƿ;���!!
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
	side = sqrt((line1*line1) + (line2*line2)); // �������Լ� 
	return side;
}
