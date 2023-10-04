#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars, and initializes
* it with a specific char
* @size : size of array
* @c: character to initialize the array with it
*
* Return: char pointer to created array*
*/
char *create_array(unsigned int size, char c)
{
	char *created_array = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		created_array = (char *)malloc(size * sizeof(char));

		if (created_array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				created_array[i] = c;
			}
		}
		return (created_array);
	}
}
