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
        float height;
    public:
        //constructors
		Critter();
        Critter(string&);
        Critter(string&, int, int, float = 10);
        //setters
        void setName(string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        void setHeight(float newheight);
        //getters
        string getName();
        int getHunger();
        int getBoredom();
        float getHeight();
};
