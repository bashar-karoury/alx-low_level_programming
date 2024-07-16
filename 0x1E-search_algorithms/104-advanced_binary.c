#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
* advanced_binary - searchs for a first match to a value in an array
* of integers using binary search algorithm using recursive approach
* @array: pointer to first element in array
* @size: size of array
* @value: value to be searched for
*
* Return: the first index where value is located, -1 if array is NULL or
* value isn't found
*/
int advanced_binary(int *array, size_t size, int value)
{
	int result = -1;

	if (array == NULL || size == 0)
		return (-1);

	result = b_search(array, 0, size - 1, value);
	/*printf ("result = %d\n", result);*/

	return (result);
}

/**
* b_search - search in array using binary search recursively
* @array: pointer to first element in array
* @start: index of start index to be binary searched
* @end: index of last index to be binary searche
* @value: value to be searched
*
* Return: index of found value or -1 if not found
 */
int b_search(int *array, int start, int end, int value)
{
	int mid = 0;
	/*printf("start = %d, end = %d\n", start , end);*/
	printf("Searching in array:");
	print_array(array, start, end);
	if ((end - start) == 1)
	{

		if (value == array[start])
		{
			return (start);
		}

		else if (value == array[end])
		{
			return (end);
		}

		else
		{
			return (-1);
		}
	}

	mid = ((start + end) / 2);
	/*printf("mid = %d\n", mid);*/
	if (value <= array[mid])
	{
		return (b_search(array, start, mid, value));
	}
	else
	{
		return (b_search(array, mid + 1, end, value));
	}
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
