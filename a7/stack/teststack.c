/*
CH-230-A
teststack.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Stack stuff;
    stuff.count = 0;
    char arr[150], c;
    static int value, n;

    while(1) {
        fgets(arr, sizeof(arr), stdin);
        sscanf(arr, "%c", &c);
        switch(c) {
            case 's':
                fgets(arr, sizeof(arr), stdin);
                sscanf(arr, "%d", &value);
                if (stuff.count >= 12) {
                    printf("Pushing Stack Overflow\n");
                    break;
                } 
                printf("Pushing %d\n", value);
                push(&stuff, value);
                break;
            case 'p': 
                printf("Popping ");
                if (stuff.count == 0) {
                    printf("Stack Underflow\n");
                    break;
                }
                n = pop(&stuff);
                printf("%d\n", n);
                break;
            case 'e':
                printf("Emptying Stack ");
                empty(&stuff);
                break;
            case 'q':
                printf("Quit\n");
                exit(0);
        }
    }
    
    return 0;
}
