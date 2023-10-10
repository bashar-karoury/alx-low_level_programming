#include <stdio.h>
#include <stdlib.h>

int IsNumber(char *s);

/**
* main - program that adds positive numbers
* @argc: number of command line arguments
* @argv: char pointer to array of command line arguments
*
* Return: program status as int
*/
int main(int argc, char **argv)
{
	int number, i, sum = 0;
	int result = 0;

	if (argc < 2)
	{

		printf("%d\n", 0);
		result = 0;
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(IsNumber(argv[i])))
			{
				printf("Error\n");
				result = 1;
				break;
			}
			number = atoi(argv[i]);
			if (number > 0)
				sum += number;
		}
		if (!result)
			printf("%d\n", sum);
	}
	return (result);
}

/**
 * IsNumber - checks if string represent valid digits
 * @s : number in ascii
 *
 * Return: Result of test: if number returns 1, Otherwise return 0
*/
int IsNumber(char *s)
{
	int result = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			result = 0;
			break;
		}
		i++;
	}
	return (result);
}
