/*
CH-230-A
stack.h
Amartya Vats
a.vats@jacobs-university.de
*/

struct stack {
unsigned int count;
int array[12];
};

void push(struct stack * Stack, int n);
void pop(struct stack * Stack);
void empty(struct stack * Stack);
int isEmpty(struct stack Stack);