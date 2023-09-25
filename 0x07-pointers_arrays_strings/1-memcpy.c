#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: char pointer to destination memory.
* @src: char pointer to source memory.
* @n: number of bytes to be copied.
*
* Return: char pointer to destinatin memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
