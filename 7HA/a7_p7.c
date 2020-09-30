/*
CH-230-A
a7 p7.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct stack {
unsigned int count;
int array[12]; // Container
};

void push(struct stack* Stack, int n) {
    if(Stack->count == sizeof(Stack->array)) {
        printf("Stack has overflowed no new data\n");
        return;
    }
    else {
        printf("Pushing %d\n", n);
        Stack->count ++;
        Stack->array[Stack->count] = n;
    }
}

void pop(struct stack * Stack) {
    if(Stack->count != 0) {
        printf("Popping %d\n", Stack->array[Stack->count]);
        Stack->count--;
    }
    else {
        printf("Popping Stack Underflow\n");
    }
}

void empty(struct stack * Stack) {
    printf("Emptying Stack ");
    while(Stack->count != 0){
        printf("%d ", Stack->array[Stack->count]);
        Stack->count--;
    }
    printf("\n");
}

int isEmpty(struct stack Stack) {
    if(Stack.count == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    struct stack Stack;
    Stack.count = 0;
    int n;
    char c;
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