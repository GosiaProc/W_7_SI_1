#include "ShapeCollection.h"
#include "Circle.h"
#include "rectangle.h"
#include "Triangle.h"

void ShapeCollection::addShape()
{
    

    std::cout << "1.Add Rectangle\n2.Add Circle\n3.Add Trangle\nChoice: ";
    int choice;
    std::string name;
    int a;
    int b;

    std::cin >> choice;

    if (choice == 1) {
        std::cout << "PODAJ NAZWe";
        std::cout << name;
        std::cout << "PODAJ BOK a";
        std::cin >> a;
        std::cout << "a="<<a;
        std::cout << std::endl;
        std::cout << "PODAJ BOK b";
        std::cin >> b;
        std::cout << "b="<<b;
        std::cout << std::endl;
        Shape* sh = new Rectangle(name, a, b);
        sh->toString();
         
       shapes.push_back(sh);
       std::cout << "Added new rectangle\n";

    }
    else if (choice == 2) {
       Shape* sh = new Circle;
       shapes.push_back(sh);
    }
    else if (choice == 3){
       Shape* sh = new Triangle;
       shapes.push_back(sh);
    }
    else
        std::cerr << "error";
}

void ShapeCollection::getShapesTable()
{
    std::cout << "Your shapes:\n";
    for (Shape* sh : shapes)
    {
        sh->toString();
    }
}

void ShapeCollection::getLargestShapeByPerimeter()
{
}

void ShapeCollection::getLargestShapeByArea()
{
}

void ShapeCollection::getFormulas()
{
    int choice2;
   
    std::cout << "What formula for which shape you want to see?\n";
    std::cout << "1.Rectangle\n2.Circle\n3.Trangle\nChoice: ";
    std::cin >> choice2;

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

