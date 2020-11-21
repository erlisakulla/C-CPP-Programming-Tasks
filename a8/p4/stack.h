/*
CH-230-A
stack.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#ifndef _STACK_H
#define _STACK_H

typedef struct stack {
    unsigned int count;
    int arr[12];
}Stack;

//adds value at end of stack
void push(Stack *binary_stack, int value);

//deletes last element from stack
int pop(Stack *binary_stack);

//checking if stack is empty
int isEmpty(Stack *binary_stack);

#endif
