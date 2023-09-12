#include <stdio.h>


/**
* main - program that print the first fibonacci number
*
* Return: 0 on Success
*/
int main(void)
{

	int count = 2;
	double pre_number = 2;
	double pre_pre_number = 1;
	double printed_number;

	printf("1, ");
	printf("2, ");
	while (count <= 97)
	{
		printed_number = pre_number + pre_pre_number;
		printf("%.0f", printed_number);
		if (count < 97)
		{
			printf(", ");
		}
		pre_pre_number = pre_number;
		pre_number = printed_number;
		count++;
	}
	printf("\n");
	return (0);
}
