#pragma once
#include"AbstractObject.h"

class IsoScale :public AbstractObject
{
private:
	double side;		//ºø¸é
	double area;		//¸éÀû

public:
	IsoScale();
	IsoScale(const double base, const double height);
	~IsoScale();

	virtual double AreaCalculation();
	virtual double compute();

	double getSide() { return side; }
	double getArea() { return area; }
};

