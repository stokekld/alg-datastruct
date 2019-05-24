#include "lsearch.h"

int linearSearch(int *array, unsigned int arraySize, int valueSearch)
{
    int i;

    for(i=0; i < arraySize; i++)
    {
	if(array[i] == valueSearch)
	    return i;
    }

    return -1;

}
