#include "main.h"


/**
* _strncat - concanate n chars from string in srt to dest
* @dest: char* pointer to destination string
* @src: char* pointer to source string
* @n: numbers of characters to be concaneted
*
* Return: pointer to dest after appending src to it
*/
char *_strncat(char *dest, char *src, int n)
{
	int idx_1 = 0;
	int idx_2 = 0;

	while (dest[idx_1] != '\0')
	{
		idx_1++;
	}

	while ((src[idx_2] != '\0') && (idx_2 < n))
	{
		dest[idx_1++] = src[idx_2++];
	}

	dest[idx_1] = '\0';
	return (dest);
}
