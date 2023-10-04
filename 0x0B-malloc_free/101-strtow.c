#include <stdlib.h>
#include "main.h"
int count_words(char *str);
void strncopy(char *dest, char *src, int n);

/**
 * strtow - splist string into words
 * @str: pointer to string
 *
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	int w_c = 0;
	char **strings = NULL;
	int c = 0;
	int idx = 0;
	int i = 0;
	int not_alloc = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	if (*str == '\0')
	{
		return (NULL);
	}

	w_c = count_words(str);
	strings = (char **)malloc((sizeof(char *) * w_c) + 1);  /*:NULL*/

	if (strings != NULL)
	{
		while (str[i] != '\0')
		{
			if (str[i] == ' ')
			{
				if (c)
				{
					strings[idx] = (char *)malloc((sizeof(char) * c) + 1);
					if (strings[idx] != NULL)
					{
						strncopy(strings[idx], &(str[i - c]), c);
						strings[idx][c] = '\0';
						idx++;
					}
					else
					{
						not_alloc = 1;
						break;
					}
				}
				c = 0;
			}
			else
			{
				c++;
			}
			i++;
		}
		if (c)
		{
			strings[idx] = (char *)malloc((sizeof(char) * c) + 1);
			if (strings[idx] != NULL)
			{
				strncopy(strings[idx], &(str[i - c]), c);
				strings[idx][c] = '\0';
				idx++;
			}
			else
			{
				not_alloc = 1;
			}
		}

		strings[idx] = NULL;
	}
	if (not_alloc)
	{
		while (--idx >= 0)
		{
			free(strings[idx]);
		}
		free(strings);
		return (NULL);
	}
	return (strings);
}


/**
 * count_words - count words in string separated by spaces
 * @str: char pointer to string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int i = 0;
	int space_encountered = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (space_encountered && str[i] != ' ')
		{
			count++;
		}
		if (str[i] == ' ')
		{
			space_encountered = 1;
		}
		else
		{
			space_encountered = 0;
		}
		i++;
	}
	return (count);
}

/**
 * strncopy - copy data from buffer to anothre
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to copy
 */
void strncopy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
}
