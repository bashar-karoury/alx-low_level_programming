#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiple two numbers
* @argc: number of command line arguments
* @argv: char pointer to array of command line arguments
*
* Return: program status as int
*/
int main(int argc, char **argv)
{
	int n1, n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
