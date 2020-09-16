/*
CH-230-A
a3 p8.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

//global float array
float arry_flt[10];

//function for sum
float sum (float s1[]) {
    float s=0;
    
    //adds to pervious sum
    for(int i=0; i<10; i++) {
        s += arry_flt[i];
    }
    return s;
}

//function for average
float avg (float a1[]){
    float average = 0;
    //float length;
    int count = 0;
    for(int i=1; i<=sizeof(arry_flt[10]); i++) {
        count++;
    }
    average = sum(a1) /(count);
    return average;
}


int main() {
    printf("Enter upto 10 floats\n");
    int i=0;

    //inputs 10 floats
    for(i=0; i<10; i++) {
        scanf("%f", &arry_flt[i]);

        //conditon in problem
        if (arry_flt[i] == -99.0){
            arry_flt[i] -= -99.0;
            break;
        }
    }

    //output result
    printf("%f\n", sum(arry_flt));
    printf("%f\n", avg(arry_flt));

    return 0;
}