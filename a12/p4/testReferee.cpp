/*
CH-230-A
testReferee.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
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
 
	//creating a referee instance
    Referee r;
	
	TournamentMember::changeLocation("Hamburg");
	cout << "\nPLAYER 1" << endl;
	a.printPlayer();
	cout << endl;
	
	cout << "PLAYER 2" << endl;
	b.printPlayer();
	cout << endl;
	
	cout << "PLAYER 3" << endl;
	c.printPlayer();
	cout <<endl;
	
    cout << "RED AND YELLOW CARDS" << endl;
    
    cout << "Add player 1 to red card list: " << r.addToRedCardList(&a) << endl;
	cout << "Add player 1 to red card list: " << r.addToRedCardList(&a) << endl;	
	
	cout << "Add player 2 to yellow card list: " << r.addToYellowCardList(&b) << endl;;
	cout << "Add player 2 to yellow card list: " << r.addToYellowCardList(&b) << endl;
	cout << "Add player 2 to red card list: " << r.addToRedCardList(&b) << endl;
	
	cout << "Add player 3 to yellow card list: " << r.addToYellowCardList(&c) << endl;
	cout << "Add player 3 to red card list: " << r.addToRedCardList(&c) << endl;
	cout << "Add player 3 to yellow card list: " << r.addToYellowCardList(&c) << endl;
	
	cout << endl;

    return 0;
}
