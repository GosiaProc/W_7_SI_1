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
	std::cout << std::endl << "This is a circle with name: '" << name << "'" << std::endl;
	std::cout << "r=" << r << std::endl;
	perimeter = calculatePerimeter();
	area = calculateArea();
	std::cout << perimeterFormula << "=" << perimeter << std::endl;
	std::cout << areaFormula << "=" << area << std::endl;
}
Circle::Circle(std::string name, double r) : Shape("Perimeter=2a+2b", "Area=a*b") {
	this->name = name;
	this->r = r;
}

