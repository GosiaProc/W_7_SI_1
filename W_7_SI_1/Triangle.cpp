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
	std::cout << name;
	std::cout << "a=";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "b=";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "c=";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "h=";
	std::cin >> a;
	std::cout << std::endl;

	perimeter = calculatePerimeter();
	area = calculateArea();

	std::cout << perimeterFormula << "=" << perimeter << std::endl;
	std::cout << areaFormula << "=" << area << std::endl;
}
