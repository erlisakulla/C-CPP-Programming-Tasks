/*
CH-230-A
a4p6.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//function for finding the two largest numbers
void two_biggest_values(int arr[], int n){	
	int l1, l2, temp, i;
		l1 = arr[0];
		l2 = arr[1];
//comparing l1 and l2 and looping throughout the array
		if (l1 < l2){
			temp = l1;
			l1 = l2;
			l1 = temp;
		}
		for (i = 2; i < n; i++){
			if (arr[i] > l1){
				l2 = l1;
				l1 = arr[i];
			}
			else if (arr[i] > l2 && arr[i] != l1){
				l2 = arr[i];
			}
		}
//printing the two largest numbers
	printf("Largest numbers: %d, %d\n", l1, l2);
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

	printf("Enter %d elements:\n",n);
    	for(i=0; i<n; i++){
    	    scanf("%d",(arr+i));
    	}
	
	//calling the function
	two_biggest_values(arr, n);
	
	free(arr);
}

