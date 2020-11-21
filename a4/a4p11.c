/*
CH-230-A
a4p11.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
//#include <ctype.h>
#include <string.h>
#include <stdlib.h>


/*
Write a function int count insensitive(char *str, char c) that counts the occurrences
of the character c in the string str in the case insensitive manner (i.e., no difference between uppercase
and lowercase letters). 
Write a program that tests this function. You should be able to
process a string of arbitrary length. 

First you can dynamically allocate a string of maximal length
of 50 characters, then you read the string from the keyboard, then you allocate memory for another
string of the correct size, copy the original string into the new string and then deallocate
the memory occupied by the first string. 

You may use the functions tolower() or toupper()
which are in ctype.h. Use the man page to see how these functions work.
You can safely assume that the input will be valid.
Determine the occurrence of the characters ’b’, ’H’, ’8’, ’u’, and ’$’. For each character the output
should be as follows, for example:
The character ’b’ occurs 3 times.
*/
int count_insensitive(char *str, char c){
	int i = 0;
	int count = 0;
	while (str[i] != '\0') {
		if(str[i]==c){
			count++;
		}
		i++;
	}
	return count;
}

int main(){
	char* arr, *str;
	char c;
	arr=(char*)malloc(50*sizeof(int));
	scanf("%c", arr);
	str=(char*)malloc(strlen(arr)*sizeof(int));
	strcpy(str, arr);
	free(arr);

	//scanf("%c", &c);
	//printf("Occurrence of %c is %d", c, count_insensitive(str, c));
	
}
