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
	int result = -1;
	int low = 0;
	int high = size - 1;
	int pos = low + (((double)(high - low) /
							 (array[high] - array[low])) * (value - array[low]));

	if (array == NULL)
		return (-1);

	while (pos <= high)
	{
		/* check value at position */
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
		{
			result = pos;
			break;
		}
		else if (value > array[pos])
		{
			/* re calculate the pos for the prev sub array */
			low = pos + 1;
		}
		else
		{
			/* re calculate the pos of the next sub array */
			high = pos - 1;
		}


		/* get next position */
		pos = low + (((double)(high - low) /
							 (array[high] - array[low])) * (value - array[low]));
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
