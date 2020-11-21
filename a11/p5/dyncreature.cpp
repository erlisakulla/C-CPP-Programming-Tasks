/*
CH-230-A
dyncreature.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>
#include <cstring>


using namespace std;

int main() { 
    while(1) { //creating endless loop
        Creature c;
        string choice;
        
        cout << "Enter your choice:" << endl;
        getline(cin, choice);

        if (choice == "wizard") {
            Wizard* w; //dynamically creating object
            w = new Wizard;
            cout << "Creating a Wizard." << endl;
            w->hover();
            delete w;
            cout << endl;
        }
        else if (choice == "albanian") {
            Albanian* a;
            a = new Albanian;
            cout << "Creating an Albanian." << endl;
            a->eating_byrek();
            delete a;
            cout << endl;
        }
        else if (choice == "cs student") {
            CS_Student* s;
            s = new CS_Student;
            cout << "Creating a CS Student." << endl;
            s->programming();
            s->sleeping();
            delete s;
            cout << endl;
        }
        else if (choice == "quit"){
        	break;
		}
    }
	
    return 0;
} 
