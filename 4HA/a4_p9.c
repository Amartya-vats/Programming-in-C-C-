/*
CH-230-A
a4 p9.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prodminmax(int arr[], int n){
    // Initialize maximum element 
    int max = arr[0];
    int min = arr[0];
  
    // from second and compare as already initialize for the first element
    // every element with current max  
    for (int m = 0; m < n; m++) 
        if (arr[m] > max) {
            max = arr[m]; 
        }
        else if (arr[m] < min){
            min = arr[m];
        }
    return max * min;
}

int main () {
    //number of elements in array
    int n;
    printf("Please enter the number of elements\n");
    scanf("%d\n",&n);
    
    //memory allocation and scaning variables
    int* arr;
    arr = (int*) malloc(sizeof(int) * n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //safety check to proper memory allocation
    if (arr == NULL){
        printf("an error has occured\n");
        exit (1);
    }

    //calling function and freeing array
    printf("Product is %d\n", prodminmax(arr, n));
    free(arr);
    return 0;
}