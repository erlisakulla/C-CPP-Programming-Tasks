/*
CH-230-A
testTournamentMember.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

int main() {
	//using parametric constructor
	TournamentMember a((char*)"Erlisa", (char*)"Kulla", (char*)"2001-06-10", "Player", "JUB");
	a.printData();
	cout << endl;
	
	//using empty constructor
	TournamentMember b;
	//setting up some data
	b.changeLocation("Germany");
	b.setFirstName((char*)"Thomas");
	b.setLastName((char*)"Mueller");
	b.setBirthday((char*)"1989-09-13");
	b.setRole("Football player");
	b.setTeam("Bayern Munchen");
	b.printData();
	cout << endl;
	
	//using copy constructor
	TournamentMember c(b);
	//changing some data
	c.setFirstName((char*)"Robert");
	c.setLastName((char*)"Lewandowski");
	c.setBirthday((char*)"1988-08-21");
	c.printData();
	cout <<endl;
	
	return 0;
}
