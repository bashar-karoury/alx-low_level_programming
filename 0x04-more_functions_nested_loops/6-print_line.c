#include "main.h"

/**
* print_line - draws a straight line it the terminal
* @n: integer that defines length of line
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
