#pragma once
#include "shape.h"
class Triangle :
    public Shape
{
	double a = 0, b = 0, c = 0, h = 0;
	std::string name = "triangle";

	double calculateArea();
	double calculatePerimeter();
	
public:
	Triangle() :Shape("Perimeter=a+b+c", "Area=a*h/2") {};
	Triangle(double a, double b, double c, double h);

	void toString();

};

