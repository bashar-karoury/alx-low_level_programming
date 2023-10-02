#include <stdio.h>

/**
* main - program that prints its name
* @argc: number of command line arguments
* @argv: char pointer to array of command line arguments
*
* Return: program status as int
*
*/
int main(int __attribute__((__unused__)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
