#include "main.h"
#include <stdio.h>
/**
* print_last_digit - prints and returns last digit of number
* @n: integer to have its last digit returned and printed
*
* Return: last digit of passed integer
*/
int print_last_digit(int n)
{
	int last = n % 10;

	last = (last >= 0) ? last : -(last);
	 _putchar('0' + last);
	return (last);
}
