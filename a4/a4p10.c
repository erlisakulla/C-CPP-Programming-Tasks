/*
CH-230-A
a4p10.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

/*
Write a function void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb) that computes and “returns” by reference the product, the division
of the two floats as well as the result of ab and 1/b.
Also write a simple test program to check that your function works correctly (by printing on the
screen the results from the main() function).
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *powr, float *invb){
	*prod = a*b;
	printf("%f", *prod);
	*div = a/b;
	printf("%f", *div);
	*powr = pwr(a, b);
	printf("%f", *powr);
	*invb = 1/b;
	printf("%f", *invb);
}

int main(){
	float a = 5.12;
	float b = 16.3;
	float prod, div, powr, invb;
	
	proddivpowinv(a, b, &prod, &div, &powr, &invb);
	
	return 0;
}
