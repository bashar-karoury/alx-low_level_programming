#include <stdio.h>
#include <stdlib.h>
/**
* main - MAIN program that prints opcode of itself
* @argc: argument count
* @argv: list of arguments
*
* Return: Always (0)
 */
int main(int argc, char **argv)
{
	unsigned char *p = (unsigned char *)main;
	unsigned char i = 0;
	int length;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	length = atoi(argv[1]);

	if (length < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < length ; i++)
	{
		printf("%02x", (*p));
		p++;
		if (i < (length - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
