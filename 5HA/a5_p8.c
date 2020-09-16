/*
CH-230-A
a5 p8.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//function for scanning a matrix
int **scan_matrix(int **matrix, int row, int col) {
    //scanning the inputted values to matrix1
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    return matrix;
}

//function for printing a matrix
void print_matrix(int row, int col, int **mat) {
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

//Multiplication of the matrices and storing the Multiplication
void multiply (int row, int col, int col2, int **mat1, int **mat2) {
    //using memory allocation for multiplication of matrices
    int **mult_mat;
    mult_mat=(int**)malloc(sizeof(int*)*row);
    for (int j =0; j<col2; j++) {
        mult_mat[j]=(int*)malloc(sizeof(int)*col2);
    }
    //safety check to proper memory allocation
    if (mult_mat == NULL){
        printf("an error has occured\n");
        exit (1);
    }

    //multiplication process
    for(int i=0;i<row;i++) {
        for(int j=0;j<col2;j++){
            mult_mat[i][j]=0;
            for (int k=0; k<col;k++)
            mult_mat[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    //printing multiplied matrix
    printf("The multiplication result AxB:\n");
    for(int i=0; i<row; i++){
       for(int j=0; j<col2; j++) {
            printf("%d ", mult_mat[i][j]);
        }
        printf("\n");
    }
    //freeing memory
    free(mult_mat);
}

int main () {
    int row, col, col2;
    scanf("%d", &row);
    scanf("%d", &col);
    scanf("%d", &col2);

    //using memory allocation for first matrix
    int **mat1;
    mat1 = (int**) malloc(sizeof(int*) * row);
    for (int a=0; a<col; a++){
        mat1[a]=(int*)malloc(sizeof(int)*col);
    }
    //safety check to proper memory allocation
    if (mat1 == NULL){
        printf("an error has occured\n");
        exit (1);
    }

    //using memory allocation for second matrix
    int **mat2;
    mat2 = (int**) malloc(sizeof(int) * col);
    for (int b=0; b<col2; b++){
        mat2[b]=(int*)malloc(sizeof(int)*col2);
    }
    //safety check to proper memory allocation
    if (mat2 == NULL){
        printf("an error has occured\n");
        exit (1);
    }

    //scanning matrices
    scan_matrix(mat1,row ,col);
    scan_matrix(mat2,col ,col2);
    
    //printing matrix
    printf ("Matrix A:\n");
    print_matrix(row, col, mat1);
    printf ("Matrix B:\n");
    print_matrix(col,col2,mat2);

    //calling multiplication function
    multiply(row,col,col2,mat1,mat2);

    //freeing memory
    free(mat1);
    free(mat2);
    return 0;
}