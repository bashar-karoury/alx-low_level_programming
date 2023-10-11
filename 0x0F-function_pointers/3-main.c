#include "3-calc.h"

/**
* main - Main function of a program that perform simple arithmatic opeation
* on two arguments and print result
* @argc: number of arguments to be be passed
* @argv: double pointer as list of arguments should be two arguments
*
* Return: exit code of operation, 0 if success.
 */
int main(int argc, char **argv)
{
	int num_1, num_2;
	char *op;
	int	(*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	op = argv[2];

	operation = get_op_func(op);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
	{
		printf("%d\n", operation(num_1, num_2));
	}
	return (0);
}
