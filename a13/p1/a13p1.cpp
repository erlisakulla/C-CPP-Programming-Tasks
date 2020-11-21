/*
CH-230-A
a13p1.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <bits/stdc++.h>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main() {
	ifstream source;
	ofstream dest;
	char ch, uch;
	char fname1[20], fname2[20], copy[20] = "_copy.txt\0";
	int len = 0;
	
	//opening source file
	cout<<"Enter source file name: ";
	cin >> fname1;
	source.open(fname1);
	if(!source) {
		cout<<"Error in opening source file!";
		return 0;
	}
	
	//creating the name of the copy file
	strcpy(fname2, fname1);
    while (fname2[len] != '.') {
    	len++;
	}   
    for(int i = 0; copy[i] != '\0'; i++) {
        fname2[len++] = copy[i];
    }
    fname2[len] = '\0';
	
	//creating a new file with the new name
	dest.open(fname2, ios::out);   
	if (!dest) { 
    	cout << "Error in creating copy file!"; 
    	return 0; 
	} 
	cout << "Copy file created successfully.\n"; 	
	
	//copying content to newly created file
	while(!source.eof()) {
		ch = (char) source.get();
		uch = ch;
		dest.put(uch);
	}	
	cout << "Content copied successfully.\n";
	
	source.close();
	dest.close();
	
	return 0;
}
