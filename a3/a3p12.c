/*
CH-230-A
a3p11.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int main(){
    //initializing our variables
	char string1[150], string2[150], string3[150], string4[150], c;
	int length1, length2, result;
 
 	//scanning the strings from the keyboard and removing the last
 	//character to make concatenation possible
    fgets(string1, 150, stdin);
    string1[strlen(string1)-1]= '\0';
    fgets(string2, 150, stdin);
    string2[strlen(string2) - 1]= '\0';
    scanf("%c", &c);
 
    strcpy(string4, string1);//copying the first string to another one
 	
 	//printing the lengths of the strings
    length1= strlen(string1);
    length2= strlen(string2);
    printf("length1=%d\n", length1);
    printf("length2=%d\n", length2);
 
 	//concatenating the first two strings
    strcat(string1 , string2);
    printf("concatenation=%s", string1);
 
 	//copying the 2nd tring to the 3rd one
    strcpy(string3, string2);
    printf("\ncopy=%s\n", string3);
	
	//comparing the lengths of the 
    result = strcmp(string4, string2);
    if(result < 0){
        printf("one is smaller than two\n");
		}
    else if(result > 0){
        printf("one is larger than two\n");
    }
    else{
        printf("one is equal to two\n");
    }
 	
 	//finding the position of a charcter in the 2nd string
    char *p = strchr(string2, c);
    char *strchr(const char *p, int c);
    
    if(p== NULL){
        printf("The character is not in the string\n");
    }
    else{
    	char *p2 = string2;
    	while(p!=NULL){
      		printf("position=%ld\n", p - p2);
    		p = strchr(p+1, c);

		}
 	}
 	//finding all occurrences of the charachter in the 2nd string
	/*int i;
	int flag = -1;
	for(i = 0; i <= strlen(string2); i++){
  		if(string2[i] == c){
  			printf("position=%d\n", i);
  			flag++;
 		}
	}
	
	if(flag<0){
 		printf("The character is not in the string\n");
	}
	*/
	return 0;
}
