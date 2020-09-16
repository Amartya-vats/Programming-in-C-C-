/*
CH-230-A
a5 p6.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    int n;
    scanf("%d", &n);
    int count = 0;

    int i;
    float* arr;
    arr = (float*) malloc(sizeof(float) * n);

    //safety check to proper memory allocation
    if (arr == NULL){
        printf("an error has occured\n");
        exit (1);
    }

    //for loop for entering the elements
    for (i=0; i<n; i++) {
        scanf("%f", &arr[i]);
    }

    //pointer walking through the array
    float *ptr = &arr[0];
    while(*ptr >= 0) {
        count += 1;
        ptr ++;
    }

    printf("Before the first negative value: %d elements\n", count);
    //releasing memory
    free(arr);
    return 0;
}