#include "Rectangle.h"

virtual double calculateArea() {}

double Rectangle::calculateArea()
{
	return a*b;
}

double Rectangle::calculatePerimeter()
{
	return 2*a+2*b;
}
