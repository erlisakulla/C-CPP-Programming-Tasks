/*
CH-230-A
testHexagon.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {
	Hexagon h1("hex1", 0, 0, 6, "blue", 9);
	Hexagon h2("hex2", 0, 0, 6, "green", 15);
	Hexagon h3(h2);
	
	cout << "HEXAGON 1:" << endl;
	cout << "Color: " << h1.getColor() << endl;
	cout << "Side: " << h1.getSide() << endl;
	cout << "Perimeter: " << h1.perimeter() << endl;
	cout << "Area: " << h1.area() << endl;
	
	cout << "\nHEXAGON 2:" << endl;
	cout << "Color: " << h2.getColor() << endl;
	cout << "Side: " << h2.getSide() << endl;
	cout << "Perimeter: " << h2.perimeter() << endl;
	cout << "Area: " << h2.area() << endl;
	
	cout << "\nHEXAGON 3:" << endl;
	cout << "Color: " << h3.getColor() << endl;
	cout << "Side: " << h3.getSide() << endl;
	cout << "Perimeter: " << h3.perimeter() << endl;
	cout << "Area: " << h3.area() << endl;
	
	return 0;
}
