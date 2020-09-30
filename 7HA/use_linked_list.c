/*
CH-230-A
use_linked_list.c (a7 p1.c)
Amartya Vats
a.vats@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

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