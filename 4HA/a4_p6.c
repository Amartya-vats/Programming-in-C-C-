/*
CH-230-A
a4 p6.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//function for the highest two
void highest_num (int str[], int num){
    int highest = str[0], second_high = str[0];

    //checks for non empty inputs

    if (num > 1){

        //goes through the array and checks for the highest
        for (int i=0; i < num; i++){
            if (str[i] > highest){
                second_high = highest;
                highest = str[i];
            }
            else if (str[i] > second_high){
                second_high = str[i];
            }
        }
    }

    //all other cases
    else {
        printf("%d\n", str[0]);
    }
    printf("Highest number is %d\n", highest);
    printf("Second highest number is %d\n",second_high);
}

int main () {
    int n;
    printf("Please enter the number of elements in array\n");
    scanf("%d\n",&n);

    //Memory allocation
    int *arr;
    arr = (int *) malloc(n * sizeof(int));

    //checks for the memory allocation has occured
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    //scans the array
    for (int i=0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //calling functions from above
    highest_num(arr, n);

    //free memory
    free(arr);
    return 0;
}