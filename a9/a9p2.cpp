/*
CH-230-A
a9p2.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main() {
	int i, n;
	double x;
	string s;

	cout << "Enter an integer:\n";
	cin >> n;
	cout << "Enter a double:\n";
	cin >> x;
	cout << "Enter a string:\n";
	cin >> s;

	for (i = 0; i < n; i++)
		cout << s << ":" << x << endl;

	return 0;
}
