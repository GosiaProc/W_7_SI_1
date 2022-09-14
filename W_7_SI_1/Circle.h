#pragma once
#include "shape.h"
class Circle :
    public Shape
{
	int r;
	std::string name = "circle";
   
	double calculateArea();
	double calculatePerimeter();
	std::string perimeterFormula = "Perimeter=2*3.14*R";
	std::string AreaFormula = "Area=3.14*R^2";
public:
	void toString();

};

