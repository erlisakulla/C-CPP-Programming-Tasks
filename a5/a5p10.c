/*
CH-230-A
a5p10.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

//function for printing n, n-1,...,1
void counting(int n) {
    if (n > 0) {
        int temp = n;
        n--;
        printf("%d\n", temp);
        counting(n);//calling the function with the decremented n
    }
}

int main(){
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	printf("\n");
	counting(n);
	//calling the function in main with user input as parameter
}
