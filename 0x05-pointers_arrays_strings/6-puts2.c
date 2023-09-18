#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: pointer to char
*/
void puts2(char *str)
{
	int count = 0;

	while (str[count] != 0)
	{
		_putchar(str[count]);
		count += 2;
	}
	_putchar('\n');
}
