#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory dynamically with termination on failure
* @b: number of bytes to be allocated
*
* Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
