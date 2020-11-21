/*
CH-230-A
Creature.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

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

//Wizard creature
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();
	private:
		int distFactor;
};

//Albanian creature
class Albanian : public Creature {
	public:
		Albanian();
		void eating_byrek() const;
		~Albanian();
	private:
		int byrek_count;
};

//CS student creature
class CS_Student : public Creature {
	public:
		CS_Student();
		void programming() const;
		~CS_Student();
	private:
		int tasks;
};
