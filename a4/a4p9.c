/*
CH-230-A
a4p9.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//function for calculating product of smallest and largest values
int prodminmax(int arr[], int n){
	int i, prod, s, l;
	s = l = arr[0];
	for(i = 1; i < n; i++){
		if(arr[i]>l){
			l=arr[i];
		}//largest value
		if(arr[i]<s){
			s=arr[i];
		}//smallest value			
	}
	prod=s*l;//their product	
	return prod;
}

int main(){	
	int *arr;
    int n, i;
     
    printf("Enter number of elements:\n");
    scanf("%d",&n);
     
    //allocating memory dynamically
    arr=(int*)malloc(n*sizeof(int));
     
    if(arr==NULL){
        printf("Insufficient Memory\n");
        return 0;
    }
    
    //entering the elements to the array
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",(arr+i));
    }
    
    //printing the product by calling the function
    printf("Product of the smallest and largest elements:\n%d", prodminmax(arr, n));
    
	//deallocating the memory
    free(arr);
		     
    return 0;    
}
