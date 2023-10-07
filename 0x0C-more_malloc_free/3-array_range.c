#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers from min value to max
* @min: lower bound of array
* @max: upper bound of array
*
* Return: pointer to newly allocated array
*/
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *array = NULL;
	int i;

	if (size <= 0)
	{
		return (NULL);
	}

	array = (int *)malloc((sizeof(int) * size));

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = min++;
		}

	}
	return (array);
}
