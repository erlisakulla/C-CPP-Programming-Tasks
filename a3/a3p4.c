/*
CH-230-A
a3p4.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include<string.h>

/*
The index was always 0 because there was no condition for idx
to stop or increase based on the length of the string
*/



int position(char str[], char c)
{
	int idx;
	/* Loop until end of string */
	for (idx = 0; idx < strlen(str); idx++){ 
	//using the function strlen(str) will help as a stopping condition for idx
		if(str[idx]==c){
			return idx;
		}
	}
	/* do nothing */
	return -1;
}
int main() {
	char line[80];
	while (1) {
		printf("Enter string:\n");
		fgets(line, sizeof(line), stdin);
		printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
	}
}
