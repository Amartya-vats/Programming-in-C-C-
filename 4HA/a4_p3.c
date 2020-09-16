/*
CH-230-A
a4 p3.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

/*in program first requires an array of floats (until it an negative number)
after  enter an character for the following cases*/

//function for sum
float sum(float v[], int n) {

    //'s' is initialized for first element of array
    float s = v[0];

    //as 's' is already set as the first elemnet loop starts at i=1
    for (int i=1; i<n+1; i++){
        s += v[i];
    }
    return s;
}

//fuction for geometric mean
float geometric_mean(float arr[], int num){
    //similarly (as before) intialized here and used the same method in for loop
    float prod = arr[0];
    float mean;
    for (int i=1; i<num + 1; i++){
        prod *= arr[i];
    }
    //need '+ 1' as mentioned above due to the extra first value
    mean = powf(prod ,(float)1/(num + 1));
    return mean;
}

//function for maximum in loop
float max(float v[], int dim){
    float m = v[0];
    int j;

    //checks each element of array and checks with the previous max
    for (j = 0; j <= dim; j++){
        if (v[j] > m){
            m = v[j];
        }
    }
    return m;
}

//function for lowest number
float low(float v[], int dim){
    int i;
    float l = v[0];

    //similar idea as maximum
    for (i = 1; i <= dim; i++){
        if (v[i] < l){
            l = v[i];
        }
    }
    return l;
}

int main() {
    float flt[15];
    int n;

    //assigns value into the array
    for (n = 0; n < 15; n++){
        scanf("%f", &flt[n]);

        //checks if the number entered is negative
        //if yes breaks out of the for loop
        if (flt[n] < 0){
            n -= 1;
            printf("invalid input\n");
            break;
        }
    }

    //scan for a character - enter a character after the negative number

    char c;
    getchar();
    scanf ("%c",&c);
    switch (c){

        //first case for sum of the numbers
        case 's':
            printf("%f\n", sum(flt, n));
            break;

        //second case for geometric mean
        case 'm':
            printf("%f\n",geometric_mean(flt, n));
            break;
        
        //calling and using max to find the highest number
        case 'h':
            printf("%f\n", max(flt, n));
            break;
        
        //calling and using low to find the lowest number
        case 'l':
            printf("%f\n", low(flt, n));
            break;
        default:
            return 0;
    }
    return 0;
}