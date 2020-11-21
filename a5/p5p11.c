/*
CH-230-A
a5p11.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
 
int isPrime(int, int);
 
int main(){
    int x, check;
    scanf("%d", &x); //taking input from user
    check = isPrime(x, x / 2); //calling function

	if (check == 1){
    	printf("%d is prime\n", x);
	}
	else{
	    printf("%d is not prime\n", x);
	}


    
    return 0;
}

//function checking if it is prime
int isPrime(int x, int b){
    if (b == 1){
        return 1;
    }
    else{
    	if (x == 1){
       		return 0;
	   }
		else if (x % b == 0){
    		return 0;
       }
    	else{
        	return isPrime(x, b - 1); 
       }       
    }
}
