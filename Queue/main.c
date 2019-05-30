#include <stdio.h>

#include "queue.h"

int main()
{
    Queue *q = getNewQueue();

    enqueue(q, 723);
    enqueue(q, 128);
    enqueue(q, 873);

    printf("%d, ", dequeue(q));
    printf("%d, ", dequeue(q));
    printf("%d, ", dequeue(q));
    printf("%d, ", dequeue(q));

    return 0;
}
