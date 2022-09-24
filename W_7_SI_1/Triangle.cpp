#include "Triangle.h"

double Triangle::calculateArea()
{
    return a+b+c;
}

double Triangle::calculatePerimeter()
{
    return a*h/2;
}

void Triangle::toString()
{
	std::cout << std::endl << "This is a triangle with name: '";
	std::cout << name << "'" << std::endl;
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	std::cout << "c=" << c << std::endl;
	std::cout << "h=" << h << std::endl;

	perimeter = calculatePerimeter();
	area = calculateArea();

	std::cout << perimeterFormula << "=" << perimeter << std::endl;
	std::cout << areaFormula << "=" << area << std::endl;
}

Triangle::Triangle(double a, double b, double c, double h) : Shape("Perimeter=a+b+c", "Area=a*h/2") {
	this->a = a;
	this->b = b;
	this->c = c;
	this->h = h;
}
