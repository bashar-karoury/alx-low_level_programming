#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
* linear_search - searchs for a value in an array of integers using
* linear search algorithm
* @array: pointer to first element in array
* @size: size of array
* @value: value to be searched for
*
* Return: the first index where value is located, -1 if array is NULL or
* value isn't found
*/
int linear_search(int *array, size_t size, int value)
{
	int result = -1;
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				result = i;
				break;
			}
		}
	}
	return (result);
}
