/*
CH-230-A
a4p2.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	fgets(str, 50, stdin);
	str[strlen(str)-1]= '\0';
	
	int i;

	for(i=0; i<=(strlen(str)-1); i++){
		if(i%2 != 0){//adding a space for each iteration it skips
			printf(" ");
		}
    	printf("%c\n", str[i]); //printing each character in each line
	} 
		
	return 0;
}
