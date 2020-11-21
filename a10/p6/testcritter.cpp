/*
CH-230-A
testcritter.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Critter.h"
using namespace std;

int main() {
    string name = "Critter";

    //critter1
    Critter critter1 = Critter();
    cout << "Critter 1: " << endl;
    cout << "name = " << critter1.getName() << endl;
    cout << "hunger = "<< critter1.getHunger() << endl;
    cout << "boredom = "<< critter1.getBoredom() << endl;
    cout << "height = " << critter1.getHeight() << endl;
    cout << endl;

    //critter2
    Critter critter2 = Critter(name);
    cout << "Critter 2: " << endl;
    cout << "name = " << critter2.getName() << endl;
    cout << "hunger = " << critter2.getHunger() << endl;
    cout << "boredom = " << critter2.getBoredom() << endl;
    cout << "height = " << critter2.getHeight() << endl;
    cout << endl;

    //critter3
    Critter critter3 = Critter(name, 80, 4, 30);
    cout << "Critter 3: " << endl;
    cout << "name = " << critter3.getName() << endl;
    cout << "hunger = " << critter3.getHunger() << endl;
    cout << "boredom = " << critter3.getBoredom() << endl;
    cout << "height = "<< critter3.getHeight() << endl;
    cout << endl;

    //critter4
    Critter critter4 = Critter(name, 3, 60);
    cout << "Critter 4: " << endl;
    cout << "name = " << critter4.getName() << endl;
    cout << "hunger = " << critter4.getHunger() << endl;
    cout << "boredom = " << critter4.getBoredom() << endl;
    cout << "height = " << critter4.getHeight() << endl;
    cout << endl;

    return 0;
}
