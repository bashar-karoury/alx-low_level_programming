#include "main.h"


/**
* _strcat - concanate string in srt to dest
* @dest: char* pointer to destination string
* @src: char* pointer to source string
*
* Return: pointer to dest after appending src to it
*/
char *_strcat(char *dest, char *src)
{
	int idx_1 = 0;
	int idx_2 = 0;

	while (dest[idx_1] != '\0')
	{
		idx_1++;
	}

	while (src[idx_2] != '\0')
	{
		dest[idx_1++] = src[idx_2++];
	}

	dest[idx_1] = src[idx_2];
	return (dest);
}
