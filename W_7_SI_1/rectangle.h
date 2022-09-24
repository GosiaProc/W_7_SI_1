#pragma once
#include "shape.h"

class Rectangle :
    public Shape
{
	double a=1;
	double b=1;
	std::string name = "rectangle";
	
	double calculateArea();
	double calculatePerimeter();

	
public:
	Rectangle() :Shape("Perimeter=2a+2b", "Area=a*b"){
	};
	Rectangle(std::string name, double a, double b);
	void toString();

};

