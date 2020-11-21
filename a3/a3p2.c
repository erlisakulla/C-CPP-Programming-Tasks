/*
CH-230-A
a3p2.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char ch;		
	scanf("%c", &ch);
	int n;
	scanf("%d", &n);
	int i;
	
	for	(i=0; i<=n; i++){
		printf("%c\n", ch-i);
	}
	
	return 0;
}
