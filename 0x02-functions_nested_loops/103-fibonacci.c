#include <stdio.h>


/**
* main - program that find and print the sum of even numbers of
* fibonacci sequence which is less than 4,000,000
*
* Return: 0 on Success
*/
int main(void)
{

	long int pre_number = 2;
	long int pre_pre_number = 1;
	long int printed_number = 0;
	long int even_sum = 2;

	while (printed_number < 4000000)
	{
		printed_number = pre_number + pre_pre_number;
		pre_pre_number = pre_number;
		pre_number = printed_number;
		if ((printed_number % 2) == 0)
			even_sum += printed_number;
	}
	printf("%ld\n", even_sum);
	return (0);
}
