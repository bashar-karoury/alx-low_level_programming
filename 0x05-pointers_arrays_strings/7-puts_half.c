#include "main.h"
int _strlen(char *s);

/**
 * puts_half - prints the second half of string
 * @str : string as char pointer
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;
	int start = (len + 1) / 2;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

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
