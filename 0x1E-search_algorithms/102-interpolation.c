#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* interpolation_search - searchs for a value in an array of integers using
* interpolation_search algorithm
* @array: pointer to first element in array
* @size: size of array
* @value: value to be searched for
*
* Return: the first index where value is located, -1 if array is NULL or
* value isn't found
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t result = -1;
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = low + (((double)(high - low) /
							 (array[high] - array[low])) * (value - array[low]));

	if (array == NULL)
		return (-1);

	printf("size of array = %ld\n", size);
	while (pos <= high)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
		{
			while (value == array[pos - 1] && pos > 0)
				pos--;
			result = pos;
			break;
		}
		else if (value > array[pos])
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}


		/* get next position */
		pos = low + (((double)(high - low) /
							 (array[high] - array[low])) * (value - array[low]));
	}
	if (pos > high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
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
