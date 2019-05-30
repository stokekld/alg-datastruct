#include <stdio.h>

#include "stack.h"

int main()
{
    Stack *stack = getNewStack();

    push(stack, 873);
    push(stack, 383);
    push(stack, 312);

    printf("%d\n", pop(stack));
    printf("%d\n", pop(stack));
    printf("%d\n", pop(stack));
    printf("%d\n", pop(stack));

    return 0;
}
