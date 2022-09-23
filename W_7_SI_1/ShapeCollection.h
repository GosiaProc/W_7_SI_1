#pragma once
#include <vector>
#include "Shape.h"

class ShapeCollection
{
	std::vector<Shape*>shapes;
public:
	
	void addShape();
	void getShapesTable();
	void getLargestShapeByPerimeter();
	void getLargestShapeByArea();
	void getFormulas();
};

