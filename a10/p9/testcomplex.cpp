/*
CH-230-A
testcomplex.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    double real, imaginary;
    Complex z1, z2, z3;

    //z1
    cout << "Re(z1) = ";
    cin >> real;
    z1.setReal(real);
    cout << "IM(z1) = ";
    cin >> imaginary;
    z1.setImaginary(imaginary); //setter method

    //z2
    cout << "Re(z2) = ";
    cin >> real;
    z2.setReal(real);
    cout << "Im(z2) = ";
    cin >> imaginary;
    z2.setImaginary(imaginary);
    cout << endl;

    //printing the numbers
    cout << "Your numbers are:\n";
    cout << "z1 = ";
    z1.print();
    cout << "z2 = ";
    z2.print();
    cout << endl;

    //printing the conjugates of the numbers
    cout << "Conjugates:\n";
	cout << "z1* = ";
    z1.conjugate();
    cout << "z2* = ";
    z2.conjugate();
    cout << endl;

	cout << "Some operations with your numbers:\n";
    //sum
    z3 = z1.sum(z2);
    cout << "z1 + z2 = ";
    z3.print();

    //difference
    z3 = z2.dif(z1);
    cout << "z1 - z2 = ";
    z3.print();

    //multiplication
    z3 = z1.prod(z2);
    cout << "z1 * z2 = ";
    z3.print();

    return 0;
}
