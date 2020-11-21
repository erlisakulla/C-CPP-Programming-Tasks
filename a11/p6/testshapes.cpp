/*
CH-230-A
testshapes.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {
	Circle c("CIRCLE 1", 3, 4, 7);
	cout << "Perimeter of circle: " << c.perimeter() << endl;
	cout << "Area of circle: " << c.area() << endl;
	
	Rectangle r("RECTANGLE 1", 1, 0, 3, 9);
	cout << "Perimeter of rectangle: " << r.perimeter() << endl;
	cout << "Area of rectangle: " << r.area() << endl;
	
	Square s("SQUARE 1", 0, 0, 3);
	cout << "Perimeter of square: " << s.perimeter() << endl;
	cout << "Area of square: " << s.area() << endl;	
	
	return 0;
}
