/*
CH-230-A
testperson.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main() {
    Person p;//instantiating class
    string name; 
    int age;
    double height, weight;
    
    cout << "Input personal data" << endl;
	
	cout << "Name: ";
	getline(cin, name);
	p.setName(name);
	cout << "Age: ";
	cin >> age;
	p.setAge(age);
	cout << "Height (m): ";
	cin >> height;
	cout << "Weight (kg): ";
	cin >> weight;
		
		cout << p.getName() << ", your BMI is: " << p.getWeight()/p.getHeight()*p.getHeight() << endl;

    return 0;
}
