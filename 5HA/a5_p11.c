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

//function for recursion fo the values to check for prime
int rec_ser(int n, int a) {
    //checks if the inputted number is 2
    if (n == 2) {
        return 1;
    }

    //if not 2 checks if the input is 1 or 0 giving a return accordingly
    else if (n < 2) {
        return 0;
    }

    //break for the recursion function
    else if (a == 1) {
        return 1;
    }

    //function where recursion takes place
    else {
        if (n%a == 0) {
            return 0;
        }
        else {
            return rec_ser(n,a-1);
        }
    }
}

int main () {
    //scaning the input
    int n;
    scanf("%d", &n);

    //calling funtion for checking prime and checking the result
    //printing accoringly 
    if (rec_ser(n,n-1) == 1){
        printf("%d is prime\n", n);
    }
    else {
        printf("%d is not prime\n", n);
    }
    return 0;
}