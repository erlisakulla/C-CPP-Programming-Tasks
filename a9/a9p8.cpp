/*
CH-230-A
a9p8.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
using namespace std;

//swapping integers
void swapping(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//swapping floats
void swapping(float &a, float &b) {
	float temp = a;
	a = b;
	b = temp;
}

//swapping char pointers
void swapping(const char* &a, const char* &b) {
	const char *temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int a = 7, b = 15;
	float x = 3.5, y = 9.2;
	const char *str1 = "One";
	const char *str2 = "Two";
	
	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;
	
	swapping(a, b);
	swapping(x, y);
	swapping(str1, str2);
	
	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;
	return 0;
}
