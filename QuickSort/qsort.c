#include "qsort.h"

void quickSort(int *array, unsigned int arraySize)
{
    if(arraySize >= 2)
    {
		int pivot = array[arraySize/2];
		int i, j, temp;

		for(i = 0, j = arraySize - 1;; i++, j--)
		{
			while(array[i] < pivot) i++;
			while(array[j] > pivot) j--;
			if(i >= j) break;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}

		quickSort(array, i);
		quickSort(array + i, arraySize - i);
    }
}
