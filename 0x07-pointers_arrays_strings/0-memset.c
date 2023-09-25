#include "main.h"

/**
* _memset - fills the first n bytes of the memory area pointed to by s
* with the constant byte b
* @s: pointer to string to be filled
* @b: character to be filled with
* @n: number of bytes to be filled
*
* Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
