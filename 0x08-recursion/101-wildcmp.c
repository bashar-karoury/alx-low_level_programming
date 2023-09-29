#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: char pointer to first string
 * @s2: char pointer to second string
 *
 * Return: 1 if two strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{

	if ((*s1 == '\0') && (*s2 == '\0'))
	{
		return (1);
	}
	if (*s2 == '*')
	{	
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}

		else if (*(s2 + 1) == *(s1))
		{
			return (1 & (wildcmp((s1), (s2 + 1))));
		}
		else if (*(s2 + 1) == '*')
		{
			return (1 & (wildcmp((s1), (s2 + 1))));
		}
		else if (*(s1 + 1) == '\0')
		{
			return (0);
		}
		else
		{
			return (1 & (wildcmp((s1 + 1), (s2))));
		}

	}
	else if ((*s1 == '\0') ^ (*s2 == '\0'))
	{
		return (0);
	}
	if (*s1 != *s2 )
	{
		return (0);
	}

	return (1 & (wildcmp((s1 + 1), (s2 + 1))));
}
