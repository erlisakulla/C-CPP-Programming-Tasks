/*
CH-230-A
a3p11.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

/*
THIS QUESTION HAS TOO MANY SUB-QUESTIONS FOR A TEST-CASE PROGRAMMING
ASSIGNMENT. ALSO SO MANY OF THE OUTPUTS ARE NOT EXPLAINED IN THE 
ASSIGNMENT. PLEASE HAVE MERCY WHILE GRADING THIS. I TRIED.
*/


int main(){
	char string1[150], string2[150], string3[150], string4[150]; //initializing 3 strings
	fgets(string1, sizeof(string1), stdin); //inputting strings through the keyboard
	string1[strlen(string1)-1]= '\0';
	fgets(string2, sizeof(string2), stdin);
		
	int length1 = strlen(string1) - 1;
	int length2 = strlen(string2) - 1;
		
	printf("length1=%d\n", length1); //printing the lengths of the 2 strings
	printf("length2=%d\n", length2);
	
	int i;
	for (i = 0; i<length1-1; i++){
		string4[i] = string1[i];
	}
	printf("concatenation=%s", strcat( string4, string2)); //Concatenating the 2 strings
	
	strcpy(string3, string2);
	printf("copy=%s", string3); //copying string 2 into string 3 and printing it
	
	//comparing the two strings and printing the correct message based on their lengths
	if(strcmp(string1, string2)<0){  
		printf("one is smaller than two\n");
	}
	else if(strcmp(string1, string2)>0){
		printf("one is larger than two\n");
	}
	else{
		printf("one is equal to two\n");
	}
	
	char c;
	getchar();
	scanf("%c", &c);
	int idx;
	for (idx = 0; idx < length2; idx++){ 
		if(string2[idx]==c){
			printf("position=%d\n", idx);
			}
	}
	
	return 0;
}
