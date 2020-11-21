/*
CH-230-A
a3p9.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n){
		if(n<=5){
			return -111; //returning -111 if there are less than 5 values
		}
		else{
			double sum = v[2] + v[5];
			return sum; //returning the sum if there are more than 5 values	
		}
	}

int main(){
	int n;
	scanf("%d", &n);
	
	double values[20];
	int i;
	for(i = 0; i < n; i++){
		scanf("%lf", &values[i]); 
		//putting the entered values from user in an array
	}
	
	double result = sum25(values, n); 
	//calling the double function
	
	if (result!=-111){
		printf("sum=%lf\n", result); 
		//printing the result if the reurn value of the function is not -111
	}
	else if(result==-111){
		printf("One or both positions are invalid\n");
		//printing an error message if the reurn value of the function is not -111
	}
	
	return 0;
}
