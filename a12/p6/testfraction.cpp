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
	Fraction a,b;
    cin >> a;
    cin >> b;
    cout << "Product: " << a * b;
	cout << "Quotient: " << a / b;

	return 0;
}
