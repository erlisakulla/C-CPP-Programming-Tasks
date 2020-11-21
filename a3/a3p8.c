/*
CH-230-A
a3p8.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
 
float sum(float t[], int n){//sumfunction
    int i;
    float sum = 0;
    for (i = 0; i < n ; i++){ 
        sum += t[i];
    }
    return sum;
}
 
float average(float t[], int i){   
	float avg = sum(t, i)/i; 
	//finding the average using the presious sum function
	return avg;
}
 
int main(){
    float values[10];
    int n = 0;
 
    while (n < 10){ //entering up to 10 values
        float value;
        scanf("%f", &value);
        if (value == -99.0) 
		//when the value is -99.0, the loop terminates and goes 
		//to the next instruction
            break;
        else
            values[n] = value; 
        n++;
    }
 	//printing the sum and the average of the numbers
    printf("Sum = %f\n", sum(values, n));
    printf("Average = %f\n", average(values, n));
 
    return 0;
}
