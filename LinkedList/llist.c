#include <stdio.h>
#include <stdlib.h>

#include "llist.h"

LinkedList *getNewList(void)
{
    LinkedList *ll = (LinkedList *) malloc(sizeof(LinkedList));

    ll->size = 0;
    ll->first = NULL;

    return ll;
}

int addNode(LinkedList *ll, int value)
{
    int i = 0;
    Node *auxNode, *newNode = (Node *) malloc(sizeof(Node));

    newNode->value = value;
    newNode->next = NULL;

    if(ll->size == 0)
	ll->first = newNode;
    else
    {
	auxNode = ll->first;

	while(i++ < (ll->size - 1))
	    auxNode = auxNode->next;

	auxNode->next = newNode;
    }

    ll->size++;

    return 0;
}

void printList(LinkedList *ll)
{

    if(ll->size == 0)
	return;

    Node *auxNode;

    auxNode = ll->first;

    do
    {
	printf("%d, ", auxNode->value);
	auxNode = auxNode->next;
    }while(auxNode != NULL);

    printf("\n");

}
