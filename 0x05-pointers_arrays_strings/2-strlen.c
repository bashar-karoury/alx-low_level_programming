#include "main.h"
/**
 * _strlen - count length of string
 * @s : pointer to char
 *
 * Return: length of string as int
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	return (count);
}
