#include "main.h"
#include <stdio.h>

/**
* print_buffer - dump memory buffer content
* @b: char pointer points to memory buffer location to be dumped
* @size: size of buffer
*/
void print_buffer(char *b, int size)
{
	int j;
	unsigned int rem = (10 - (size % 10));
	unsigned int _size = size + rem;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	else
	{
		unsigned int i = 0;

		for (i = 0; i < _size; i++)
		{
			if (!(i % 10))
				printf("%08x:", i);
			if (!(i % 2))
				printf(" ");
			if (i < (unsigned int)size)
				printf("%02x", b[i]);
			else
				printf("  ");
			if (!((i + 1) % 10) && (i != 0))
			{
				printf(" ");
				for (j = 0; j < 10; j++)
				{
					if (b[(i - 9) + j] < 0x20)
						printf(".");
					else
						printf("%c", b[(i - 9) + j]);
				}
				printf("\n");
			}
		}
		return;
	}
}
