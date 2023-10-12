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
	int valid = 0;

	va_start(args_p, format);
	while (format[i] != '\0')
	{
		valid = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args_p, int));
				valid = 1;
				break;
			case 'i':
			    printf("%d", va_arg(args_p, int));
				valid = 1;
				break;
			case 'f':
				printf("%f", va_arg(args_p, double));
				valid = 1;
				break;
			case 's':
				str = va_arg(args_p, char *);
				valid = 1;
				if (str != NULL)
					printf("%s", str);
				break;
			default:
				break;
		}
		if ((format[i + 1] != '\0') && (valid == 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args_p);
}
