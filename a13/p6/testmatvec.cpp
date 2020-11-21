/*
CH-230-A
testmatvec.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

int main() {
    Vector vec;
    Matrix mat;
    ifstream in1,in2;
    ofstream out;

	//opening files
    in1.open("in1.txt");
    if(!in1) {
        cerr << "File not found." << endl;
    }
    
	in2.open("in2.txt");
    if(!in2) {
        cerr << "File not found." << endl;
    }

	out.open("out.txt", ios::out);
    if(!out) {
        cerr << "File not found." << endl;
    }
	
	//inputting numbers from files
    in1 >> vec;
    in2 >> mat;
    
    //outputing product results
    
    //vector * matrix
    out << vec << endl;
	out << " * " << endl << mat << " = " << endl;
	out << vec * mat << endl << endl;
	//matrix * vector
    out << mat << " * " << endl;
	out << vec << endl << " = " << endl;
	out << mat * vec << endl;
	
	cout << "Check output file for results.";

    return 0;
}
