#pragma once
#include <vector>
#include "Shape.h"

class ShapeCollection
{
	std::vector<Shape*>shapes;
	Shape* shapeWithMaxArea() {
		double max = 0;
		Shape* maxShape = nullptr;
		for (Shape* sh : shapes) {
			if (sh->calculateArea() > max) {
				max = sh->calculateArea();
				maxShape = sh;
			}
		}
		return maxShape;
	}
	Shape* shapeWithMaxPerimeter() {
		double max = 0;
		Shape* maxShape = nullptr;
		for (Shape* sh : shapes) {
			if (sh->calculatePerimeter() > max) {
				max = sh->calculatePerimeter();
				maxShape = sh;
			}
		}
		return maxShape;
	}

public:
	
	void addShape();
	void getShapesTable();
	void getLargestShapeByPerimeter();
	void getLargestShapeByArea();
	void getFormulas();
};

