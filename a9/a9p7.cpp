/*
CH-230-A
a9p7.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

//returns the number that is positive and even
int myfirst(int a[], int n) {
	int yes;
	int no = -1;
	bool conditions_met = false;
	for (int i = 0; i < n; i++) {//checking through the array
		if (a[i] > 0 && a[i] % 2 == 0) {//when conditions are met
			yes = a[i];
			conditions_met = true;
			break; //terminates at first instance
		}
	}
	if (conditions_met == true)
		return yes;
	else 
		return no;
}

//returns first begative number with no fractional part
double myfirst(double a[], int n) {
	double yes;
	double no = -1.1; 
	bool conditions_met = false;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0 && a[i] == (int) a[i]) {
			yes = a[i];
			conditions_met = true;
			break;
		}
	}
	if(conditions_met == true)
		return yes;
	else
		return no;
}

//returns first element that is a consonant
char myfirst(char a[], int n) {
	char yes;
	char no = '0';
	bool conditions_met = false;
	for (int i = 0; i < n; i++) {
		if (a[i] != 'a' || a[i] != 'e' || a[i] != 'i' || a[i] != 'o' || a[i] != 'u' ||
			a[i] != 'A' || a[i] != 'E' || a[i] != 'I' || a[i] != 'O' || a[i] != 'U') {
			yes = a[i];
			conditions_met = true;
			break;	
		}
	}
	if(conditions_met == true)
		return yes;
	else
		return no;	
}

int main() {
	int i, n1, n2, n3;

	cout << "Enter number of integers: ";
	cin >> n1;
	int* int_array = new int[n1]; //dynamically allocating memory 
	for(i = 0; i < n1; i++)
		cin >> int_array[i];//inputting values in the array
	cout << "First positive even integer: " << myfirst(int_array, n1) << endl;

	cout << "Enter number of doubles: ";
	cin >> n2;
	double* double_array = new double[n2]; 
	for(i = 0; i < n2; i++)
		cin >> double_array[i];
	cout << "First negative double with no fractional part: " << myfirst(double_array, n2) << endl;		

	cout << "Enter number of characters: ";
	cin >> n3;
	char* char_array = new char[n3];
	for(i = 0; i < n3; i++)
		cin >> char_array[i];
	cout << "First consonant: " << myfirst(char_array, n3) << endl;

	//dallocating memory
	delete[] int_array; 
	delete[] double_array;
	delete[] char_array;
	return 0;
}
