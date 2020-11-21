#include <stdio.h>

/*
CH-230-A
a1p2.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

int main() {
	int result; /* The result of our calculation */
	result = (2 + 7) * 9 / 3;
	printf("The result is %d\n", result); 
	return 0;
}

/* Without writting "result" on the second argument of the print function,
the program will print the integer 1073745604 (depending on the computer system),
but not the correct result since no output integer is defined in the print line. 
The correct result is 27. */
