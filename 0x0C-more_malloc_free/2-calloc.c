#include "main.h"
#include <stdlib.h>
/**
* _calloc -  allocates momory for array
* @nmemb: number of array members
* @size: size of member
*
* Return: pointer to allocatd memory or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int total_size = nmemb * size;
	unsigned int i;

	if ((size == 0) | (nmemb == 0))
	{
		return (NULL);
	}

	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		for (i = 0; i < total_size; i++)
		{
			((char *)ptr)[i] = 0;
		}

	}
	return (ptr);
}
