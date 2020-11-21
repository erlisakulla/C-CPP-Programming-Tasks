/*
CH-230-A
a13p3.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main () {
    char ch, c = '\n';
    ofstream concatn;
    int n;
    
	//creating source file
   concatn.open("concatn.txt");
	if (!concatn) {
        cerr << "Error opening file." << endl;
        return 0;
    }
	
	//number of files to input
    cin >> n;

	//inputting file names
    string file_name[n];
    for (int i = 0; i < n; i++) {
        cin >> file_name[i];
    }    

    for (int i = 0; i < n; i++) {
    	//converting name from string to array of chars
		int len = file_name[i].length(); 
	    char char_array[len + 1]; 
	    strcpy(char_array, file_name[i].c_str());
	    
        //reading files with input names
        ifstream temp;
        temp.open(char_array);
        if (!temp) {
            cerr << "Error opening file." << endl;
            return 0;
        }
        
        //copying file content from temp to concatn
	    while (temp.eof() == 0) {
	    	temp >> ch;
	        concatn << ch;
	    }
	    concatn << c;
	    temp.close();
    }
    concatn.close();
    
    return 0;
}
