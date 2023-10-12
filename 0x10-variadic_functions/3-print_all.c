#include "variadic_functions.h"

/**
* print_all - prints all arguments
* @format: const pointer to const char as string to format of passed arguments
* @...: variable number of arguments
*/
void print_all(const char * const format, ...)
{
	va_list args_p;
	unsigned int i = 0;
	char *str = NULL;

	va_start(args_p, format);
	while (format[i] != '\0')
	{
		if ((i) && (format[i] == 's' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 'c'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args_p, int));
				break;
			case 'i':
			    printf("%d", va_arg(args_p, int));
				break;
			case 'f':
				printf("%f", va_arg(args_p, double));
				break;
			case 's':
				str = va_arg(args_p, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				valid = 0;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args_p);
}
