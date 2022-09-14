#pragma once
#include "shape.h"

class Rectangle :
    public Shape
{
	int a;
	int b;
	std::string name = "rectangle";
	
double calculateArea();
	double calculatePerimeter();
	std::string perimeterFormula= "Perimeter=2a+2b";
	std::string AreaFormula="Area=a*b";
public:
	void toString();

};

