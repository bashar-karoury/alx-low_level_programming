#include "main.h"

/**
* print_rev - prints reverse of string to stdout
* @str: string to be printed reversed
*/
void print_rev(char *str)
{
	int count = 0;
	int i;

	while (str[count] != 0)
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
