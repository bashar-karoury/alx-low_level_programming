#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_search - searchs for a value in an array of integers using
* binary search algorithm
* @array: pointer to first element in array
* @size: size of array
* @value: value to be searched for
*
* Return: the first index where value is located, -1 if array is NULL or
* value isn't found
*/
int binary_search(int *array, size_t size, int value)
{
	int result = -1;
	int start = 0;
	int end = size - 1;
	int mid = 0;

	if (array != NULL)
	{
		while (start <= end)
		{
			mid = (end - start) / 2 + start;
			printf("Searching in array:");
			print_array(array, start, end);
			if (value > array[mid])
			{
				start = mid + 1;
			}
			else if (value < array[mid])
			{
				end = mid - 1;
			}
			else
			{
				result = mid;
				break;
			}
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
		if (i < (end))
			printf(",");
	}
	printf("\n");
}
