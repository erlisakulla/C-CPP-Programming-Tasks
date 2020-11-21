/*
CH-230-A
Critter.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Critter.h"
using namespace std;

//constructor 1
Critter::Critter() {
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
    thirst = 0;
    cout << "Calling constructor 1" << endl;
}

//constructor 2
Critter::Critter(string& newname) {
    name = newname;
    hunger = 0;
    boredom = 0;
    height = 5;
    thirst = 0;
    cout << "Calling constructor 2" << endl;
}

//constructor 3
Critter::Critter(string& newname, int newhunger, int newboredom, double newheight, double newthirst) {
    name = newname;
    hunger = newhunger;
    boredom = newboredom;
    height = newheight;
    thirst = newthirst;
    cout << "Calling constructor 3" << endl;
}

//setters
void Critter::setName(string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight(double newheight) {
    height = newheight;
}

void Critter::setThirst(double newthirst) {
    thirst = newthirst;
}

//getters
string Critter::getName() {
    return name;
}

int Critter::getHunger() {
    return hunger;
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

double Critter::getThrist() {
    return thirst;
}
