#include "main.h"

/**
* main -Entry point of program that prints "_putchar" to stdout
*
* Return: Status of program execution
*/
int main(void)
{
	char *s = "_putchar\n";
	int i = 0;

	while (s[i] != 0)
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
