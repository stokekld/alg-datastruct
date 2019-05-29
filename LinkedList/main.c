#include <stdio.h>

#include "llist.h"

int main()
{
    LinkedList *list = getNewList();

    addNode(list, 400);
    addNode(list, 383);
    addNode(list, 847);
    addNode(list, 128);
    addNode(list, 659);

    printList(list);

    deleteNode(list, 2);

    printList(list);

    return 0;
}
