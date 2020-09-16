/*
CH-230-A
a6 p4.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

//function for producing the scaler product for the input
int dot_prod(int vecA[], int vecB[], int dim) {
    int prod_vec=0;
    
    //for loop for going through the vectors
    for (int i=0; i<dim; i++) {
        prod_vec += vecA[i] * vecB[i];
        if (dim == 1){
            return prod_vec;
        }
    }

    //returns final value when called
    return prod_vec;
}

int main() {

    //definations and scaning
    int num_dim;
    scanf("%d", &num_dim);

    int vector1[num_dim];
    int vector2[num_dim];

    //for loops to scan the vectors
    for (int i=0; i<num_dim; i++) {
        scanf("%d", &vector1[i]);
    }

    for (int i=0; i<num_dim; i++) {
        scanf("%d", &vector2[i]);
    }

    //check for the defination of Intermediate while compiling
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for(int i=0; i<num_dim; i++){
        printf("%d\n", vector1[i] * vector2[i]);
    }
    #endif

    //printing the scaler prodict
    printf("The scaler product is: %d\n",dot_prod(vector1,vector2,num_dim));
	return 0;
}