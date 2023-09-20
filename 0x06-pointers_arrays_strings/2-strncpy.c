#include "main.h"


/**
 * _strncpy - opies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest
 * @dest: char* pointer to destination string
 * @src: char* pointer to source string
 * @n: numbers of characters to be copied
 *
 * Return: pointer to dest after appending src to it
 */
char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;

	while ((src[idx] != '\0') && (idx < n))
	{
		dest[idx] = src[idx];
		idx++;
	}

	while (idx < n)
	{
		dest[idx++] = '\0';
	}

	return (dest);
}
