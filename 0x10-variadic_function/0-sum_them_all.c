#include "variadic_functions.h"

/**
* sum_them_all - returns sum of all its parameters
* @n: number of varaible arguments
* @...: variable number of arguments
*
* Return: summation of araguments, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_p;
	unsigned int i = 0;
	int summation = 0;

	va_start(args_p, n);

	for (i = 0; i < n; i++)
	{
		summation += va_arg(args_p, int);
	}
	va_end(args_p);
	return (summation);
}
