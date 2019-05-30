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
