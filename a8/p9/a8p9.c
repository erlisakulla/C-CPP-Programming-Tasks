/*
CH-230-A
a8p9.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char file_name[100];
    char c;
    int count = 0; 
    
	fgets(file_name, sizeof(file_name), stdin);//inputting the file name
    file_name[strlen(file_name) - 1] = '\0';//remving the \n at the end

    //opening the file with the inputted name
    FILE *pfile;
    pfile = fopen(file_name, "r");
    if(pfile == NULL) {
        printf("The file is not found\n");
        exit(1);
    }//error message for when file doesn't exist
    
    //counting the number of words in the file
    while ((c = getc(pfile)) != EOF) {
        if (c == ' ' || c == ',' || c == '?' || c == '!' ||
            c == '.' || c == '\r' || c == '\t' || c == '\n') { 
                 count++;
                 c = getc(pfile);
                 while (c == ' ' || c == ',' || c == '?' || c == '!' ||
                        c == '.' || c == '\r' || c == '\t' || c == '\n') {
                        c = getc(pfile);
                }
            }
    }

    printf("%d\n", count);
    fclose(pfile);
    return 0;
}
