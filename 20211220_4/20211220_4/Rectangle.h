#pragma once
#include "AbstractObject.h"

class Rectangle :public AbstractObject
{
private:
	double _area;
	double _round;

public:
	Rectangle();
	Rectangle(const double base, const double height);
	~Rectangle();

	virtual double AreaCalculation();
	virtual double compute();


};

