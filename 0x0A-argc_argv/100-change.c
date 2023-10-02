#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints the minimum number of coins to make
* change for an amount of money
* @argc: number of command line arguments
* @argv: char pointer to array of command line arguments
*
* Return: program status as int
*/
int main(int argc, char **argv)
{
	int result = 0;
	int n, count = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n < 0)
		{
			printf("0\n");
		}
		else
		{
			while (n)
			{
				printf("n = %d  , coins[i] = %d\n", n, coins[i]);
				if ((n / coins[i]))
				{
					n -= coins[i];
					count++;
				}
				else
				{
					i++;
				}
			}
			printf("%d\n", count);
		}
	}
	else
	{
		printf("Error\n");
		result = 1;
	}
	return (result);
}
