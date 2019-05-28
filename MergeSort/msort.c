#include <stdio.h>

#include "msort.h"

static void merge(int *array, unsigned int arraySize, unsigned int middle)
{
    int i, j, k;
    int newArray[arraySize];
    for(i=0, j=middle, k=0; k<arraySize; k++){
        newArray[k] = (j == arraySize) ? array[i++]
                    : (i == middle) ? array[j++]
                    : (array[j] < array[i]) ? array[j++]
                    : array[i++];
    }
    for(i=0; i<arraySize; i++)
	array[i] = newArray[i];
}

void mergeSort(int *array, unsigned int arraySize)
{
    if(arraySize < 2)
	return;

    int middle = arraySize / 2;

    mergeSort(array, middle);
    mergeSort(array + middle, arraySize - middle);

    merge(array, arraySize, middle);
}

