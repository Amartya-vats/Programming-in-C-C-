/*
CH-230-A
a4 p7.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_matrix(int a[30][30], int n){
    printf("The entered matrix is:\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void below_diagonal(int a[30][30], int n){
    printf("Under the main diagonal:\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");
}


int main () {
    int arry[30][30];
    int n;
    scanf("%d\n",&n);

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d\n", &arry[i][j]);
        }
    }

    print_matrix(arry, n);
    below_diagonal(arry,n);

    return 0;
}