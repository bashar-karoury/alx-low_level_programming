#include <stdio.h>

/**
* main - Entry Point of Program
*
* Return: exit code of program
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			int m, n, o, p;

			m = i / 10;
			n = i % 10;
			o = j / 10;
			p = j % 10;
			putchar(m + '0');
			putchar(n + '0');
			putchar(' ');
			putchar(o + '0');
			putchar(p + '0');
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
