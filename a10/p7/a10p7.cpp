/*
CH-230-A
a10p8.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
	private:
		char *str;
	public:
		//constructor 1
		NaiveString(const char*);
		//copy constructor
		NaiveString(const NaiveString&);
		//destructor
		~NaiveString();
		//setters
		void update(char, char);
		void print();
};

//destructor
NaiveString::~NaiveString() {
	cout << "Calling destructor" << endl;
	delete[] str;
}

//constructor 1
NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
	cout << "Calling constructor 1" << endl;
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	cout << "Calling copy constructor" << endl;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByref(NaiveString& s) {
	cout << "Calling funcByref()" << endl;
	s.update('a', 'b');
	s.print();
}

void funcByVal(NaiveString s) {
	cout << "Calling funcByVal()" << endl;
	s.update('a', 'b');
	s.print();
}

int main(int argc, char** argv) {
	NaiveString a("HaHaHAHAha");
	a.print();
	funcByVal(a);
	cout << endl;

	NaiveString b("HaHaHAHAha");
	b.print();
	funcByref(b);
	
	return 0;
}
