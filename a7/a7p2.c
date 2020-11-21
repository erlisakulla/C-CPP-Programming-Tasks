/*
CH-230-A
a7p2.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//initializing doubly linked list structure
struct DLinkedList
{
    char            	  info;
    struct DLinkedList   *prev;
    struct DLinkedList   *next;
};

struct DLinkedList* head;

//////////add character at the head of list//////////
struct DLinkedList *pushHead(struct DLinkedList* list, char c) {
    struct DLinkedList *new_data;
    //dynamically allocating memory
    new_data = (struct DLinkedList*) malloc(sizeof(struct DLinkedList));
    if (new_data == NULL) {
        printf("Not enough memory!\n");
        return list;
    }
    new_data->info = c;//adding new character
    new_data->prev = NULL;
	//since it's at the beginning, previous pointer is empty
    new_data->next = list;
    
    return new_data; //returning new added element
}

//////////removing characters from list//////////
struct DLinkedList *removeChar(struct DLinkedList *list, char info){
    struct DLinkedList *p;
	int count = 0;
	//checking for character 
	for (p = list; p != NULL; p = p->next) {
		struct DLinkedList *c = p;
		if (p->info == info) {//cases of found character
			count = 1;
			if (p == list) {
				list = p->next;
			}
			if (p->next != NULL) {
				p->next->prev = p->prev;
			}
			if (p->prev != NULL) {
				p->prev->next = p->next;
			}
		free(c); //removing char
		}	
	}
	if (count == 0) {
		//if the character isn't in the list
		printf("The element is not in the list!\n");
	}
	
	return list;//returning the modified list
}

//////////printing the list//////////
void printList(struct DLinkedList* list) {
    struct DLinkedList* p;
    for (p = list; p; p = p->next) //looping through list
        printf("%c ", p->info);
    printf("\n");
}

//////////reversing the list//////////
void reversePrint(struct DLinkedList* list) {
    if (list == NULL) 
        return;
    else if (list->next == NULL) {
        printf("%c ", list->info);
    }
    else {
        reversePrint(list->next);
        printf("%c ", list->info);
    }
    printf("\n");
}

//////////exiting program//////////
void disposeList(struct DLinkedList* list) {
    struct DLinkedList* element;
    while(list != NULL) {
        element = list->next;
        free(list);
        list = element;
    }
}

int main(){
    struct DLinkedList* list = NULL;
    int n;
	char c;
    head = NULL;
    //looping for user input
    while(1) {
        scanf("%d", &n);
        getchar();
        switch(n) {
            case 1:
                scanf("%c", &c);
                getchar();
                list = pushHead(list, c);
                break;
            case 2:
                scanf("%c", &c);
                getchar();
                list = removeChar(list, c);
                break;
            case 3:
                printList(list);
                break;
            case 4:
                reversePrint(list);
                break;
            case 5:
                disposeList(list);
                exit(0);
        }
    }

    return 0;
}

