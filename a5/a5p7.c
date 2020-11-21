/*
CH-230-A
a5p7.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char string1[100];
	char string2[100];
	char *result;
	//removing the last new line character of the strings	
	fgets(string1, 100, stdin);
	string1[strlen(string1)-1]= '\0';
    fgets(string2, 100, stdin);
    string2[strlen(string2) - 1]= '\0';
	//dynamically allocating memory to the new string
	int len = strlen(string1) + strlen(string2);
    result = (char *)malloc(len * sizeof(int));
    //concatenating strings
	result = strcat(string1, string2);
    printf("Result of concatenation: %s\n", result);
	
    return 0;
}
