/*
CH-230-A
Person.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <string>
#include "Person.h"

using namespace std;

//setter methods
void Person::setName(string& newname) {
    name = newname;
}

void Person::setAge(int newage) {
    age = newage;
}

void Person::setWeight(double newweight) {
    weight = newweight;
}

void Person::setHeight(double newheight) {
    height = newheight;
}

//getter methods
string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

double Person::getWeight() {
    return weight;
}

double Person::getHeight() {
    return height;
}
