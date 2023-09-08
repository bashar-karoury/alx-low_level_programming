#include <stdio.h>

/**
* main - Entry Point of Program
*
* Return: exit code of program
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
