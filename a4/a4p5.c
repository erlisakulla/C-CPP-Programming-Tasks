/*
CH-230-A
a4p5.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

//function for counting consonants
int count_consonants(char str[]){
	int vowel, cons;
	char *p;
	p = str;
	
	while(*p){
        if(*p =='a' || *p=='e' || *p=='i' || 
			*p=='o' || *p=='u' || *p=='A' || 
			*p=='E' || *p=='I' || *p=='O' || 
			*p=='U'){
            	vowel++;
        }
        else if((*p>='a' && *p<='z') || (*p>='A' && *p<='Z')){
            cons++;
       	}
	}
    return cons;//returning number of consonants
}

int main(int argc, char* argv[]){
	char word[100];
	int len = strlen(word);
	//program takes input util the string is not empty
    while (len > 0){
        fgets(word, sizeof(word), stdin);
        if (word[0] != '\n'){
            printf("Number of consonants=%d\n", count_consonants(word));
		}
        if (word[0] == '\n' && word[1] == '\0'){
        	break;//if the string is empty the program breaks
		}
    }
	
	return 0;
}
