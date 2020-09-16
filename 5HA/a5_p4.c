/*
CH-230-A
a5 p4.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//funtion for only divding each element by 5
void divby5(float arr[], int size) {
    printf ("After:\n");
    for (int i=0; i<size; i++){
        arr[i] /= 5;
    }
}

int main () {
    //arrays elements
    int n;
    printf("Please enter the number of elements\n");
    scanf("%d\n",&n);
    
    //allocating memory and scaning variables
    float* arr;
    arr = (float*) malloc(sizeof(float) * n);
    for (int i=0; i<n; i++){
        scanf("%f", &arr[i]);
    }

    //safety check to proper memory allocation
    if (arr == NULL){
        printf("an error has occured\n");
        exit (1);
    }

    //Prints elements before the function is applied
    printf("Before:\n");
    for (int i=0; i<n; i++){
        printf("%.3f ",arr[i]);
    }

    printf("\n");
    
    //calling function and printing the result after that 
    divby5(arr, n);
    for (int i=0; i<n; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    //releasing memory
    free(arr);
    return 0;
}