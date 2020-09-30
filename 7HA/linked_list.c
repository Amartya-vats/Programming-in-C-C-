/*
CH-230-A
linked_list.c (a7 p1.c)
Amartya Vats
a.vats@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>


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
struct list * removefirstItem(struct list *list) {
    if (list == NULL) {
        return list;
    }
    else {
        list = list ->next;
        return list;
    }
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