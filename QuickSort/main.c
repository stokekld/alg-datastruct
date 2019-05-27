#include <stdio.h>

#include "qsort.h"

int main()
{
    int i, array1[10] = {1, 5, 23, 456, 5, 3, 76, 12, 64, 5};

    for(i = 0; i < 10; i++)
	printf("%d, ", array1[i]);

    printf("\n");

    quickSort(array1, 10);

    for(i = 0; i < 10; i++)
	printf("%d, ", array1[i]);

    printf("\n");


    return 0;
}
