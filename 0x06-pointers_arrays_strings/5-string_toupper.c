#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @s: string to be changed
*
* Return: pointer to changed string
*/
char *string_toupper(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		if (s[idx] >= 'a' && s[idx] <= 'z')
		{
			s[idx] = s[idx] - 0x20;
		}
		idx++;
	}

	return (s);
}
