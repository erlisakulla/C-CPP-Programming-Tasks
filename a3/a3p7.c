/*
CH-230-A
a3p7.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c){
	int i, j;
	for (i = 1 ; i <= n; i++){ //looping for rows
		for(j = 1; j <= m; j++){ //looping for the number of elements each row
            printf("%c",c);
        }
    	printf("\n");
		m++; //m increases every time the number of rows increases until the base is m+n-1
    }	
}

int main() {
	int n, m; 
	char c;
	scanf("%d",&n);
    scanf("%d",&m);
    getchar();
	scanf("%c",&c);	
	
	print_form(n, m, c); //calling the void function
	
	return 0;
}
	
