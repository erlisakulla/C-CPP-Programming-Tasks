/*
CH-230-A
a4p3.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

//geometric mean function
float geometric_mean(float arr[], int num){
//array and the number of the elements as parameters
	float prod = 1;
	int i;
//calculating product using for loop
	for(i = 0; i < num; i++){
		prod = prod * arr[i]; 
	}
	float gmean;
//calculating gmean using the power function from math.h
	gmean = pow(prod, (float)1 / num);
//returning the gmean variable
	return gmean;
}

//function for highest value on array
float highest_number(float arr[], int n){
//declaring a variable that holds the temporary highest value
	float temp = arr[0];
	int i;
//looping through each elemet of the array
    for (i = 1; i < n; i++) {
		if (temp < arr[i])
			temp = arr[i];
	}
//returning the highest value
	return temp;
}

//function of calculating and returing the sum
float sum(float arr[], int n){
	int i;
	float s = 0;
//calculating sum using for loop
	for (i = 0; i < n; i++){
		s+=arr[i];
	}
//returing the sum of the elements
	return s;
}


int main(){
	float values[15];
	char c;
	int n;
	
	printf("Enter up to 15 values:\n");
	
	for(n=0; n < 15; ){
        // If the user enters a negative number, the loop ends
        float value;
        scanf("%f", &value);
        if (value < 0){
        	break;
		} 
        else{
            values[n] = value; 
        	n++;
		}
    }
    
    printf("What do you want to calculate?\n");

//while done is true it is going to move to the next instruction
//otherwise the program breaks
	int  done = 0;
	
	while (!done) {
	
	    scanf("%c", &c);
	    
	    switch(c){
	    	case 'm': printf("Geometric mean=%f", geometric_mean(values, n));
	    		done = 1;
	    		break;
	    	case 'h': printf("Highest number=%f", highest_number(values, n));
	    	done = 1;
	    		break; 
	    	case 's': printf("Sum=%f", sum(values, n));
	    	done = 1;
	    		break;
		}
	}
	return 0;
}
