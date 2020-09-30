/*
CH-230-A
a8 p4.h (stack.h)
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct stack {
    unsigned int count;
    int array[8]; // Container
};

void push(struct stack * Stack, int n);
int pop(struct stack * Stack);
void dectobin (int n);