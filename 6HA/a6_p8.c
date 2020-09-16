/*
CH-230-A
a6 p8.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//declaring struct for a linked list
struct list {
    int info;
    struct list *next;
};

//function for adding element at end of linked list
struct list * push_end (struct list *old_list ,int new_char) {
    struct list *newelem, *keep_track;
    keep_track = old_list;
    
    newelem = (struct list*) malloc(sizeof(struct list));
   //memory allocation and checking if that was successful
    newelem = (struct list*) malloc(sizeof(struct list));
    if (newelem == NULL) {
        printf (" Error allocating memory \n");
    return old_list;
    }

    //inserting the info fo new position and connecting it to others
    newelem->info = new_char;
    newelem->next = NULL;
    if (old_list == NULL) {
        return newelem;
    }
    while (keep_track->next != NULL) {
        keep_track = keep_track->next;
        keep_track->next = newelem;
        return old_list;
    }
    return newelem;
}

//function for adding element at the fornt of list
struct list * push_begin (struct list * old_list ,int new_char) {
    struct list *newelem ;
    newelem = (struct list *) malloc(sizeof(struct list));
    if (newelem == NULL) {
        printf (" Error allocating memory \n");
    return old_list;
    }

    //relinking the first element to the rest of the list
    newelem->info = new_char;
    newelem->next = old_list ;
    return newelem;
}

//removing an element from list
struct list * removefirstItem(struct list *list)
{
    if (list) {
        list = list ->next;
    }
    return list;
}

//function to print list everytime p is enter using the switch case
void print_list(struct list * list) {
    struct list * ptr;

    //ptr goes through the loop
    for (ptr=list; ptr; ptr = ptr->next){
        printf("%d ", ptr->info);
    }
    printf("\n");
}

//deallocating the memory and exiting the program
void free_list(struct list* old_list) {
    struct list *next_elem;
    while (old_list != NULL) {
        next_elem = old_list -> next;
        free(old_list);
        old_list = next_elem;
    }
    exit(0);
}

int main(){
    //variable declaration
    char c;
    struct list * my_list = NULL;
    int newlastelem;
    int newfirstelem;

    //do-while loop for scaning the following variables and
    //using switch case adding them to the correct position
    do {
        scanf("%c", &c);
    //swtich cases to do comparsion
        switch (c) {
    
            //first case for adding element at end if 'a' is entered
            case 'a':
                scanf("%d", &newlastelem);
                my_list = push_end(my_list, newlastelem);
            break;
        
            //second case for adding element in front
            case 'b':
                scanf("%d", &newfirstelem);
                my_list = push_begin(my_list,newfirstelem);
            break;
        
            //third case for removing 1st elem
            case 'r':
                my_list = removefirstItem(my_list);
            break;

            //fourth case for list printing list
            case 'p':
                print_list(my_list);
            break;

            //final case for freeing list
            case 'q':
                free_list(my_list);
            break;
        }
    }while (c != 'q'); //also checks for quitting the loop
    return 0;
}