/*
CH-230-A
linked_list.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

//Linked list structure
struct list {
    int info;
    struct list *next;
};

//function declaration
struct LinkedList* push_back(struct LinkedList* list, int num);
struct LinkedList* push_front(struct LinkedList* list, int num);
struct LinkedList* pop_front(struct LinkedList* list);
void printS(struct LinkedList* list);
void freeS(struct LinkedList* list);
struct LinkedList* reverse(struct LinkedList* list);
struct LinkedList* insertPos(struct LinkedList* list, int pos, int num);
