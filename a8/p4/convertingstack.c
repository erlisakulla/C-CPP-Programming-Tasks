/*
CH-230-A
convertingstack.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
    Stack binary_stack;
    binary_stack.count = 0;
    unsigned int binary_value;
    scanf("%d", &binary_value);

    int div = binary_value;
    if (binary_value == 0) {
        //base case
        push(&binary_stack, 0);
    }
    else {
        while(div > 0) {
            push(&binary_stack, div % 2);
            div /= 2;    
        }
    }

    printf("The binary representation of %d is ", binary_value);
    while(!isEmpty(&binary_stack)) 
        printf("%d", pop(&binary_stack));
    printf(".\n");
    
    return 0;
}
