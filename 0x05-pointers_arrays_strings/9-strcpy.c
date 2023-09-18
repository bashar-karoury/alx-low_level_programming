#include "main.h"

/**
* _strcpy - copies string pointed to by src to buffer
* pointer to by des
* @dest: buffer to copy data to
* @src: buffer to copy data from
*
* Return: pointer to destination buffer
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
