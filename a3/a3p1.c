/*
CH-230-A
a3p1.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

int main() {
	float x;
	int i;
	scanf("%f", &x);
	int n;
	scanf("%d", &n);
	
	do{
		printf("Input is invalid, reenter value\n");
		scanf("%d", &n);
	}while(n<=0);
	
	if(n>0){
		for (i=0; i<n; i++){
			printf("%f\n", x);
		}
	}
	return 0;
}
