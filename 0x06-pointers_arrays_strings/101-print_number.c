#include "main.h"
#include <stdio.h>

/**
  * print_number - prints an integer using _putchar only
  * @n: integer to be printed
  */
void print_number(int n)
{
/*
* determine loop counter by divide n by 10
*/
	unsigned int temp = n;
	int temp2;
	int counter = 0;
	int mul = 1;
	int i;
	int p;

	if (n < 0)
	{
		temp = -(n);
		_putchar('-');
	}

	temp2 = temp;
	while (temp2 / 10 != 0)
	{
		temp2 /= 10;
		counter++;
		mul *= 10;
	}


	for (i = counter; i >= 0; i--)
	{
		p = temp / mul;
		_putchar('0' + p);
		temp = temp % (mul);
		mul /= 10;
	}

}
