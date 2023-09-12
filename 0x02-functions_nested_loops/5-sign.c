#include "main.h"
/**
* print_sign - print sign of number
* @n: number to be tested of type int
*
* Return: 1 if number is positive, 0 if it is 0
* and -1 if it is negative
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
