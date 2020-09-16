/*
CH-230-A
a5 p2.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void divby5(float arr[], int size) {
    printf ("After:\n");
    for (int i=0; i<size; i++){
        arr[i] /= 5;
        printf("%.3f ", arr[i]);
    }
    printf("\n");
}

int main () {
    float arr[] = {5.500, 6.500, 7.750, 8.000, 9.60, 10.360};
    printf("Before:\n");
    for (int i=0; i<6; i++){
        printf("%.3f ",arr[i]);
    }
    printf("\n");
    divby5(arr, 6);
    return 0;
}