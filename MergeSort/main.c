#include <stdio.h>

#include "msort.h"

int main()
{
    int i, array1[10] = {4, 55, 1, 46, 874, 26, 96, 45, 86, 7};

    for(i = 0; i < 10; i++)
	printf("%d, ", array1[i]);

    printf("\n");

    mergeSort(array1, 10);

    for(i = 0; i < 10; i++)
	printf("%d, ", array1[i]);

    printf("\n");

    return 0;
}
