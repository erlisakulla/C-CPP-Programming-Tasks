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
	Player a((char*)"Erlisa", (char*)"Kulla", (char*)"2001-06-10", "Player", 
			 "JUB", 16, "Goalkeeper", 0, "right");
	//using empty constructor
	Player b;
	//setting up some data
	b.setFirstName((char*)"Thomas");
	b.setLastName((char*)"Mueller");
	b.setBirthday((char*)"1989-09-13");
	b.setRole("Football player");
	b.setTeam("Bayern Munchen");
	b.setNumber(25);
	b.setPosition("Forward");
	b.incGoals(15);
	b.setFoot("Right");
	
	//using copy constructor
	Player c(b);
	//changing some data
	c.setFirstName((char*)"Robert");
	c.setLastName((char*)"Lewandowski");
	c.setBirthday((char*)"1988-08-21");
	c.setNumber(9);
	c.incGoals(20);
	cout <<endl;
	
	TournamentMember::changeLocation("Hamburg"); //change location
	
	a.printPlayer();
	cout << endl;
	
	b.printPlayer();
	cout << endl;
	
	c.printPlayer();
	cout <<endl;
	
	return 0;
}
