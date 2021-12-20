#pragma once
#include"AbstractObject.h"

class IsoScale :public AbstractObject
{
private:
	double side;		//����
	double area;		//����

public:
	IsoScale();
	IsoScale(const double base, const double height);
	~IsoScale();

	virtual double AreaCalculation();
	virtual double compute();

	double getSide() { return side; }
	double getArea() { return area; }
};

