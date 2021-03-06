/*
CH-230-A
Person.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <string>
using namespace std;

class Person {
    private:
    	//initializing variables
        string name;
        int age;
        double height;
        double weight;
    public:
    	//constructors
    	Person(); //empty
    	Person(const string, const int, const double, const double); //parametric
    	Person(const Person&); //copy
    	//Person::~Person();
        //setter methods
        void setName(string& newname);
        void setAge(int newage);
        void setHeight(double newheight);
        void setWeight(double newweight);
        //getter methods
        string getName();
        int getAge();
        double getHeight();
        double getWeight();
};
