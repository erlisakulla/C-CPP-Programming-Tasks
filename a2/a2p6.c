#include<stdio.h>

/*
CH-230-A
a2p6.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

int main(){
	double x, y;
	printf("Enter two doubles:\n");
	scanf("%lf %lf", &x, &y);
	double *ptr_one, *ptr_two, *ptr_three;
	ptr_one = &x;
	ptr_two = &x;
	ptr_three = &y;
	printf("%p\n", *ptr_one);
	printf("%p\n", *ptr_two);
	printf("%p\n", *ptr_three);
	
	return 0;

}
