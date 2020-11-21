/*
CH-230-A
a5p6.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n;
	float *p;
	float *arr;
	scanf("%d", &n);
	
	arr = (float*)malloc(n*sizeof(float)); //dynamically allocating memory

	for (i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }

//looping through the array using pointers
    for(p = arr; p < arr+n; p++){
       if(*p < 0){
           printf("Before the first negative value: %ld elements", (p-arr));
           break;//stop counting when there's a negative value
        }
    }
    return 0;
}
