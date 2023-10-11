#include "function_pointers.h"

/**
* int_index - searches for first element in array that meet specific condition
* @array: array of elements to search in
* @size: size of array
* @cmp: function pointer as criteria check
*
* Return: index of match element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result = -1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				result = i;
				break;
			}
		}
	}
	return (result);
}
