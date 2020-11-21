/*
CH-230-A
Critter.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <string>
using namespace std;

class Critter {
    private:
        string name;
        int hunger;
        int boredom;
        double height;
        double thirst;
    public:
		//constructors
        Critter();
        Critter(string&);
        Critter(string&, int, int, double = 10, double = 10);
        //setters
        void setName(string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        void setHeight(double newheight);
        void setThirst(double newthirst);
        //getters
        string getName();
        int getHunger();
        int getBoredom();
        double getHeight();
        double getThrist();
};
