#include <stdio.h>

#include "bsort.h"

int main()
{
    int i, array1[10] = {34, 36, 8, 26, 198, 52, 79, 42, 938, 64};

    bubbleSort(array1, 10);

    for(i = 0; i < 10; i++)
	printf("%d, ", array1[i]);

    printf("\n");

    return 0;
}
