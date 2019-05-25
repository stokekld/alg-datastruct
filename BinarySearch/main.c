#include <stdio.h>

#include "bsearch.h"

int main()
{
    int array1[10] = {1, 3, 5, 6, 9, 17, 38, 59, 81, 101};

    printf("Index of the value 5: %d\n", binarySearch(array1, 10, 5));
    printf("Index of the value 59: %d\n", binarySearch(array1, 10, 59));
    printf("Index of the value 14: %d\n", binarySearch(array1, 10, 14));

    return 0;
}
