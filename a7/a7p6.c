/*
CH-230-A
a7p6.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//initializing structure for human being
struct HumanBeing {
    char name[30];
    int age;
};

//swap swap swap swap
void swap(void* x, void* y, void* temp, int size) {
    memcpy(temp, x, size);
    memcpy(x, y, size);
    memcpy(y, temp, size);
    //swapped
}

//function for bubble sort
//BTW BUBBLE SORT SUCKS!!!!!!!!
void BubbleSort(void *arr, int length, int size, int (*func)(const void *, const void *)) {
    if (length < 1)
        return; //returning for invalid length
    //swapping stuff cuz that's what bubble sort does
    void* temp = (void*)malloc(size);
    int n = 1;
    while(n) {
        n = 0;
        int i;
        for (i = 1; i < length; i++) { //swap dat
            if (func(arr + (i-1)*size, arr + i*size) > 0) {
                swap(arr + (i-1)*size, arr + i*size, temp, size);
                n = 1;
            }
        }
    }
    free(temp);
}

//comparing names
int compareNames(const void *a, const void *b) {
    const struct HumanBeing *x = (const struct HumanBeing *) a;
    const struct HumanBeing *y = (const struct HumanBeing *) b;
    int trigger = strcmp(x->name, y->name);
    if (trigger < 0) {
        return -1;	
	}
    else if(trigger == 0) {
    	return 0;
	}
    else {
    	return 1;
	}
}

//comparing ages
int compareAges(const void *a, const void *b) {
    const struct HumanBeing *x = (const struct HumanBeing *) a;
    const struct HumanBeing *y = (const struct HumanBeing *) b;
    if (x->age == y->age) {
        return strcmp(x->name, y->name);
	}
    else if (x->age < y->age) {
    	return -1;
	}
    else {
        return 1;	
	}
}

//printing the human being structure, very wow
void printS(struct HumanBeing* person, int length) {
	int i;
    for (i = 0; i < length; i++) {
        printf("{%s, %d}; ", person[i].name, person[i].age);
    }
    printf("\n");
}


int main() {
    char arr[150];
    int n, i;
    fgets(arr, sizeof(arr), stdin);
    sscanf(arr, "%d", &n);
	//dynamically allocating memory
    struct HumanBeing* list = (struct HumanBeing*) malloc(sizeof(struct HumanBeing)*n);
    if (list == NULL) {
        printf("Insufficient memory!\n");
        exit(1);
    }
    //filling up the array
    for(i = 0; i < n; i++) {
        fgets(list[i].name, sizeof(list[i].name), stdin);
        list[i].name[strlen(list[i].name) - 1] = '\0';
        fgets(arr, sizeof(arr), stdin);
        sscanf(arr, "%d", &(list[i].age));
    }

    BubbleSort(list, n, sizeof(list[0]), compareNames);
    printS(list, n);//printing array by name order
    BubbleSort(list, n, sizeof(list[0]), compareAges);
    printS(list, n);//printing array by age order

    free(list);//deallocating memory

    return 0;
}


