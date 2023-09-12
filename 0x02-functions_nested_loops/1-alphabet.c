#include "main.h"

/**
 * print_alphabet - prints alphabet character to stdout
 */
void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	 _putchar('\n');
}
