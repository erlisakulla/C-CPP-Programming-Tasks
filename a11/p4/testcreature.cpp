/*
CH-230-A
testcreature.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>

using namespace std;

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

	cout << "\nCreating an Albanian.\n";
	Albanian a;
	a.eating_byrek();
	
	cout << "\nCreating a CS Student.\n";
	CS_Student s;
	s.programming();
	s.sleeping();
	
    return 0;
} 
