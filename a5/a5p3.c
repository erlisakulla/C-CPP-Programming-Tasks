/*
CH-230-A
a5p3.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_lower(char* str){
	int count = 0;
	while(*str!='\0'){
		if (*str >='a' && *str<='z'){
			count ++;
		}
		*str++;
	}
	return count;
}

int main (int argc, char* argv[]){
	char str [150];
	int len = strlen(str);
	
	while (len > 0){
        fgets(str, sizeof(str), stdin);
        if (str[0] != '\n'){
            printf("Number of lowercase characters: %d\n", count_lower(str));
		}
        if (str[0] == '\n' && str[1] == '\0'){
        	break;//if the string is empty the program breaks
		}
    }
	
	return 0;
}
