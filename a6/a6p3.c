/*
CH-230-A
a6p3.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/
#include <stdio.h>

#define MIN(a, b, c) (a<b?(a<c?a:c):(b<c?b:c))
#define MAX(a, b, c) (a>b?(a>c?a:c):(b>c?b:c))
#define MID_RANGE(a, b, c) ((MIN(a, b, c)+MAX(a, b, c))/2.0) //calculating the mid range


int main(){
    float num1, num2, num3;
    //Input three numbers from users
    scanf("%f%f%f", &num1, &num2, &num3);
	printf("The mid-range is: %.6f\n", MID_RANGE(num1, num2, num3));
    return 0;
}
