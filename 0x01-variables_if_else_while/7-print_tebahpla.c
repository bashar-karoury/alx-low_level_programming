#include <stdio.h>

/**
* main - Entry Point of Program
*
* Return: exit code of program
*/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
