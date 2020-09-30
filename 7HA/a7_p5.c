/*
CH-230-A
a7 p5.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int (*func)(const void *va , const void * vb);

int mycompasend(const void *va , const void * vb) {
    const int * a = (const int *) va;
    const int * b = (const int *) vb;
    if (* a < *b ) return -1;
    if (* a > * b) return 1;
    else return 0;
}

int mycompdesend(const void *va , const void * vb) {
    const int * a = (const int *) va;
    const int * b = (const int *) vb;
    if (* a < *b ) return 1;
    if (* a > * b) return -1;
    else return 0;
}

void print (int *arr, int num,int (*func)(const void *va , const void * vb)) {
    qsort (arr, num, sizeof(arr[0]), func);
    for (int i=0; i<num; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    char c;
    int arr[n];

    for (int i=0; i<n; i++ ) {
        scanf("%d", &arr[i]);
    }

    while(1) {
        scanf("%c", &c);
        switch (c) {
            case 'e':
                exit(0);
            break;
            case 'a':
                print (arr, n, mycompasend);
            break;
            case 'd':
                print (arr, n, mycompdesend);
            break;
        }
    }
    return 0;
}