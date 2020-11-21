/*
CH-230-A
a13p9.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <exception>

using namespace std;

class Motor {
    public:
    	//motor class throwing an exception
        Motor() {
            throw "This motor has problems";
        }
};

class Car {
    public:
    	//catching one exception and throwing another
        Car() {
            try {
                Motor m;
            }
            catch (const char* err) {
                cerr << err << endl;
                throw "The car in this garage has problems with the motor";
            }
        }
};

class Garage {
    public:
    	//since the motor has problems, the car with that motor
    	//will have problems too --> both exeptions are caught
        Garage() {
            try {
                Car c;
            }
            catch (const char* err) {
                throw err; //throwing both exceptions
            }
        }
};

int main() {    
    //both exceptions will be printed
    try {
        Garage g;
    }
    catch (const char* err) {
        cerr << err << endl;
    }

    return 0;
}
