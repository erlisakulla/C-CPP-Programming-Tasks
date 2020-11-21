/*
CH-230-A
a9p6.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string name;
	cout << "Player name: \n";
	getline(cin, name);
	
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 100 + 1; //random number between 1 and 100
	cout << "Welcome to the guessing game. \n\n";

	do {
		cout << "Enter a guess between 1 and 100: ";
		cin >> guess;
		tries++;
		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCongratulations" << name << "! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}
