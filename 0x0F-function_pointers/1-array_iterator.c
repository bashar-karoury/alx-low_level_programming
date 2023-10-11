#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - function that execute a function given as a parameter
* on each element of array
* @array: array as pointer to int
* @size: size of array
* @action: function to to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if ((action != NULL) && (array != NULL))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
