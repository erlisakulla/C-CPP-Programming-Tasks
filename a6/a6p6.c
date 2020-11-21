/*
CH-230-A
a6p6.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

//recursive function to convert to binary
void binary(unsigned n){ 
    if (n > 1){
   	    binary(n >> 1); 
	}
    printf("%d", n & 1); 
}

int main(){
	unsigned char c;
	scanf("%c", &c);
	printf("The decimal representation is: %d\n", c); //printing the decimal value
	printf("The binary representation is: ");
	binary(c); //calling the function
	
	return 0;
}
