#include "main.h"

/**
* main - prgram to calculate sum of multiples of 3 or 5 from 0 to 1024
*
* Return: Always 0
 */
int main(void)
{	
	int sum = 0;
	int i;

	for(i = 1; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum += i;
	}
	printf("Sum = %d\n", sum);
	return (0);
}
