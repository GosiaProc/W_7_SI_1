#pragma once
#include "shape.h"
class Circle :
    public Shape
{
	int r;
	std::string name = "circle";
   
	double calculateArea();
	double calculatePerimeter();
	
public:
	Circle() : Shape("Perimeter=2*3.14*R", "Area=3.14*R^2") {};
	void toString();

};

 