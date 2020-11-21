/*
CH-230-A
a9p5.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main() {
	string s, everything;
	bool terminate = true;

	while(terminate) {
		getline(cin, s);
		if (s != "quit")
			everything = everything + s;
		else 
			terminate = false;
	}

	cout << everything << endl;

	return 0;
}
