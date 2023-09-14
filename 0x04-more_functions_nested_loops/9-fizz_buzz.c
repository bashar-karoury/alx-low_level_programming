#include <stdio.h>

/**
* main - entry function of program that  prints the numbers from 1 to 100
* ,followed by a new line. But for multiples of three print Fizz instead
* of the number and for the multiples of five print Buzz
*
* Return: always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!((i % 3 == 0) || (i % 5 == 0)))
		{
			printf("%d ", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
