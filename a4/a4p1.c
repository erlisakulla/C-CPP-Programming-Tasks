/*
CH-230-A
a4p1.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main(){
	float x, lim, inc; //initializing variables
	scanf("%f", &x);
	scanf("%f", &lim);
	scanf("%f", &inc);
	
	int i;	
	for(i = x; x <= lim; i++){//loop for printing the values in a table
		printf("%.6f %.6f %.6f\n", x, ((x*x)*M_PI), (2*x*M_PI));
		x+=inc; //incrementing the value of x in each loop
	}
	
	return 0;
}
