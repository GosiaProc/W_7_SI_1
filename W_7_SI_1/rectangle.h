#pragma once
#include "shape.h"

class Rectangle :
    public Shape

{
	int a=1;
	int b=1;
	std::string name = "rectangle";
	
	double calculateArea();
	double calculatePerimeter();

	
public:
	Rectangle() :Shape("Perimeter=2a+2b", "Area=a*b"){
	};
	Rectangle(std::string name, int a, int b);
	void toString();

};

