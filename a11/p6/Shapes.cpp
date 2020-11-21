/*
CH-230-A
Shapes.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <math.h>
#include "Shapes.h"

using namespace std;

//----Shape constructors and methods----//
Shape::Shape(const string& n) : name(n) {
}

//default constructor
Shape::Shape() {
	name = "";
}

//copy constructor
Shape::Shape(const Shape& src) {
	name = src.name;
}

//print
void Shape::printName() const {
	cout << name << endl;
}

//setter
void Shape::setName(const string& newname) {
	name = newname;
}

//getter
string Shape::getName() {
	return name;
}

//----CenteredShape constructors and methods----//
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//default constructor
CenteredShape::CenteredShape() : Shape(""){
	x = 0;
	y = 0;
}

//copy constructor
CenteredShape::CenteredShape(const CenteredShape& src) : Shape(src) {
	name = src.name;
	x = src.x;
	y = src.y;
}

//setters
void CenteredShape::setX(const double newx) {
	x = newx;
}

void CenteredShape::setY(const double newy) {
	y = newy;
}

//getters
double CenteredShape::getX() {
	return x;
}

double CenteredShape::getY() {
	return y;
}

//----RegularPolygon constructors and methods----//
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
				CenteredShape(n, nx, ny) {
	EdgesNumber = nl;
}

//default constructor
RegularPolygon::RegularPolygon() : CenteredShape("", 0, 0) {
	EdgesNumber = 0;
}

//copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon& src) : CenteredShape(src) {
	EdgesNumber = src.EdgesNumber;
}

//setter
void RegularPolygon::setEdgesNumber(const int newEdgesNumber) {
	EdgesNumber = newEdgesNumber;
}

//getter
int RegularPolygon::getEdgesNumber() {
	return EdgesNumber;
}

//----Circle constructors and methods----//
Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}

//default constructor
Circle::Circle() : CenteredShape("", 0, 0) {
	Radius = 0;
}

//copy constructor
Circle::Circle(const Circle& src) : CenteredShape(src) {
	Radius = src.Radius;
}

//setter
void Circle::setRadius(const double newRadius) {
	Radius = newRadius;
}

//getter
double Circle::getRadius() {
	return Radius;
}

//perimeter
double Circle::perimeter() {
	return 2*M_PI*Radius;
}

//area
double Circle::area() {
	return M_PI*Radius*Radius;
}

//----Rectangle constructors and methods----//
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight)
 			: RegularPolygon (n, nx, ny, 0) {
	width = nwidth;
	height = nheight;
}

//default constructor
Rectangle::Rectangle() : RegularPolygon("", 0, 0, 4) {
	width = 0;
	height = 0;
}

//copy constructor
Rectangle::Rectangle(const Rectangle& src) : RegularPolygon(src) {
	height = src.height;
	width = src.width;
}

//setters
void Rectangle::setHeight(const double newheight) {
	height = newheight;
}

void Rectangle::setWidth(const double newwidth) {
	width = newwidth;
}

//getters
double Rectangle::getHeight() {
	return height;
}

double Rectangle::getWidth() {
	return width;
}

//perimeter
double Rectangle::perimeter() {
	return 2*(height + width);
}

//area
double Rectangle::area() {
	return width*height;
}

//----Square constructors and methods----//
Square::Square(const string& n, double nx, double ny, double nside) {
	length = nside;
}

//copy constructor
Square::Square(const Square& src) : Rectangle(src) {
	length = src.length;
}

//default constructor
Square::Square() : Rectangle("", 0, 0, 0, 0) {
	length = 0;
}

//setter
void Square::setLength(const double newlength) {
	length = newlength;
}

//getter
double Square::getLength() {
	return length;
}

//perimeter
double Square::perimeter() {
	return 4*length;
}

//area
double Square::area() {
	return length*length;
}
