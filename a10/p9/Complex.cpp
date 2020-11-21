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

//print
void Complex::print() {
    if (imaginary > 0){
    	if (imaginary == 1)
    		cout << real << "+" << "i" << endl;	
		else	
        	cout << real << "+" << imaginary << "i" << endl;
	}
    else if (imaginary < 0){
    	if (imaginary == -1)
    		cout << real << "-" << "i" << endl;
    	else
        	cout << real << imaginary << "i" << endl;
	}
    else if (real)
        cout << real << endl;
}

//conjugate
void Complex::conjugate() {
    if (-imaginary > 0)
        cout << real << "+" << -imaginary << "i" << endl;
    else if (-imaginary < 0)
        cout << real << -imaginary << "i" << endl;
    else
        cout << real << endl;
}

//sum
Complex Complex::sum(Complex complex) {
    complex = Complex(this->real + complex.real, 
					  this->imaginary + complex.imaginary);
    return complex;
}

//difference
Complex Complex::dif(Complex complex) {
    complex = Complex(this->real - complex.real, 
					  this->imaginary - complex.imaginary);
    return complex;
}

//product
Complex Complex::prod(Complex complex) {
    complex = Complex(this->real * complex.real - this->imaginary * complex.imaginary,
                      this->imaginary * complex.real + this->real * complex.imaginary);
    return complex;
}
