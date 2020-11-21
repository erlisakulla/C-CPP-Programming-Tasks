/*
CH-230-A
a12p5.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	//initializing variables
	int count = 0;
	string randColor;
	int randIndex;
	const string colors[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
	
	//initalizing the random seed
	srand(static_cast<unsigned int>(time(0))); 
	
	//ouputting random colors
	while (count < 15) {
		randIndex = rand() % 4;
		randColor = colors[randIndex];
		cout << randColor << endl;
		count++;
	}
	
	return 0;
}
