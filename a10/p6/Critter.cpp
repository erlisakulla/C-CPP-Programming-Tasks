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

//constructor 11
Critter::Critter() {
    name = "default_critter";
    hunger = 0.2;
    boredom = 0;
    height = 5;
    cout << "Calling constructor 1" << endl;
}

//constructor 2
Critter::Critter(string& newname) {
    name = newname;
    hunger = 0.2;
    boredom = 0;
    height = 5;
    cout << "Calling constructor 2" << endl;
}

//constructor 3
Critter::Critter(string& newname, int newhunger, int newboredom, int newheight){
    name = newname;
    switch(newhunger){
    	case 100: hunger = 1.0; break;
    	case 90: hunger = 0.9; break;
    	case 80: hunger = 0.8; break;
    	case 70: hunger = 0.7; break;
    	case 60: hunger = 0.6; break;
    	case 50: hunger = 0.5; break;
    	case 40: hunger = 0.4; break;
    	case 30: hunger = 0.3; break;
    	case 20: hunger = 0.2; break;
    	case 10: hunger = 0.1; break;
    	case 0: hunger = 0.0; break;
	}
    boredom = newboredom;
    height = newheight;
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

void Critter::setHeight(int newheight) {
    height = newheight;
}

//getters
string Critter::getName() {
    return name;
}

double Critter::getHunger() {
    return hunger;
}

int Critter::getBoredom() {
    return boredom;
}

int Critter::getHeight() {
    return height;
}
