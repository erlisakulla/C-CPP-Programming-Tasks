/*
CH-230-A
a5p4.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//function for dividing elements by 5
void divby5(float arr[], int size){
	int i;
	printf("Before:\n");	
	for(i = 0; i < size ; ++i){
		printf("%.4f ", arr[i]);
    }
	printf("After:\n");	
	for (i = 0; i < size ; ++i){
        arr[i] = arr[i]/5.0;//dividing elements by 5
    	printf("%.4f ", arr[i]);
	}
}

int main(){
	float *arr;
    int n, i;
     
    printf("Enter number of elements:\n");
    scanf("%d",&n);
     
    //dynamically allocating memory 
    arr = (float*)malloc(n*sizeof(int));    
    if(arr==NULL){
        printf("Insufficient Memory\n");
        return 0;
    }
	
	//inputting elements from user
	printf("Enter %d elements:\n",n);
	for (i = 0; i < n ; i++){
        scanf("%f", &arr[i]);
    }
	
	divby5(arr, n); //calling the function
	
	free(arr); //deallocating the memory
}
