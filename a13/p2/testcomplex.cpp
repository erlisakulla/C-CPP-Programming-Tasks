/*
CH-230-A
testcomplex.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include "Complex.h"

using namespace std;

int main() {
    Complex z1, z2;
    ifstream in1, in2;
    ofstream out;
	
	//accessing input files
    in1.open("in1.txt", ios::in);
    in2.open("in2.txt", ios::in);
    
    //creating output file
    out.open("output.txt", ios::out);
    
    //inputting numbers from file
	in1 >> z1; 
    in2 >> z2;
	
	//printing results on the screen
    cout << "z1 + z2 = " << z1 + z2;
    cout << "z1 - z2 = " << z1 - z2;
    cout << "z1 * z2 = " << z1 * z2;
    
    //printing results in the output file
	out << z1 + z2;
    out << z1 - z2;
    out << z1 * z2;
	
	//closing files
    in1.close();
    in2.close();    
	out.close();
	
	return 0;
}
