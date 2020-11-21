#include<stdio.h>

/*
CH-230-A
a2p3.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

int main(){
	int weeks, days, hours, total;
	printf("Enter number of weeks:");
	scanf("%d", &weeks);
	printf("Enter number of days:");
	scanf("%d", &days);
	printf("Enter number of hours:");
	scanf("%d", &hours);
	total = hours + days*24 + weeks*7*24;
	printf("The total number of hours is: %d\n", total);	
	
	return 0;
}
