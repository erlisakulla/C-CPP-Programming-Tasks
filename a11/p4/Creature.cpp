/*
CH-230-A
Creature.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>

using namespace std;

//Creature class constructors and methods
Creature::Creature() : distance(10) {
	hours = 0;
	cout << "Calling Creature constructor.\n";
}

void Creature::run() const { 
    cout << "Running " << distance << " meters!\n";
}  

void Creature::sleeping() const {
	cout << "Sleeping " << hours << " hours!\n";
}

Creature::~Creature() {}

//Wizard class constructors and methods
Wizard::Wizard() : distFactor(3) {
	cout << "Calling Wizard constructor.\n";
}  

void Wizard::hover() const {
    cout << "Hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard() {}

//Albanian class constructors and methods
Albanian::Albanian() : byrek_count(5) {
	cout << "Calling Albanian constructor.\n";
}

void Albanian::eating_byrek() const {
	cout << "Eating " << byrek_count << " byrek.\n";
}

Albanian::~Albanian() {}

//CS Student class constructors and methods
CS_Student::CS_Student(): tasks(100) {
	cout << "Calling CS Student constructor.\n";
}

void CS_Student::programming() const {
	cout << "Programming " << tasks << " tasks.\n";
}

CS_Student::~CS_Student() {}
