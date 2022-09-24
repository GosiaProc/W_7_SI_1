#include "ShapeCollection.h"
#include "Circle.h"
#include "rectangle.h"
#include "Triangle.h"

void ShapeCollection::addShape()
{
    std::cout << std::endl<< "1.Add Rectangle\n2.Add Circle\n3.Add Trangle\nChoice: ";
    int choice;
    std::string name;
    double a, b, c, h, r;

    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter name " << std::endl;
        std::cin >> name;
        std::cout << "Enter a" << std::endl;
        std::cin >> a;
        std::cout << "Enter b" << std::endl;
        std::cin >> b;
        Shape* sh = new Rectangle(name, a, b);
        sh->toString();
        shapes.push_back(sh);
    }
    else if (choice == 2) {
        std::cout << "Enter name " << std::endl;
        std::cin >> name;
        std::cout << "Enter r" << std::endl;
        std::cin >> r;
        Shape* sh = new Circle(name, r);
        sh->toString();
       shapes.push_back(sh);
    }
    else if (choice == 3){
        std::cout << "Enter name ";
        std::cin >> name;
        std::cout << "Enter a" << std::endl;
        std::cin >> a;
        std::cout << "Enter b" << std::endl;
        std::cin >> b;
        std::cout << "Enter c" << std::endl;
        std::cin >> c;
        std::cout << "Enter h" << std::endl;
        std::cin >> h;
       Shape* sh = new Triangle(a,b,c,h);
       sh->toString();
       shapes.push_back(sh);
    }
    else
        std::cerr << "error";
}

void ShapeCollection::getShapesTable()
{
    std::cout << std::endl << "Your shapes:\n";
    for (Shape* sh : shapes)
    {
        sh->toString();
    }
}

void ShapeCollection::getLargestShapeByPerimeter()
{
    Shape* max = shapeWithMaxPerimeter();
    std::cout << "Shape with max perimeter is :";
    max->toString();
}

void ShapeCollection::getLargestShapeByArea()
{
    Shape* max = shapeWithMaxArea();
    std::cout << "Shape with max area is :";
    max->toString();
}

void ShapeCollection::getFormulas()
{
    int choice2;
   
    std::cout << std::endl<< "What formula for which shape you want to see?\n";
    std::cout << "1.Rectangle\n2.Circle\n3.Trangle\nChoice: ";
    std::cin >> choice2;
    std::cout << "\n";

    if (choice2 == 1) {
       Rectangle* rectangle= new Rectangle();
       std::cout << rectangle->getAreaFormula()<<std::endl;
       std::cout << rectangle->getPerimeterFormula() << std::endl;

    }
    else if (choice2 == 2) {
        Circle* circle = new Circle();
        std::cout << circle->getAreaFormula() << std::endl;
        std::cout << circle->getPerimeterFormula() << std::endl;
    }

    else if (choice2 == 3) {
       Triangle* triangle = new Triangle();
       std::cout << triangle->getAreaFormula() << std::endl;
       std::cout << triangle->getPerimeterFormula() << std::endl;
    }
    else
        std::cerr << "error";
}

