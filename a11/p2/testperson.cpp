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
    //creating class instances by calling the 
	//default/empty constructor
	Person p1, p2, p3; 
    string name; 
    int age;
    double height, weight;
    
    cout << "INPUT " << endl;
    
	//using parametric constructor
	p3 = Person("Anna", 22, 175.4, 60.2);
    cout << "Name: " << p3.getName() << endl;
	cout << "Age: " << p3.getAge() << endl;
	cout << "Height (m): " << p3.getWeight() << endl;
	cout << "Weight (kg): " << p3.getHeight() << endl;
	cout << endl;
	
	//getting input from user
	cout << "Name: ";
	getline(cin, name);
	p1.setName(name);
	cout << "Age: ";
	cin >> age;
	p1.setAge(age);
	cout << "Height (m): ";
	cin >> height;
	p1.setHeight(height);
	cout << "Weight (kg): ";
	cin >> weight;
	p1.setWeight(weight);
	cout << endl;
	
	//copy constructor
	p2 = Person(p1);
	
	//printing the data using the copy constructor
	cout << "Your data:" << endl;
	cout << "NAME	" << p2.getName() << endl;
	cout << "AGE	" << p2.getAge() << endl;
	cout << "HEIGHT	" << p2.getHeight() << endl;
	cout << "WEIGHT	" << p2.getWeight() << endl;
	cout << endl;
	cout << "Saving..." << endl;

    return 0;
}
