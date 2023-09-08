#include <stdio.h>

/**
* main - Entry Point of Program
*
* Return: exit code of program
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i == 'q') || (i == 'e'))
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
