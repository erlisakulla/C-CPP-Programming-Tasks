#include <stdio.h>

/*
CH-230-A
a2p10.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

int main(){
	int n;
	int i = 2;
    printf("Enter an integer:\n");
    scanf("%d", &n);
	
	while (n<0){
		scanf("%d", &n);
	}
	if (n>=0){
		printf("1 day = 24 hours\n");		
		while (i<=n){
    	printf("%d days = %d hours\n", i, i*24);
   		i++;
		}
	}
	
	
	return 0;
}
