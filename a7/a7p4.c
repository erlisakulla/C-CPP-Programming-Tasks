/*
CH-230-A
a7p4.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//capitalizing all letters
char* upper(char* str) {
	int i;
    for (i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
    return str;
}

//converting to lower case
char* lower(char* str) {
	int i;
    for (i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
    return str;
}

//revering the cases
char* reverse(char* str) {
	int i;
    for (i = 0; str[i]; i++) {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    return str;
}

//quitting the program
char* quit() {
	exit(0);
}

//creating array of function pointers
char* (*Case[4])(char* myStr) = {upper, lower, reverse, quit};

int main() {
    char str[150], arr[150], copyStr[150];
    int n;
    fgets(str, sizeof(str), stdin);
    strcpy(copyStr, str);
	
	//looping for user input
    while(1) {
        fgets(arr, sizeof(arr), stdin);//command numbers
        sscanf(arr, "%d", &n);
        strcpy(copyStr, str);
        printf("%s", (*Case[n - 1])(copyStr));
    }

    return 0;
}
