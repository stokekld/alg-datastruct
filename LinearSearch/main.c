#include <stdio.h>

#include "lsearch.h"

int main()
{
    int value;

    int array1[10] = {1, 3, 4, 7, 9, 12, 14, 45, 62, 93};

    value = linearSearch(array1, 10, 14);

    printf("Index of the value: %d\n", value);

    return 0;
}
