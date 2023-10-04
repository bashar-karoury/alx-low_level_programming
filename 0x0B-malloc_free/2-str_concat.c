#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concanate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char pointer to newly created contanated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_size = 0, s2_size = 0;
	char *concat_str = NULL;
	unsigned int i, j = 0;

	if (s1 != NULL)
	{
		while (s1[s1_size] != '\0')
			s1_size++;
	}


	if (s2 != NULL)
	{
		while (s2[s2_size] != '\0')
			s2_size++;
	}

	concat_str = malloc(s1_size + s2_size + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < s1_size; i++)
		{
			concat_str[j] = s1[i];
			j++;
		}

		for (i = 0; i < s2_size; i++)
		{
			concat_str[j] = s2[i];
			j++;
		}
		concat_str[j] = '\0';
		return (concat_str);
	}

}
