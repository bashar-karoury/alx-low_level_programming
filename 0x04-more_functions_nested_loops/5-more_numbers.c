#include "main.h"

void print2DInt(int n);
/**
* more_numbers - print 10 times the numbers from 0 to 14
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			print2DInt(i);
		}
		_putchar('\n');
	}
}

/**
   * print2DInt - prints integers of 2 digits  to stdout using _putchar
    * @n: integer to be printed
     */
void print2DInt(int n)
{
	if (n >= 10)
		_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));
}
