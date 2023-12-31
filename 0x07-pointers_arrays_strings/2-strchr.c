#include "main.h"

/**
* _strchr - find first occurence of character in string.
* @s: pointer to string.
* @c: character to be located.
*
* Return: char pointer that points to first occurence
**/
char *_strchr(char *s, char c)
{
	char *ch;
	char *result = 0;

	for (ch = s; *ch != '\0'; ch++)
	{
		if (*ch == c)
		{
			result = ch;
			break;
		}
	}
	if (c == '\0')
		result = ch;

	return (result);
}
