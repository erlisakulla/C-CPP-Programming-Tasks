/*
CH-230-A
queue.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if (!queue_is_full(pq))
	{
		Node *new_node = (Node*) malloc(sizeof(Node));
		if (new_node == NULL) {
			printf("Error allocating memory\n");
			exit(1);
		}//allocating memory to the new node
		
		new_node->item = item;
		new_node->next = NULL;
		
		//adding element to queue
		if(queue_is_empty(pq)){
			pq->front = new_node;	
		}
		else {
			(pq->rear)->next = new_node;
		}
		//changing pointer to the new added item
		pq->rear = new_node; 
		//increasing the number of items
		pq->items++;

		return 0;
	}
	else {
		return -1;
	}//error for queue overflow
}

int dequeue(Item *pitem, Queue *pq)
{
	if(!queue_is_empty(pq)) {
		Node *new_node = (Node*) malloc(sizeof(Node));
		if (new_node == NULL) {
			printf("Error allocating memory\n");
			exit(1);
		} //dynamically allocating memory to new node
		
		//removing item from queue
		*pitem = (pq->front)->item;
		new_node = pq->front;
		pq->front = new_node->next;
		free(new_node);
		pq->items--;
		
		if(queue_is_empty(pq)){
			initialize_queue(pq); 
		}

		return 0;		
	}
	else {
		return -1;
	}
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue *pq) {
	Node *new_node ;
	printf("content of the queue: ");
	for(new_node = pq->front; new_node != NULL; new_node = new_node->next) {
		printf("%d ", new_node->item);
	} //looping through the queue and printing its content
	printf("\n");
}
