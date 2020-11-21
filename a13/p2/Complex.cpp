/*
CH-230-A
Complex.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
using namespace std;

//constructors
Complex::Complex() {
    real = 0;
    imaginary = 0;
}

Complex::Complex(double newreal, double newimaginary) {
    real = newreal;
    imaginary = newimaginary;
}

Complex::Complex(Complex& src) {
    real = src.real;
    imaginary = src.imaginary;
}

//destructor
Complex::~Complex() {}

//setters
void Complex::setReal(double newreal) {
    real = newreal;
}

void Complex::setImaginary(double newimaginary) {
    imaginary = newimaginary;
}

//getters
double Complex::getReal() {
    return real;
}

double Complex::getImaginary() {
    return imaginary;
}

////print
//void Complex::print() {
//    if (imaginary > 0){
//    	if (imaginary == 1)
//    		cout << real << "+" << "i" << endl;	
//		else	
//        	cout << real << "+" << imaginary << "i" << endl;
//	}
//    else if (imaginary < 0){
//    	if (imaginary == -1)
//    		cout << real << "-" << "i" << endl;
//    	else
//        	cout << real << imaginary << "i" << endl;
//	}
//    else if (real)
//        cout << real << endl;
//}

//conjugate
void Complex::conjugate() {
    if (-imaginary > 0)
        cout << real << "+" << -imaginary << "i" << endl;
    else if (-imaginary < 0)
        cout << real << -imaginary << "i" << endl;
    else
        cout << real << endl;
}


//overloaded input
istream& operator >> (istream& in, Complex& c) {
    in >> c.real; 
    in >> c.imaginary;
    return in;
}

//overloaded output
ostream& operator << (ostream& out, const Complex& c) {
    if (c.imaginary > 0)
        out << c.real << "+" << c.imaginary << "i" << endl;
    else if (c.imaginary < 0)
        out << c.real << c.imaginary << "i" << endl;
    else
        out << c.real << endl;
    return out;
}

//sum
Complex Complex::operator + (const Complex& c) {
    Complex sum;
    sum.real = real + c.real;
    sum.imaginary = imaginary + c.imaginary;

    return sum;
}

//difference
Complex Complex::operator - (const Complex& c) {
    Complex diff;
    diff.real = real - c.real;
    diff.imaginary = imaginary - c.imaginary;

    return diff;
}

//product
Complex Complex::operator * (const Complex& c) {
    Complex prod;
    prod.real = real * c.real - imaginary * c.imaginary;
    prod.imaginary = imaginary * c.real + real * c.imaginary;

    return prod;
}

// overloaded operator =
void Complex::operator = (const Complex& c) {
    real = c.real;
    imaginary = c.imaginary;
}
