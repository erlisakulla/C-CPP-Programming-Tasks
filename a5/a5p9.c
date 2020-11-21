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
	//printing the array using pointer
	for(i = 0; i < size; i++){
		printf("%.4f ", arr[i]);
    }
	printf("\nAfter:\n");
	for(i = 0; i < size; i++){
        printf("%.4f ", arr[i] / 5.0); 
	//printing each value divided by 5
    }
}

int main(){
	float *arr;
    int n, i;
     
    printf("Enter number of elements:\n");
    scanf("%d",&n);
     
    //allocating memory dynamically
    arr=(float*)malloc(n*sizeof(int));
     
    if(arr==NULL){
        printf("Insufficient Memory\n");
        return 0;
    }

	printf("Enter %d elements:\n",n);
    	for(i = 0; i < n; i++){
    	    scanf("%f", arr[i]);
    	}
	
	divby5(arr, n); //calling the function
	
	free(arr); //deallocating the memory
}
