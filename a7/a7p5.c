/*
CH-230-A
a7p5.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//ascending order
int ascending(const void* n1, const void* n2) {
    return *(int*)n1 - *(int*)n2; //using pointer arithmetic
}

//descending order
int descending(const void* n1, const void* n2) {
    return *(int*)n2 - *(int*)n1;
}

//printing array
void printArray(int arr[], int n) {
	int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, i;
    char buffer[100];
    int *array;
    char c;
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &n);
    //dynamically allocating memory
    array = (int*) malloc(sizeof(int)*n);
    if (array == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
	//taking values
    for (i = 0; i < n; i++) {
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &array[i]);
    }
	//asking for user input
    while(1) {
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%c", &c);
        switch (c) {
            case 'a':
                qsort(array, n, sizeof(array[0]), ascending);
                break;
            case 'd':
                qsort(array, n, sizeof(array[0]), descending);
                break;
            case 'e':
                free(array);
                exit(0);
                break;
        }
        printArray(array, n);
    }
    free(array);//deallocating memory
    
    return 0;
}
