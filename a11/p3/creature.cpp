/*
CH-230-A
creature.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>

using namespace std;

//Creature class
class Creature {
	public:
		Creature();  
		void run() const;
		void sleeping() const;
		~Creature();
	protected:
		int distance;
		int hours;
};

Creature::Creature() : distance(10) {
	hours = 0;
	cout << "Calling Creature constructor.\n";
}

void Creature::run() const { 
    cout << "Running " << distance << " meters!\n";
}  

void Creature::sleeping() const {
	cout << "Sleeping " << hours << " hours!\n";
}

Creature::~Creature() {}

//Wizard creature
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();
	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3) {
	cout << "Calling Wizard constructor.\n";
}  

void Wizard::hover() const {
    cout << "Hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard() {}

//Albanian creature
class Albanian : public Creature {
	public:
		Albanian();
		void eating_byrek() const;
		~Albanian();
	private:
		int byrek_count;
};

Albanian::Albanian() : byrek_count(5) {
	cout << "Calling Albanian constructor.\n";
}

void Albanian::eating_byrek() const {
	cout << "Eating " << byrek_count << " byrek.\n";
}

Albanian::~Albanian() {}

//CS student creature
class CS_Student : public Creature {
	public:
		CS_Student();
		void programming() const;
		~CS_Student();
	private:
		int tasks;
};

CS_Student::CS_Student(): tasks(100) {
	cout << "Calling CS Student constructor.\n";
}

void CS_Student::programming() const {
	cout << "Programming " << tasks << " tasks.\n";
}

CS_Student::~CS_Student() {}

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

	cout << "\nCreating an Albanian.\n";
	Albanian a;
	a.eating_byrek();
	
	cout << "\nCreating a CS Student.\n";
	CS_Student s;
	s.programming();
	s.sleeping();
	
    return 0;
} 
