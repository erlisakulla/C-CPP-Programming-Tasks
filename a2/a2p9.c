#include <stdio.h>

/*
CH-230-A
a2p9.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

int main(){
	char a;
   //printf("Enter a character:\n");
    scanf("%c", &a);
       if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("%c is a letter\n", a);
    }
    else if(a >= '0' && a <= '9')
    {
        printf("%c is a digit\n", a);
    }
    else 
    {
        printf("%c is some other symbol\n", a);
    }
}
