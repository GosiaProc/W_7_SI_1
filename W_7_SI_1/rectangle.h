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

	
public:
	Rectangle() :Shape("Perimeter=2a+2b", "Area=a*b"){};
	void toString();

};

