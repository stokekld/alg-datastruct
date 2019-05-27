#include "bsort.h"

void bubbleSort(int *array, int arraySize)
{
    int i, j, temp;

    for(i = 0; i < arraySize - 1; i++)
	for(j = 0; j < arraySize - i - 1; j++)
	    if(array[j] > array[j + 1])
	    {
		temp = array[j];
		array[j] = array[j + 1];
		array[j + 1] = temp;
	    }
}
