/*
CH-230-A
stack.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//function for pushing
void push(struct stack * Stack, int n) {
    if(Stack->count > 11) {
        printf("Pushing Stack Overflow\n");
    }
    else {
        printf("Pushing %d\n", n);
        Stack->count ++;
        Stack->array[Stack->count] = n;
    }
}

//function for popping (removing last entered element)
void pop(struct stack * Stack) {
    if(Stack->count != 0) {
        printf("Popping %d\n", Stack->array[Stack->count]);
        Stack->count--;
    }
    else {
        printf("Popping Stack Underflow\n");
    }
}

//function for removing all the stack elements
void empty(struct stack * Stack) {
    printf("Emptying Stack ");
    while(Stack->count != 0){
        printf("%d ", Stack->array[Stack->count]);
        Stack->count--;
    }
    printf("\n");
}

//function is empty
int isEmpty(struct stack Stack) {
    if(Stack.count == 0) {
        return 0;
    }
    else {
        return 1;
    }
}