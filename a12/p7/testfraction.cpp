/*
CH-230-A
testfractions.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
	Fraction a, b, c;
	
    cin >> a;
    cin >> b;
    cout << endl;
    
    cout << "FRACTION 1: " << a;
    cout << "FRACTION 2: " << b << endl; 
    
    cout << "PRODUCT: " << a * b;
	cout << "QUTIENT: " << a / b;
	cout << "SUM: " << a + b;
	cout << "DIFFERENCE: " << a - b;
	cout << "COMPARISON: " << endl;
	a > b;
	a < b;
	
	c = a;
	cout << "\nFRACTION 3: " << c;

	return 0;
}
