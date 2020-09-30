/*
CH-230-A
a7 p1.h
Amartya Vats
a.vats@jacobs-university.de
*/

//declaring struct for a linked list
struct list {
    int info;
    struct list *next;
};

struct list * push_end (struct list *old_list ,int new_char);
struct list * push_begin (struct list * old_list ,int new_char);
struct list * removefirstItem(struct list *list);
void print_list(struct list * list);
void free_list(struct list* old_list);