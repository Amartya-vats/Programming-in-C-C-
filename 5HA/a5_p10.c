/*
CH-230-A
a5 p10.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//funtion for recursion which also prints the output
int recursive(int n) {

    //checks for diiferent inputs
    if (n == 1) {
        printf("%d\n", n);
        exit(0);
    }
    else if (n==0) {
        printf("0\n");
        exit(0);
    }
    
    else {
        printf("%d ", n);
        recursive(n-1);
        printf("%d ", n);
    }
    return 0;
} 

//main function
int main () {

    //inputting and scaning an integer
    int n;
    scanf("%d", &n);

    //calling function
    recursive(n);
    return 0;
}