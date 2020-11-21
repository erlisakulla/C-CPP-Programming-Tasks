/*
CH-230-A
TournamentMember.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <string>
#include <iostream>

using namespace std;

class TournamentMember {
	private:
		char firstName[36];
		char lastName[36];
		char birthday[11];
		string role;
		string team;
	public:
		static string location;
		//constructors
		TournamentMember(char*, char*, char*, const string&,  
										  const string&);
		TournamentMember();
		TournamentMember(const TournamentMember&);
		//destructor
		~TournamentMember();
		//other methods
		void printData();
		void changeLocation(const string&);
		//inline setters
		void setFirstName(char* newfirstname){
			for(int i = 0; i < 36; i++)
				firstName[i] = newfirstname[i];
		}
		void setLastName(char* newlastname) {
			for(int i = 0; i < 36; i++)
				lastName[i] = newlastname[i];
		}
		void setBirthday(char* newbirthday) {
			for(int i = 0; i < 11; i++)
				birthday[i] = newbirthday[i];
		}
		void setRole(const string& newrole) {
			role = newrole;
		}
		void setTeam(const string& newteam) {
			team = newteam;
		}
		//inline getters
		char* getFirstName() {
			return firstName;
		}
		inline char* getLastName() {
			return lastName;
		}
		inline char* getBirthday() {
			return birthday;
		}
		string getRole() {
			return role;
		}
		string getTeam() {
			return team;
		}
		string getLocation() {
			return location;
		}		
};


