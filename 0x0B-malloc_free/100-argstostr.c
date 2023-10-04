#include <stdlib.h>
#include "main.h"

unsigned int _strlength(char *str);
char *_strcpy_update_pointer(char *dest, char *src);
/**
 * argstostr - concatenates all arguments of program
 * @ac: arcguments count
 * @av: double pointer to arguments
 *
 * Return: pointer to concatenation result
 */
char *argstostr(int ac, char **av)
{
	char *concat_str = NULL;
	int i;
	unsigned int size = 0;
	char *temp_ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/*Calculate size to allocate*/
	for (i = 0; i < ac; i++)
	{
		size += _strlength(av[i]);
		size++;							/* '\n' character */
	}
	size++;								/* '\0' characer */
	concat_str = (char *) malloc(size);

	if (concat_str != NULL)
	{
		temp_ptr = concat_str;
		for (i = 0; i < ac; i++)
		{
			temp_ptr = _strcpy_update_pointer(temp_ptr, av[i]);
			*(temp_ptr) = '\n';
			temp_ptr++;
		}
		*(temp_ptr) = '\0';
	}
	return (concat_str);
}

/**
 * _strlength - calculate length of string
 * @str: char pointer to string
 *
 * Return: length of string
 */
unsigned int _strlength(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy_update_pointer - copies string pointed to by
 * src to destination buffer and return updated pointer to next element
 * pointer to by des
 * @dest: buffer to copy data to
 * @src: buffer to copy data from
 *
 * Return: pointer to end of destination buffer after last element
 */
char *_strcpy_update_pointer(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (&dest[i]);
}
