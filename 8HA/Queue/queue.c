/*
CH-230-A
a8 p2.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

//all functions
void initialize_queue(Queue *pq) {
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq) {
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq) {
	return pq->items == 0;
}

int queue_item_count (const Queue *pq) {
    return pq->items;
}

//function to add elements to the queue
int enqueue(Item item, Queue *pq)
{
    //declaration of new node
    Node *new_node;
    new_node=(Node*)malloc(sizeof(Node));

    //checking for memory allocation
    if (new_node == NULL) {
        printf("Memory allocation failed");
        exit(0);
    }

    new_node->item=item;
    new_node->next=NULL;

    //cases when adding to an empty queue queue
    if(queue_is_empty(pq)) {
        pq->front=new_node;
        pq->rear=new_node;
    }
    else {
        pq->rear->next=new_node;
        pq->rear=new_node;
    }

    //incrementing the count for number of items
    pq->items++;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    //returning the pitem to main as this is being deleted
    *pitem=pq->front->item;
	Node *var;
    var=pq->front;
    
    pq->front=pq->front->next;
    free(var);

    if(queue_is_empty(pq)) {
        pq->front=pq->rear=NULL;
    }
    //decresing the count of items in queue
    pq->items--;
    return 0;
}

void empty_queue(Queue *pq) {
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

//printing backwards as the queue is connected from the rear
int printq(Queue pq) {
    Node * cursor = pq.front;
    printf("content of the queue: ");
    for (int i =0; i< pq.items; i++) {
	    printf("%d ", cursor->item);
	    cursor = cursor->next;
    }
    printf("\n");
    return 0;
}