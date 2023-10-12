#include "variadic_functions.h"

/**
* print_all - prints all arguments
* @format: const pointer to const char as string to format of passed arguments
* @...: variable number of arguments
*/
void print_all(const char * const format, ...)
{
	va_list args_p;
	int i = 0;
	char *str = NULL;
	int not_first = 0;

	va_start(args_p, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		if ((i) && (not_first) && (format[i] == 's' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 'c'))
		{
			printf(", ");
		}
		switch (format[i++])
		{
			case 'c':
				printf("%c", (char)va_arg(args_p, int));
				break;
			case 'i':
			    printf("%d", va_arg(args_p, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args_p, double));
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
				continue;
		}
		not_first = 1;
	}
	va_end(args_p);
	printf("\n");
}
