#pragma once
#include "shape.h"
class Triangle :
    public Shape
{
	int a;
	int b;
	int c;
	int h;
	std::string name = "triangle";

	double calculateArea();
	double calculatePerimeter();
	
public:
	Triangle() :Shape("Perimeter=a+b+c", "Area=a*h/2") {};
	void toString();

};

