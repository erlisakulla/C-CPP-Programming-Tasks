/*
CH-230-A
a8p6.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>        

int main() // main function should return int
{    

    char ch[2 + 1], fname[20]; // create a buffer with enough size for N_CHARS chars and the null terminating char 

    FILE *f1 = fopen("chars.txt", "r");
    FILE *f2 = fopen("codesum.txt", "r");

    if (fread(ch, 1, 2, f1) == 2) { // check that the desired number of chars was read
        ch[2] = '\0'; // null terminate before printing    
        puts(ch);            // print a string to stdout and a line feed after
    }
    
    char c;
	while ((c = fgetc(f1)) != EOF) 
    	fputc(c, f2); 
	        
    fclose(f1);
    fclose(f2);
    
    return 0;
}

