/*
CH-230-A
Box.xpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

//empty constructor
Box::Box() {
    height = 0;
    width = 0;
    depth = 0;
}

//parametric constructor
Box::Box(const double newheight, const double newwidth, const double newdepth) {
    height = newheight;
    width = newwidth;
    height = newheight;
}

//copy constructor
Box::Box(const Box& newbox) {
    height = newbox.height;
    width = newbox.width;
    depth = newbox.depth;
}

//destructor
Box::~Box() {}

//setters
void Box::setHeight(const double newheight) {
    height = newheight;
}

void Box::setWidth(const double newwidth) {
    width = newwidth;
}

void Box::setDepth(const double newdepth) {
    depth = newdepth;
}

//getters
double Box::getHeight() {
    return height;
}

double Box::getWidth() {
    return width;
}

double Box::getDepth() {
    return depth;
}

