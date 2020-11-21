/*
CH-230-A
a5p55.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

double scalar_product(double v[], double w[], int n){ 
    int i;
	double product = 0.0; 
    //Loop for calculating the scalar product
    for (i = 0; i < n; i++){
    		product = product + v[i]*w[i] ;
	}
	return product;      
}


void minmaxpos(double arr[], int n){
    double min = arr[0];
    double max = arr[0];
	int i, posMin, posMax;    
	for(i = 0; i < n; i++){
        if(arr[i]>max){//maximum
            max=arr[i];
        }
        if(arr[i]<min){ //minimum
            min=arr[i];
        }
    }
    //first occurrence of the smallest number
    for (i = 0; i < n; i++){
        if(min == arr[i]){
            posMin = i;
            break;
        }  
    }
    //first occurrene of biggest number
	for (i = 0; i < n; i++){
	if(max == arr[i]){
            posMax = i;
            break;
        }
    }
    printf("The smallest = %lf\n", min);
    printf("Position of smallest = %d\n", posMin);
    printf("The largest = %lf\n", max);
    printf("Position of largest = %d\n", posMax);
}

int main(){	
	int n, i;
    scanf("%d",&n);
    double v[n], w[n];

    //enetring values in the array
	for (i = 0; i < n; ++i){ 
        scanf("%lf",&v[i]);
    }
    for (i = 0; i < n; ++i){
        scanf("%lf", &w[i]);
    }
    printf("Scalar product=%lf\n", scalar_product(v, w,n));
    minmaxpos(v, n); 
    minmaxpos(w, n); 
    return 0;

	return 0;
}
