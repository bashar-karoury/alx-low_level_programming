#include "main.h"

/**
* factorial - calculate factorial of integer number
* @n: number to calculate factorial for
*
* Return: factorial of number as integer , -1 if @n is less than 0.
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
