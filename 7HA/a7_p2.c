/*
CH-230-A
a7 p2.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    char info;
    struct list *right;
    struct list *left;
};

//function for adding element at the fornt of list
struct list * push_begin (struct list * old_list ,char new_char) {
    struct list *newelem;
    //memory allocation
    newelem = (struct list *) malloc(sizeof(struct list));
    if (newelem == NULL) {
        printf (" Error allocating memory \n");
    return old_list;
    }

    //relinking the first element to the rest of the list
    newelem->info = new_char;
    newelem->right = old_list;
    if(newelem -> right != NULL){
        newelem->right->left=newelem;
    }
    newelem->left = NULL;
    return newelem;
}

//function for deleting an element an then reconnecting the list
struct list * deleteelem (struct list * head, struct list * node) {
    //deleting head
    if (node == head) {
        //temp = head;
        head = head->right;
        if(head != NULL) {
            head->left = NULL;
        }
        free(head);
    }
    //deleatign last node
    else if (node ->right == NULL) {
        node = node->left;
        free(node->right);
        node->right = NULL;
    }
    //other cases
    else {
        node->left->right = node->right;
        node->right->left = node -> left;
        free(node);
    }
    return head;
}


//function for checking all occurences of a char
struct list * Alloccurence(struct list * list, char x) {
    struct list * current = list;
    struct list * temp;

    //the bool checks for any changes made or not
    int bool=0;
    if(list == NULL) {return list;}
    while (current -> right != NULL) {
        //if statement to compare the char entered and the info if the list at the position
        if (current -> info == x) {
            temp = current -> right;
            list = deleteelem(list,current);
            current = temp;
            bool=1;
        }
        current = current -> right;
    }
    //if no changes made prints the desiered output
    if (bool==0){
        printf("The element is not in the list!\n");
    }
    return list;
}

void printReverse(struct list * list) {
    struct list * ptr;
    ptr = list;
    //ptr goes through the loop to the end
    while (ptr -> right != NULL) {
        ptr = ptr->right;
    }

    //this loop is to print the list reversed
    while (ptr != NULL) {
        printf("%c ", ptr->info);
        ptr = ptr ->left;
    }
    printf("\n");
}


//function to print list everytime p is enter using the switch case
void print_list(struct list * list) {
    struct list * ptr;
    //ptr goes through the loop
    for (ptr=list; ptr; ptr = ptr->right){
        printf("%c ", ptr->info);
    }
    printf("\n");
}

//deallocating the memory and exiting the program
void free_list(struct list* old_list) {
    struct list *next_elem;
    //go through the list and free each node
    while (old_list != NULL) {
        next_elem = old_list -> right;
        free(next_elem);
        old_list = next_elem;
    }
    exit(0);
}

int main(){
    //variable declaration
    char c;
    struct list * my_list = NULL;
    char newchar;
    char elemrm;
    
    //do-while loop for scaning the following variables and
    //using switch case adding them to the correct position
    do {
        scanf("%c", &c);
        getchar();
    //swtich cases to do comparsion
        switch (c) {
    
            //first case for adding element at begining of doublly linked
            case '1':
                scanf("%c", &newchar);
                getchar();
                my_list = push_begin(my_list,newchar);
            break;
         
            //second case for removing same type of element in liat
            case '2':
                scanf("%c", &elemrm);
                getchar();
                my_list = Alloccurence(my_list,elemrm);
            break;

            //third case for printing list
            case '3':
                print_list(my_list);
            break;

            //fourth case for reversing the list
            case '4':
                printReverse(my_list);
            break;

            //final case for freeing list
            case '5':
                free_list(my_list);
            break;
        }
    }while (c != '5'); //also checks for quitting the loop
    return 0;
}