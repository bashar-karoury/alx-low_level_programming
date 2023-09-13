#include <stdio.h>


/**
* main - program that print the first fibonacci number
*
* Return: 0 on Success
*/
int main(void)
{

	int count = 2;
	unsigned long int pre_number = 2;
	unsigned long int pre_pre_number = 1;
	unsigned long int printed_number;
	unsigned long int pre_number_right_h, pre_number_left_h, pre_pre_right_h, pre_pre_left_h, number_right_h, number_left_h;
	printf("1, ");
	printf("2, ");
	while (count < 92)
	{
		printed_number = pre_number + pre_pre_number;
		printf("%lu", printed_number);
		printf(", ");

		pre_pre_number = pre_number;
		pre_number = printed_number;
		count++;
	}
	

	pre_number_right_h = pre_number  % 1000000000;
	pre_number_left_h = pre_number   / 1000000000;
	pre_pre_right_h = pre_pre_number % 1000000000;
	pre_pre_left_h = pre_pre_number  / 1000000000;

	while (count <= 97)
	{	
		
		number_right_h = pre_number_right_h + pre_pre_right_h;
		number_left_h = pre_number_left_h + pre_pre_left_h;
		if (number_right_h > 1000000000)
		{
		    	number_left_h++;
			number_right_h = number_right_h % 1000000000;
		}


		printf("%lu%lu", number_left_h, number_right_h);
		if (count < 97)
		{
			printf(", ");
		}
		pre_pre_right_h = pre_number_right_h;
		pre_pre_left_h = pre_number_left_h;
		pre_number_right_h = number_right_h;
		pre_number_left_h = number_left_h;
		count++;
	}
	printf("\n");
	return (0);
}
