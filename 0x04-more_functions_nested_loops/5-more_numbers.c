#include "main.h"

void printInt(int n);
/**
* more_numbers - print 10 times the numbers from 0 to 14
*/
void more_numbers(void)
{
	int i;
	for (i = 0; i <= 14; i++)
	{
		printInt(i);
	}
	_putchar('\n');
}


/**
   * printInt - prints n to stdout using _putchar
    * @n: integer to be printed
     */
void printInt(int n)
{
	int a[5] = {0};
	int count = 0;
	int i;

	if (n == 0)
	{
		_putchar('0');
	return;
	}
	if (n < 0)
	{
		n = -(n);
		_putchar('-');
	}
	while (n)
	{
		a[count++] = n % 10;
		n /= 10;
	}

	for (i = 0; i < count; i++)
	{
		_putchar('0' + a[count - i - 1]);
	}
}
