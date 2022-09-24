#pragma once
#include <iostream>
	class Shape
	{
	protected:
		std::string name;
		double area;
		double perimeter;
		std::string perimeterFormula;
		std::string areaFormula;
	public:
		virtual double calculateArea() = 0;
		virtual double calculatePerimeter() = 0;
		Shape(std::string perimeterFormula,
			std::string areaFormula) {
			this->perimeterFormula = perimeterFormula;
			this->areaFormula = areaFormula;

		};
		virtual void toString() = 0;
	    virtual std::string getPerimeterFormula();
		virtual std::string getAreaFormula();



	};



