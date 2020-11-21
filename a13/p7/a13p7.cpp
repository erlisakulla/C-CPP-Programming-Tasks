/*
CH-230-A
a13p7.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>       // std::cerr
#include <stdexcept>      // std::out_of_range
#include <vector>         // std::vector

using namespace std;

int main (void) {
	vector <int> myvector;
	//pushing 8, 20 times into the vector
	for (int i = 0; i < 20; i++) 
    	myvector.push_back(8);
    	
	try {
		//trying to access 21st element
		cout << myvector.at(20) << endl; 
	}
	catch (const out_of_range& oor) {
    	cerr << "Error: " << oor.what() << '\n';
	}
	return 0;
}
