#include "variadic_functions.h"

/**
* print_strings - prints arguments stirngs
* @separator: string as separator to be printed between numbers
* @n: number of varaible arguments
* @...: variable number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_p;
	unsigned int i = 0;
	char *str = NULL;

	va_start(args_p, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args_p, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if ((separator != NULL) && (i < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args_p);
}
