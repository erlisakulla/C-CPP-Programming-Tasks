/*
CH-230-A
a9p4.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

int mycount(int a, int b) {
	return b - a; //returning difference
}

int mycount(char c, string s) {
	int count = 0;
	for (int i = 0; i < s.length(); i++)
    	if (s[i] == c) count++;//counting occurrences
    
	return count;
}

int main() {
	int a, b;
	char c;
	string s;

	cout << "Enter first number:\n";
	cin >> a;
	cout << "Enter second number:\n";
	cin >> b;
	cout << "Difference:\n";
	cout << mycount(a, b) << endl; //calling the function

	cout << "Enter a character:\n";
	cin >> c;
	getchar();
	cout << "Enter a string:\n";
	getline(cin, s);
	cout << "Number of occurrences:\n";
	cout << mycount(c, s) << endl; //calling the function

	return 0;
}
