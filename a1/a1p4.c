/*
CH-230-A
a1p4.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

int main() {	
	//declaring and initiating variables
	int sum, product, difference, remainder;
	float division;
	int x = 17;
	int y = 4;
	//computing results of operations
	sum = x+y;
	product = x*y;
	difference = x-y;
	division = (float) x/y; //parsing variables to get correct result
	remainder = x%y;
	//preinting the results
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	printf("sum=%d\n", sum);
	printf("product=%d\n", product);
	printf("difference=%d\n", difference);
	printf("division=%f\n", division);
	printf("remainder of division=%d\n", remainder);
	
	return 0;	
}
