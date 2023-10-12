#include "variadic_functions.h"

/**
* print_numbers - prints arguments numbers
* @separator: string as separator to be printed between numbers
* @n: number of varaible arguments
* @...: variable number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_p;
	unsigned int i = 0;

	va_start(args_p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_p, int));
		if ((separator != NULL) && (i < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args_p);
}
