#include <stdlib.h>
#include "main.h"
/**
* _realloc - reallocates memory with new size
* @ptr: pointer to old memory
* @old_size: old size of memory
* @new_size: new size of reallocated memory
*
* Return: pointer to newly reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		free(new_ptr);
		return (NULL);
	}

	for (i = 0; (i < old_size) && (i < new_size); i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
