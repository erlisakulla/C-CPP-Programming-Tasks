/*
CH-230-A
a6p8.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//initializing a linked list structure 
struct LinkedList {
    int info;
    struct LinkedList *next;
};
//adding the value at the end of the linked list
struct LinkedList* push_back(struct LinkedList* list, int num) {
    struct LinkedList *element, *p;
    p = list;
   //dynamically allocating memory 
	element = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    if(element == NULL) {
        printf("Not enough memory!\n");
        return list;
    }
	//adding value in the list
    element->info = num;
    element->next = NULL;

    if(list == NULL) 
        return element;
	//looping though list to add the element in the back
    while(p->next != NULL){
        p = p->next;
	}  
	p->next = element;

    return list; 
}

//add the value to the beginning of our linked list
struct LinkedList* push_front(struct LinkedList* list, int num) {
    struct LinkedList* element;
    //dynamically allocating memory
	element = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    if(element == NULL) {
        printf("Not enough memory!\n");
        return list;
    }
	//adding element to the list
    element->info = num;
    element->next = list;
    
    return element;
}

//remove a first element from the linked list
struct LinkedList* pop_front(struct LinkedList* list) {
    if (list == NULL){
        return list; 	
	}
	//removing the front element
    struct LinkedList* popped;
    popped = list;
    list = list->next;
    free(popped);
    
    return list;
}
//function to print the linked list
void printS(struct LinkedList* list) {
    struct LinkedList* p;
    for (p = list; p; p = p->next) {
        printf("%d ", p->info); //printing each element
    }
    printf("\n");
}
//function to free linked list
void freeS(struct LinkedList* list) {
    struct LinkedList* freed;
    while(list != NULL) {
        freed = list->next;
        free(list);//freeing each element of the list
        list = freed;//the list is then empty
    }
}

int main() {
    int num;
    char c;
    struct LinkedList* list = NULL;
//looping for number and character input
    while(1) {
        scanf("%c", &c); //switch cases for the command to be taken
        switch (c){
            case 'a': //calling functions in each case
                scanf("%d", &num);    
                list = push_back(list, num);        
                break;
            case 'b':
                scanf("%d", &num);
                list = push_front(list, num);
                break;
            case 'r':
                list = pop_front(list);
                break;
            case 'p':
                printS(list);
                break;
            case 'q':
                freeS(list);
                exit(0); //quitting the program
        }
        getchar();
    }

    return 0;
}
