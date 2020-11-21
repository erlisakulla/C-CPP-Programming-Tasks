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
//	for(int i = 0; i < 36; i++) {
//		firstName[i] = fn[i];
//		lastName[i] = ln[i];
//	}
//	for(int i = 0; i < 11; i++) {
//		birthday[i] = bd[i];
//	}
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
