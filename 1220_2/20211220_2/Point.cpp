#include "Point.h"

Point::Point(const int & xpos, const int & ypos)
{
	x = xpos;
	y = ypos;
}

Point::~Point()
{
}

bool Point::SetX(int xpos)
{
	if (0>x || xpos > 100) {
		cout << "°ª ¹ş¾î³²" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{

	if (0 > y || ypos > 100) {
		cout << "°ª ¹ş¾î³²" << endl;
		return false;
	}
	y = ypos;
	return true;
}
