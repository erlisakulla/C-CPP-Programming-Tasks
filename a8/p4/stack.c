/*
CH-230-A
stack.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

void push(Stack *binary_stack, int value) {
	if (binary_stack->count > 12) {
        printf("Stack Overflow\n");
        exit(1);
    }//stack overflow if the number is too big
	//adding value in stack
    binary_stack->arr[binary_stack->count++] = value;
}

int pop(Stack *binary_stack) {
    if (binary_stack->count < 0) {
        printf("Stack Underflow\n");
        exit(1);
    }//stack underflow if 
	//removing last elemnts from stack
    binary_stack->count--;
    return binary_stack->arr[binary_stack->count];
}

int isEmpty(Stack *binary_stack) {
	//checking if the stack is empty or not
    if (binary_stack->count > 0)
        return 0;
    else 
        return 1;
}
