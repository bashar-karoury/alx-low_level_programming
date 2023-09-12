#include "main.h"

void printInt(int n);
/**
* print_times_table - prints the n times table, starting with 0.
* @n: integer of table base
*/
void print_times_table(int n)
{
	int i, j;

	if (n >= 15)
		return;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			int mul_result = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (mul_result < 100)
					_putchar(' ');
				if (mul_result < 10)
					_putchar(' ');
			}
			printInt(mul_result);
		}
		_putchar('\n');
	}
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
