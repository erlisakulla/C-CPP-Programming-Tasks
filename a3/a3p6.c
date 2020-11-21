/*
CH-230-A
a3p6.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g); //calling the function
int main() {
	
	
	int kilos, grams; 
	scanf("%d", &kilos); //scanning kg and g values from keyboard
	scanf("%d", &grams);
	
	float to_pounds(int kg, int g){ 
		float lb = kg*2.2 + g*0.0022; //conversion operations
		return lb; //returning the converted value
	}
	
	printf("Result of conversion: %f\n", to_pounds(kilos, grams)); 
	//printing the restult of the function using parameters enetered by the user
	
	return 0;
}
