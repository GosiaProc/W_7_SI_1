#pragma once
#include <iostream>
	class Shape
	{
	protected:
		std::string name;
		double area;
		double perimeter;
		virtual double calculateArea() = 0;
		virtual double calculatePerimeter() = 0;
		std::string perimeterFormula;
		std::string AreaFormula;
	public:
		virtual void toString() = 0;
		double getPerimeter();
		double getArea();
		void getPerimeterFormula();
		void getAreaFormula();


	};



