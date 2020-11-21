/*
CH-230-A
a3p5.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char c;
	int n, i;
	double temp[100];
	
	printf("Enter a character:\n");
	scanf("%c", &c);
	printf("Enter an integer:\n");
	scanf("%d", &n);
	
	printf("Enter %d temperature values:\n", n);
	
	double sum = 0;
	for(i = 0; i < n; i++){
		scanf("%lf", &temp[i]); //entering n temperature values
		sum = sum + temp[i]; //calculatig the sum of the temperatures
	}
	
	
	switch (c){
		case 's': printf("The sum is: %lf\n", sum); //printing the sum
				break;
		case 'p': printf("List of temperatures in Celcius:\n");
			//printing the list of temperatures in celcius degrees
				for(i = 0; i < n; i++)
				printf("%lf\n", temp[i]);
				break;
		case 't': printf("List of temperatures in Fahrenheit:\n");
			//printing the list of temperatures in celcius degrees		
				for(i = 0; i < n; i++)
				printf("%lf\n", 9/5*temp[i]+32);
				break;
		default: printf("The arithmetic average is: %lf\n", sum/n);
			//calculating and printing the average of temperatures
				break;
	}
	
	return 0;
	
}

