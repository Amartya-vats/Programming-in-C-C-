/*
CH-230-A
a5 p9.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//function for scanning a matrix
int*** scan_matrix(int ***matrix, int row, int col, int deep) {
    //scanning the inputted values to the 3D matrix
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++){
            for (int k=0; k<deep; k++) {
                 scanf("%d",&matrix[i][j][k]);
            }
        }
    }
    return matrix;
}

//function for printing a matrix
void print_matrix(int num1, int num2, int num3, int ***mat) {
    for (int i=0; i<num3; i++) {
        printf("Section %d:\n", i+1); //as i starts from 0
        for (int j=0; j<num1; j++) {
            for (int k=0; k<num2; k++)
                //matrix dimensions are different due to the way I have defined my for loop
                printf("%d ", mat[j][k][i]);
            printf("\n");
        }
    }
}

int main () {
    int row,col,depth;
    scanf("%d", &row);
    scanf("%d", &col);
    scanf("%d", &depth);

    //memory allocation for the 3D array
    int ***dm3;
    dm3 = (int***) malloc (sizeof(int**) * row);
    for (int i=0; i<col; i++) {
        dm3[i] = (int**) malloc (sizeof(int*) * col);
        for (int j=0; j<depth; j++) {
            dm3[i][j] = (int*) malloc (sizeof(int) * depth);
        }
    }
    //safety check to proper memory allocation
    if (dm3 == NULL) {
        printf("an error has occured\n");
        exit (1);
    }
    
    //calling scan function
    scan_matrix(dm3, row, col, depth);

    //calling print function
    print_matrix(row,col,depth,dm3);

    free(dm3);
    return 0;
}