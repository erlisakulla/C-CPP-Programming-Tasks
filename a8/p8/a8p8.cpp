/*
CH-230-A
a8p8.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h> 
#include <stdlib.h> 

int main() { 
   //opening two files to be merged 
   FILE *fp1 = fopen("text1.txt", "r"); 
   FILE *fp2 = fopen("text2.txt", "r"); 
  
   //opening file to store the result 
   FILE *fp3 = fopen("merge12.txt", "w"); 
   char c; 
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL) { 
         puts("Could not open files"); 
         exit(0); 
   } 
  
   //copying contents of first file to merge12.txt 
   while ((c = fgetc(fp1)) != EOF) 
      fputc(c, fp3); 
  
   //copying contents of second file to merge12.txt 
   while ((c = fgetc(fp2)) != EOF) 
      fputc(c, fp3); 
  
   printf("Merging complete.\n"); 
  
  	//closing files
   fclose(fp1); 
   fclose(fp2); 
   fclose(fp3); 
   return 0; 
} 
