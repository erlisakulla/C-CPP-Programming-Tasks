/*
CH-230-A
a1p3.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h> //To avoid compilation errors there should be # before this line

int main() {
	float result; /* The result of the division */
	int a = 5;
	float b = 13.5; //an integer can't have a decimal place, this could also be a double
	result = a / b;
	printf("The result is %f\n", result); //the specifier should be %f since the result is a float
	return 0;
}

//The correct result is 0.370370
