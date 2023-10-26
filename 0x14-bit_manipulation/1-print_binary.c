#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int temp = 0;
	int first_one_flag = 0;
	int max = (sizeof(unsigned long int) * 8)

	for (i = max - 1; i >= 0; i--)
	{
		temp = ((n >> i) & 0x01);
		if (temp)
		{
			first_one_flag = 1;
		}

		if (first_one_flag)
			_putchar(temp + '0');
	}
	if (!first_one_flag)
		_putchar('0');
}
