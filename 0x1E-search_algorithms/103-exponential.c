#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
/**
* exponential_search - searchs for a value in an array of integers using
* exponential_search algorithm
* @array: pointer to first element in array
* @size: size of array
* @value: value to be searched for
*
* Return: the first index where value is located, -1 if array is NULL or
* value isn't found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 1;
	size_t s = 0;
	size_t e = 0;
	int result = -1;

	if (array == NULL)
		return (-1);

	/*check array[0]*/
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	/*determine the range */
	while (idx < size && value > array[idx])
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx *= 2;
	}

	/*range [idx/2 , min(idx, size)]*/
	s = idx / 2;
	e = MIN(idx, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", s, e);
	result = (binary_search(array + s, e - s + 1, value));
	if (result == -1)
		return (-1);
	else
		return (result + s);
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
