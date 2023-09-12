#include <stdio.h>


/**
* main - program that print the first fibonacci number
*
* Return: 0 on Success
*/
int main(void)
{

	int count = 2;
	long int pre_number = 2;
	long int pre_pre_number = 1;
	long int printed_number;

	printf("1, ");
	printf("2, ");
	while (count <= 50)
	{
		printed_number = pre_number + pre_pre_number;
		printf("%ld", printed_number);
		if (count < 50)
		{
			printf(", ");
		}
		pre_pre_number = pre_number;
		pre_number = printed_number;
		count++;
	}
	return (0);
}
