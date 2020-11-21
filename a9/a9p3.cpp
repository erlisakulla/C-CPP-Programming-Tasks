/*
CH-230-A
a9p3.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
using namespace std;

//absolute value function
float absvalue(float n) {
	if (n < 0)
		n = -1*n;
	return n;
}

int main() {
	float num;
	cout << "Enter a float: ";
	cin >> num; //inputting number
	cout << absvalue(num) << endl; //calling function and printing result

	return 0;
}


