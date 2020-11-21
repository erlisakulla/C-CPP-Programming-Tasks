/*
CH-230-A
a13p8.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <exception>

using namespace std;

//own exception class
class OwnException: public exception {
    public:
        const char* what() {
            return "OwnException\n";
        }
};

//function that throws values
void throw_exception(int exception) {
    switch(exception) {
        case 1:
            throw 'a';
            break;
        case 2:
            throw 12;
            break;
        case 3:
            throw true;
            break;
        default:
            throw OwnException();
            break;
    }
}

int main() {
	//trying the function 4 times
	for (int i = 0; i < 4; i++){
	    try {
	        throw_exception(i);
	    }
	    catch (OwnException& exc) {
	        cerr << "Caught in main: " << exc.what();
	    }	    
		catch (char exc) {
	        cerr << "Caught in main: " << exc << endl;
	    }
	    catch (int exc) {
	        cerr << "Caught in main: " << exc << endl;
	    }
	    catch (bool exc) {
	        cerr << "Caught in main: " << exc << endl;
	    }
	}
	
    return 0;
}
