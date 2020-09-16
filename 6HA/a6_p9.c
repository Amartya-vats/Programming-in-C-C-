/*
CH-230-A
a6 p9.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//declaring for a struct
struct list {
    int info;
    struct list *next;
};

//function for adding element at end of linked list
struct list * push_end (struct list *old_list ,int new_char) {
    struct list *newelem, *keep_track;
    keep_track = old_list;

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

//function for inserting element at a given position
struct list * insertAfter(struct list* list, int new_data, int new_place) {
    //memory allocation for a node
    struct list *newNode = (struct list *)malloc(sizeof(list));
    newNode -> info = new_data;

    //count used in for loop
    //along with if statement to check the input
    int count =0;
    if (new_place >= 0) {
        for (struct list * p = list; p; p = p->next) {
            if (count == new_place || count == new_place + 1) {
                struct list *currentpos = list;
                while (new_place - 1 > 0) {
                    currentpos = currentpos->next;
                    new_place--;
                }
                newNode->next = currentpos->next;
                currentpos->next = newNode;
                return list;
            }
            count++;
        }
        printf("Invalid position!\n");
    }
    else {
        printf("Invalid position!\n");
    }
    return list;
}

//funtion for reversing the list
struct list * reverse_list(struct list **head)
{
    struct list *cur=NULL, *nxt=NULL;
    if (!(head || *head || (*head)->next)) {
        return *head;
    }
    nxt = *head;
    while (nxt != NULL) {
        struct list *prv = cur;
        cur = nxt;
        nxt = nxt->next;
        cur->next = prv;
    }
    *head = cur;
    return *head;
}

int main(){
    //variable declaration
    char c;
    struct list * my_list = NULL;
    int newlastelem;
    int newfirstelem;
    int newelemnode;
    int position;

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

            //case for placing an element in a specific place
            case 'i':
                scanf("%d", &position);
                scanf("%d", &newelemnode);
                my_list = insertAfter(my_list,newelemnode,position);
            break;

            //reverse the list
            case 'R':
                my_list = reverse_list(&my_list);
            break;

            //final case for freeing list
            case 'q':
                free_list(my_list);
            break;
        }
    }while (c != 'q'); //also checks for quitting the loop
    return 0;
}