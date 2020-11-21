/*
CH-230-A
City.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <string>
using namespace std;

class City {
    private:
    	//initializing variables
        string name;
        int inhabitants;
        string mayor;
        double area;
    public:
        //setter methods
        void setName(string& newname);
        void setInhabitants(int newinhabitants);
        void setMayor(string& newmayor);
        void setArea(double newarea);
        //getter methods
        string getName();
        int getInhabitants();
        string getMayor();
        double getArea();
};
