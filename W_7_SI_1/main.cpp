#include <iostream>
#include "shape.h"
#include "ShapeCollection.h"
#include "rectangle.h"




int main() {
    ShapeCollection myCollection;
	while (true) {
        int choice;
		std::cout <<std::endl<< "1.Add new shape\n2.Show All shapes\n3.Show shape with the largest pprimeter\n4.Show shape with the largest area\n5.Exit.\n6.Formulas\nChoice:";
		std::cin >> choice;

        if (choice == 1) {
            myCollection.addShape();
        }
        else if (choice == 2)
            myCollection.getShapesTable();
        else if (choice == 3)
            myCollection.getLargestShapeByPerimeter();
        else if (choice == 4)
            myCollection.getLargestShapeByArea();
        else if (choice == 5)
            break;
        else if (choice == 6)
           myCollection.getFormulas();
        else
            std::cerr << "Incorrect number";
	}


	return 0;
}