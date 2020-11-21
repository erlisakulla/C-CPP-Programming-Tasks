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
        double hunger;
        int boredom;
        int height;
    public:
        //constructors
		Critter();
        Critter(string&);
        Critter(string&, int, int, int = 10);
        //setters
        void setName(string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        void setHeight(int newheight);
        //getters
        string getName();
        double getHunger();
        int getBoredom();
        int getHeight();
};
