#include "Rectangle.h"

double Rectangle::calculateArea()
{
	return a*b;
}

double Rectangle::calculatePerimeter()
{
	return 2*a+2*b;
}

void Rectangle::toString()
{
	std::cout << std::endl << "This is a rectangle with name: '";
	std::cout << name;
	std::cout << "' " << std::endl;
	std::cout << "a= " << a;
	std::cout << std::endl;
	std::cout << "b= " << b;
	std::cout << std::endl;
	perimeter = calculatePerimeter();
	area = calculateArea();

	std::cout << perimeterFormula << "=" << perimeter << std::endl;
	std::cout << areaFormula << "=" << area << std::endl;

}

Rectangle::Rectangle(std::string name, double a, double b):Shape("Perimeter=2a+2b", "Area=a*b") {
	this->name = name;
	this->a = a;
	this->b = b;
}
