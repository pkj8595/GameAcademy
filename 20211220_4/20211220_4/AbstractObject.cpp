#include "AbstractObject.h"

AbstractObject::AbstractObject():line1(0),line2(0){}

AbstractObject::AbstractObject(const double line1, const double line2)
{
	this->line1 = line1;
	this->line2 = line2;
}

AbstractObject::~AbstractObject()
{
}
