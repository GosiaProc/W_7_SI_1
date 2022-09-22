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
	std::cout << name;
	std::cout << "a=";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "b=";
	std::cin >> a;
	std::cout << std::endl;
	//perimeter = calculatePerimeter();
	//area = calculateArea();

	//std::cout << perimeterFormula << "=" << perimeter << std::endl;
	//std::cout << areaFormula << "=" << area << std::endl;

}
