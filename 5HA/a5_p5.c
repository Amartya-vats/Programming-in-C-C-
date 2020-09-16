/*
CH-230-A
a5 p5.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//only 3 cases work ??

//funtion for scaler product of the input
double scaler_prod(double a[], double b[], int num) {
    double prod = 0.0;

    //goes through each matrix and does the scaler product
    for(int i=0; i<num; i++) {
        prod += (a[i] * b[i]);
    }
    return prod;
}

//checks for the maximum in inputted matrix
void maximum(double a[], int num) {
    double max = a[0];
    int countmax = 0;

    //goes through the loop and checks for minimum
    for(int i=1; i<num; i++) {
        if (max < a[i]) {
            max = a[i];
            countmax = i;
        }
    }
    printf("The largest = %lf\n", max);
    printf("Position of largest = %d\n", countmax);
}

//checks for the minimum in matrix
void minimum(double b[], int number) {
    double min = b[0];
    int countmin = 0;

    //goes through the loop and checks for minimum
    for(int i=1; i<number; i++){
        if (min > b[i]) {
            min = b[i];
            countmin = i;
        }
    }
    printf("The smallest = %lf\n", min);
    printf("Position of smallest = %d\n", countmin);
}

int main () {
    int n;
    scanf("%d", &n);
    double v[n];

    //enters values into matrix one
    for (int i=0; i<n; i++) {
        scanf("%lf", &v[i]);
    }
    //enters values into matrix two
    double w[n];
    for (int i=0; i<n; i++) {
        scanf("%lf", &w[i]);
    }

    //calls and prints output
    printf("Scalar product=%lf\n", scaler_prod(v,w,n));
    minimum(v,n);
    maximum(v,n);
    minimum(w,n);
    maximum(w,n);
    return 0;
}