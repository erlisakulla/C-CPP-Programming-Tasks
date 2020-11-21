/*
CH-230-A
a6p1.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

#define LSB(A) A&1


int main(){
	unsigned char c;
	scanf("%c", &c);
	printf("The decimal representation is: %d\n", c);
		if(LSB(c))
			printf("The least significant bit is: 1\n");
		else\
			printf("The least significant bit is: 0\n");
	return 0;
}
