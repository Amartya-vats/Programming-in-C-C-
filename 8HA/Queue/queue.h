/*
CH-230-A
a8 p2.c(header queue)
Amartya Vats
a.vats@jacobs-university.de
*/
typedef int Item;

#define MAXQUEUE 10

typedef struct node
{
	Item item;
	struct node *next;
} Node;

typedef struct queue
{
	Node *front;
	Node *rear;
	int items;
} Queue;

void initialize_queue(Queue *pq);
int queue_is_full(const Queue *pq);
int queue_is_empty(const Queue *pq);
int queue_item_count(const Queue *pq);
int enqueue(Item item, Queue *pq);
int dequeue(Item *pitem, Queue *pq);
void empty_queue(Queue *pq);
int printq(Queue pq);