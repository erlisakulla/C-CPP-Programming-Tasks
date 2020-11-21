/*
CH-230-A
Person.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <string>
#include "Person.h"

using namespace std;

//empty contstructor
Person::Person() {
	name = "";
	age = 0;
	weight = 0.0;
	height = 0.0;
}

//parametric constructor
Person::Person(const string newname, const int newage, 
			   const double newweight, const double newheight) {
	name = newname;
	age = newage;
	weight = newweight;
	height = newheight;
}

//copy constructor
Person::Person(const Person &newperson) {
	name = newperson.name;
	age = newperson.age;
	weight = newperson.weight;
	height = newperson.height;
}

//destructor
//Person::~Person() {}

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
