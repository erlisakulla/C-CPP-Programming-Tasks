/*
CH-230-A
City.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <string>
#include "City.h"

using namespace std;

//setter methods
void City::setName(string& newname) {
    name = newname;
}//city name

void City::setInhabitants(int newinhabitants) {
    inhabitants = newinhabitants;
}//number of inhabitants

void City::setMayor(string& newmayor) {
    mayor = newmayor;
}//mayor name

void City::setArea(double newarea) {
    area = newarea;
}//city area

//getter methods
string City::getName() {
    return name;
}

int City::getInhabitants() {
    return inhabitants;
}

string City::getMayor() {
    return mayor;
}

double City::getArea() {
    return area;
}
