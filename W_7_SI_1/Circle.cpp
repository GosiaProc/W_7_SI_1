#include "Circle.h"

double Circle::calculateArea()
{
	return 3.14*r*r;
}

double Circle::calculatePerimeter()
{
	return 2*3.14*r;
}

void Circle::toString()
{
	std::cout << name;
	std::cout << "r=";
	std::cin >> r;
	std::cout << std::endl;
	perimeter = calculatePerimeter();
	area = calculateArea();

	std::cout << perimeterFormula << "=" << perimeter << std::endl;
	std::cout << areaFormula << "=" << area << std::endl;
}

