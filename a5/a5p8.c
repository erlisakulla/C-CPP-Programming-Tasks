/*
CH-230-A
a5p8.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
//initializing variables   
    int *result, *matrixA, *matrixB, *A, *B, *C;
    int i, j;
	int k = 0;
    int n, m, p;
    int sizeA, sizeB, sizeC;

//receiving user input for number of rows and columns
    scanf("%d%d%d", &n, &m, &p);

    sizeC = n*p;
    sizeA = n*m;
    sizeB = m*p;
    
//allocating memory to the matrices
    A = (int *)malloc(sizeA*sizeof(int *));
    matrixA = A;
    B = (int *)malloc(sizeB*sizeof(int *));
    matrixB = B;
    C = (int *)malloc(sizeC*sizeof(int *));
    result = C;

//inputting values in first matrix
    for(i = 0; i < sizeA; i++, matrixA++)
    scanf("%d", matrixA);
   
//inputting values in second matrix
    for(i = 0; i < sizeB; i++, matrixB++)
    scanf("%d", matrixB);
    
//entering values to allocated memory
    matrixA = A;        
    matrixB = B; 
    
//calculating the result matrix using matrix multiplication rules
    if(n==1 && p==1){
        for(i = 0; i < n; i++){
            for(j = 0; j < p; j++){
            *result = 0;
            for(k=0; k < m; k++)
                *result = *result + (*(matrixA + (k + i*m))) * (*(matrixB + (j + k*p)));
            result++;
            }
        }
    }
	else{
    	for(i = 0; i < n; i++){
    		for(j = 0; j < p; j++){
        	*result = 0;
	        for(k = 0; k < m; k++)
	            *result = *result + (*(matrixA + (k + i*m))) * (*(matrixB + (j + k*m)));
	        result++;
    		}
    	}
    }

//entering values to allocated memory
	result = C;

	 //printing matrices 
    printf("Matrix A:\n");
    for(i = 0; i < n; i++){
    	for(j = 0; j < m; j++, matrixA++)
     		printf("%d ", *matrixA);
    	printf("\n");
    }
    printf("Matrix B:\n");
    for(i = 0; i < m; i++){
    	for(j = 0; j < p; j++, matrixB++)
     		printf("%d ", *matrixB);
    	printf("\n");
    }	
	printf("The multiplication result AxB:\n");
    for(i = 0; i < n; i++){
    	for(j = 0; j < p; j++, result++)
     		printf("%d ", *result);
    	printf("\n");
    }

//deallocating memory
    free(A);
    free(B);
    free(C);
}
