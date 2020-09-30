/*
CH-230-A
a8 p4.c(stack.c)
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

//all functions
//push function from 7.7
void push(struct stack * Stack, int n) {
    if(Stack->count == sizeof(Stack->array)) {
        printf("Stack has overflowed\n");
        return;
    }
    else {
        Stack->count ++;
        Stack->array[Stack->count] = n;
    }
}

//pop function from 7.7
int pop(struct stack * Stack) {
    if(Stack->count != 0) {
        Stack->count--;
    }
    else {
        printf("Popping Stack Underflow\n");
    }
    return Stack->array[Stack->count];
}

void dectobin (int n) {
    //converts number to a binary number
    printf("The binary representation of %d is ", n);
    struct stack binaryNum[8];
    int i=0;

    //while loop for pushing in the remainder of each division by 2
    while (n >= 1) {
        push (binaryNum, n%2);
        n = n/2;
        i++;
    }

    //as the while loop does not push the first 1 into the stack
    //did so manually - works for all test cases
    push (binaryNum, 1);

    //another while loop to pop the stack and print the binary representation
    while (i!=0) {
        printf("%d", pop(binaryNum));
        i--;
    }
    //ending the file with a '.' and a new line
    printf(".\n");
}