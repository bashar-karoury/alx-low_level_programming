#include <stdio.h>

/**
* main - program that prints its command line arguments
* @argc: number of command line arguments
* @argv: char pointer to array of command line arguments
*
* Return: program status as int
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
