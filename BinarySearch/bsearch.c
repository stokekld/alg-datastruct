#include "bsearch.h"

int binarySearch(int *array, int arraySize, int value)
{
    int index, leftBound = 0, rightBound = arraySize - 1;

    while(leftBound < rightBound)
    {
	index = ( leftBound + rightBound ) / 2;

	if(array[index] == value)
	    return index;
	else if (array[index] < value)
	    leftBound = index + 1;
	else
	    rightBound = index -1;
    }

    return -1;
}
