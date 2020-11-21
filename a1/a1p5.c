/*
CH-230-A
a1p4.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

int main() {
	//initiating and declaring variables
	int x = 2138;
	float y = -52.358925;
	char z = 'G';
	double u = 61.295339687;
	//printing results
	printf("x=%9d\n", x); //prints variable over 9 places
	printf("y=%11.5f\n", y); //prints variable over 11 places and 5 decimal digits
	printf("z=%c\n", z); //prints character 
	printf("u=%.7lf\n", u); //prints variable with 7 decimal digits
	
	return 0;
}

