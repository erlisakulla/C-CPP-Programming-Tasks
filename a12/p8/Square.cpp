#include <iostream>
#include "Square.h"

//constructor
Square::Square(const char* n, double s): Rectangle(n, s, s) {
    side = s;
}

//destructor
Square::~Square() {
}

//methods
double Square::calcArea() const {
    std::cout << "calcArea of Square...";
    return Rectangle::calcArea();
}

double Square::calcPerimeter() const {
    std::cout << "calcPerimeter of Square...";
    return Rectangle::calcPerimeter();
}
