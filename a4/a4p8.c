/*
CH-230-A
a4p8.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
//function for printing matrix in required format
void print_matrix(int n, int matrix[n][n]){
	int r, c;
	printf("The entered matrix is:\n");
	//looping for each row and column
	for(r=0; r<n; r++){
		for(c=0; c<n; c++){
			printf("%d ", matrix[r][c]);
		}
		printf("\n");	
	}
}
//function for printing elements under secondary diagonal
void sec_diagonal(int n, int matrix[n][n]){
    int r, c;
	printf("Under the secondary diagonal:\n");
	for(r=1; r<n; r++){
		for(c=0; c<n; c++){
			if(c+r>n-1){
				printf("%d ", matrix[r][c]);	
			}
		}
	}
}

int main(){
	int n, r, c;
	scanf("%d", &n);
	
	//entering values in the matrix
	int matrix[n][n];		
	for(r=0; r<n; r++){
		for(c=0; c<n; c++){
			scanf("%d", &matrix[r][c]);
		}	
	}
	//calling the functions using the matrix input by user
	print_matrix(n, matrix);
	sec_diagonal(n, matrix);
	
	printf("\n");
	return 0;
}
