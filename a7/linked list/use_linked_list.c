/*
CH-230-A
use_linked_list.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, pos;
    char c;
    struct LinkedList* list = NULL;
//looping for number and character input
    while(1) {
        scanf("%c", &c);
        switch (c){ //switch cases for the command to be taken
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
                exit(0);
            case 'i':
                scanf("%d", &pos);
                scanf("%d", &num);
                list = insertPos(list, pos, num);
                break;
            case 'R':
                list = reverse(list);
                break;
        }
        getchar();
    }

    return 0;
}
