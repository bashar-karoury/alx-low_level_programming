#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* jump_search - searchs for a value in an array of integers using
* jump_search algorithm
* @array: pointer to first element in array
* @size: size of array
* @value: value to be searched for
*
* Return: the first index where value is located, -1 if array is NULL or
* value isn't found
*/
int jump_search(int *array, size_t size, int value)
{
	int result = -1;
	int step = sqrt(size);
	int i = 0;

	int idx = 0;

	if (array == NULL)
		return (-1);

	/* determine the interval */
	while (value > array[idx] && idx < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		idx += step;
	}
	printf("Value found between indexes [%d] and [%d]\n", idx - step, idx);
	/* Now check interval one be one */
	for (i = idx - step; i <= idx && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			result = i;
			break;
		}
	}
	return (result);
}

/**
* print_array - print array of int
* @array: pointer to first element
* @start: first element to print
* @end: last elemnt to print
 */
void print_array(int *array, int start, int end)
{
	int i = 0;

	for (i = start; i <= end; i++)
	{
		printf(" %d", array[i]);
		if (i < (end - 1))
			printf(",");
	}
	printf("\n");
}
