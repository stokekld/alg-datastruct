#include <stdio.h>

#include "lsearch.h"

int main()
{
    int array1[10] = {1, 3, 4, 7, 9, 12, 14, 45, 62, 93};

    printf("Index of the value 14: %d\n", linearSearch(array1, 10, 14));
    printf("Index of the value 62: %d\n", linearSearch(array1, 10, 62));
    printf("Index of the value 100: %d\n", linearSearch(array1, 10, 100));

    return 0;
}
