/*
CH-230-A
a6p5.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/
#include <stdio.h>

int main(){
	unsigned char c;
	scanf("%c", &c);
	int i, size;
	for(size = 0; (1 << size) <= c; size++);//checking for the number of bits
	printf("The decimal representation is: %d\n", c); //printing the decimal value
	printf("The backwards binary representation is: ");
	for(i = 0; i < size; i++){ //reversing the binary digit order
		(c & 1 << i) ? printf("1") : printf("0");
	}
	printf("\n");
	
	return 0;
}
