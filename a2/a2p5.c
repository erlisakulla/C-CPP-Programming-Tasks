/*
CH-230-A
a2p5.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include<stdio.h>

int main(){
	int a;
	printf("Enter an integer:\n");
	scanf("%d", &a);
	printf("%d\n", a);
	
	int *ptr_a = &a;
	printf("%p\n", ptr_a);
	
	*ptr_a = *ptr_a + 5;
	
	printf("%d\n", *ptr_a);
	printf("%p\n", ptr_a);
	
	return 0;
}
