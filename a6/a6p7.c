/*
CH-230-A
a6p6.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

char set3bits(unsigned char c, int b1, int b2, int b3) {
	c |= (1 << (b1));
    c |= (1 << (b2));
    c |= (1 << (b3));
    
    return c;
} 

int main(){
	unsigned char c;
	int i, b1, b2, b3;
	c = getchar();
	scanf("%d%d%d", &b1, &b2, &b3);
	
	printf("The decimal representation is: %d\n", c);
	
	printf("The binary representation is: ");
	
	for(i = 7; i >= 0; i--){ //reversing the binary digit order
		(c & 1 << i) ? printf("1") : printf("0");		
	}
	printf("\n");
	
	printf("After setting the bits: ");

	for(i = 7; i >= 0; i--) {
        ((set3bits(c, b1, b2, b3) >> i) & 1) ? printf("1") : printf("0");
    }
    printf("\n");

	return 0;
}
