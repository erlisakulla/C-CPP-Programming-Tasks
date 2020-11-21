/*
CH-230-A
Fractions.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

//output
ostream& operator<<(ostream& out, const Fraction& f) {
	out << f.num << "/" << f.den << endl;
	
	return out;
}

//input
istream& operator>>(istream& in, Fraction& f) {
	cout << "Enter Numerator: ";
	in >> f.num;
	cout << "Enter Denominator (not 0): ";
	in >> f.den;
	
	return in;
}

//multiplication
Fraction Fraction::operator * (const Fraction& f) {
	Fraction prod;
	
	prod.num = num * f.num;
	prod.den = den * f.den;
	
	return prod;
}

//division
Fraction Fraction::operator / (const Fraction& f) {
	Fraction div;
	
	div.num = num * f.den;
	div.den = den * f.num;
	
	return div;
}
