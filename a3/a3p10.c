/*
CH-230-A
a3p10.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
float product(float a, float b){ //return the product of the values
	float prod = a*b;
	return prod;
}
	
void productbyref(float a, float b, float *p){ 	
	*p = a*b;	//multiplying the two variables
	printf("%f", *p);
}

void modifybyref(float *a, float *b){
	//adding 3 to the first float and 11 to the second float
	*a += 3;
	*b += 11;
	float diff = *a - *b;//substracting the new values	
	printf("%f", diff);
}
	
int main(){
	float a, b, prod;
	scanf("%f", &a);
	scanf("%f", &b);
	
	
	printf("The product is: %f", product(a, b));
	
	printf("\nProduct of values by reference is: ");
	productbyref(a, b, &prod);
	
	printf("\nThe difference is: ");
	modifybyref(&a, &b);
	
	return 0;
}
	
