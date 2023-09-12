#include "main.h"
#include <stdio.h>
void printInt(int n);

/**
* print_to_98 - prints all numbers from n to 98
* @n: starting integer
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printInt(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printInt(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		printInt(n);
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
