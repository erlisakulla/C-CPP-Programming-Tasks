/*
CH-230-A
TournamentMember.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;

//defining location
string TournamentMember::location = "Albania";

//----TournamentMember class----//
//parametric constructor
TournamentMember::TournamentMember(char* fn, char* ln, char* bd, const string& rl,  
								   const string& tm) {
	cout << "Calling parametric constructor..." << endl;
	//using strcpy since for loops was causing me problems
	strcpy(firstName, fn);
	strcpy(lastName, ln);
	strcpy(birthday, bd);
	role = rl;
	team = tm;
}

//empty constructor
TournamentMember::TournamentMember() {
	cout << "Calling empty constructor..." << endl;

	strcpy(firstName, "default");
	strcpy(lastName, "default");
	strcpy(birthday, "default");
	role = "default";
	team = "default";
}

//copy constructor
TournamentMember::TournamentMember(const TournamentMember& src) {
	cout << "Calling copy constructor..." << endl;
	//since somevariables are declared as arrays 
	//they can't be directly copied to the class instance
	strcpy(firstName, src.firstName); 
	strcpy(lastName, src.lastName);
	strcpy(birthday, src.birthday);
	role = src.role;
	team = src.team;
	location = src.location;
}

//destructor
TournamentMember::~TournamentMember() {
	cout << "Calling " << firstName << "'s destructor..." << endl;
}

//other methods
void TournamentMember::printData() {
	cout << "First Name: " << firstName << endl; 
	cout << "Last Name: " << lastName << endl;
	cout << "Birthday: " << birthday << endl;
	cout << "Role: " << role << endl;
	cout << "Team: " << team << endl;
	cout << "Location: " << location << endl;
}

void TournamentMember::changeLocation(const string& newlocation) {
	location = newlocation;
}

//----Player class----//
//constructors
Player::Player(char* fn, char* ln, char* bd, const string& rl,  
		   const string& tm, int n, const string& p, int g, const string& f) 
		   : TournamentMember(fn, ln, bd, rl, tm) {
	cout << "Calling player parametric constructor." << endl;
	
	number = n;
	position = p;
	ngoals = g;
	foot = f;	   	
}

Player::Player() : TournamentMember((char*)"", (char*)"", (char*)"", "", "") {
	cout << "Calling player empty constructor." << endl;	
	
	number = 0;
	position = "";
	ngoals = 0;
	foot = "";
}

Player::Player(const Player& src) : TournamentMember(src) {
	cout << "Calling player copy constructor." << endl;

	number = src.number;
	position = src.position;
	ngoals = src.ngoals;
	foot = src.foot;
}

//destructor
Player::~Player() {
	cout << "Calling player destructor." << endl;
}

//increasing number of goals method
void Player::incGoals(int add) {
	ngoals += add;
}

//print method
void Player::printPlayer() {
	//calling print function from superclass
	TournamentMember::printData();
	cout << "Number: " << number << endl;
	cout << "Position: " << position << endl;
	cout << "Number of goals: " << ngoals << endl;
	cout << "Foot: " << foot << endl;
}

//----Referee class----//
//constructor
Referee::Referee() {
    cout << "Calling Referee default constructor." << endl;
    yellowCardCount = 0;
    redCardCount = 0;
}

//destructor
Referee::~Referee() {
    cout << "Calling Referee destructor." << endl;
}

//yellow card
bool Referee::addToYellowCardList(Player *p) {
    int index = 0;
    
	do {
		//if player is already in yellow card list return false
        if (yellowCardList[index] == p) {
            for (int i = index; i < yellowCardCount; i++) {
            	//removing player from yellow card list by equaling
            	//current element to the consequent one
                yellowCardList[i] = yellowCardList[i + 1];
            }
            addToRedCardList(p); //adding player to red card list
            yellowCardCount--; //decrementing the yellow card count
            
            return false; //returning false
        }
        index++;
    } while (index < yellowCardCount);
    
    //otherwise add the player to the list and return true
    yellowCardList[yellowCardCount] = p;
    yellowCardCount++; //increment yellow card count
    
    return true;
}

//red card
bool Referee::addToRedCardList(Player *p) {
	int index = 0;
	
	// if player is already in red card list return false
    do {
        if(redCardList[index] == p)
        	//do nothing
            return false;
    	index++;
    } while (index < redCardCount);
    
	//otherwise add player to the list and return true
    redCardList[redCardCount] = p;
    redCardCount++; //incrementing red card count
    
    return true;
}
