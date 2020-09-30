/*
CH-230-A
teststack.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    //declaring and scaning some variables
    struct stack Stack;
    Stack.count = 0;
    int n;
    char c;

    //infinite while loop
    while(1) {
        scanf("%c", &c);
        
        if (c=='s') {
            scanf("%d",&n);
            push(&Stack, n);
        }
        else if (c=='p') {
            pop(&Stack);
        }
        else if (c=='e') {
            empty(&Stack);
        }
        else if (c=='q') {
            printf("Quit\n");
            exit(0);
        }
    }
    return 0;
}