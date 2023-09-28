#include "main.h"

/**
* _strlen_recursion - calculate length of string
* @s: char pointer to string
*
* Return: lenght of string as int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
