/*
CH-230-A
a3p3.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm){
	float km;
	km = (float)cm/100000;
	return km;
}

int main() {
	int a;
	scanf("%d", &a);
	printf("Result of conversion: %f\n", convert(a));
	
	return 0;
}
