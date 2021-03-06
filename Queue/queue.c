#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

Queue *getNewQueue(void)
{
    Queue *newQueue = (Queue *) malloc(sizeof(Queue));

    newQueue->size = 0;
    newQueue->front = NULL;
    newQueue->tail = NULL;

    return newQueue;
}

void enqueue(Queue *q, int value)
{
    if(!q)
	return;

    Node *newNode = (Node *) malloc(sizeof(Node));

    newNode->value = value;
    newNode->next = NULL;

    if(!q->size)
    {
	q->front = newNode;
	q->tail = newNode;
    }
    else
    {
	q->tail->next = newNode;
	q->tail = newNode;
    }

    q->size++;
}

int dequeue(Queue *q)
{
    if(!q || q->size == 0)
	return -1;

    Node *auxNode;
    int value;

    auxNode = q->front;
    value = auxNode->value;

    q->front = q->front->next;

    free(auxNode);

    q->size--;

    return value;
}
