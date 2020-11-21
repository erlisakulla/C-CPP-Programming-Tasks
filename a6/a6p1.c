/*
CH-230-A
a6p1.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

//Defining macro to swap two numbers
#define SWAP1(x, y, int) int t; t = x; x = y; y = t;
#define SWAP2(x, y, double) double a; a = x; x = y; y = a;

int main(){
    int num1, num2;
	double num3, num4;
    //Input two numbers from users
    scanf("%d%d", &num1, &num2);
    scanf("%lf%lf", &num3, &num4);
	//calling the SWAP macro
    SWAP1(num1, num2, int);
    SWAP2(num3, num4, double);

    printf("After swapping:\n%d\n%d\n%lf\n%lf\n", num1, num2, num3, num4);

    return 0;
}
