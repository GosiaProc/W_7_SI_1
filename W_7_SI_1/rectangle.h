#pragma once
#include "shape.h"

class Rectangle :
    public Shape
{
	int a;
	int b;
	std::string name = "rectangle";
	double area = a * b;
	double perimeter;
	double calculateArea()=0;
	double calculatePerimeter() = 0;
	std::string perimeterFormula;
	std::string AreaFormula;
public:
	virtual void toString() = 0;

};

