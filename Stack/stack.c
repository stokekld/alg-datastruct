#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

Stack *getNewStack(void)
{
    Stack *stack = (Stack *) malloc(sizeof(Stack));

    stack->size = 0;
    stack->top = NULL;

    return stack;
}

void push(Stack *s, int value)
{
    if(!s)
	return;

    Node *newNode = (Node *) malloc(sizeof(Node));

    newNode->value = value;
    newNode->next = s->top;

    s->top = newNode;
    s->size++;
}

int pop(Stack *s)
{
    if(!s || !s->size)
	return -1;

    Node *auxNode;
    int value;

    auxNode = s->top;
    s->top = auxNode->next;
    s->size--;

    value = auxNode->value;

    free(auxNode);

    return value;
}
