#include "main.h"
/**
* _atoi - converts string to int
* @s: string int to be converted
*
* Return: int
*/
int _atoi(char *s)
{
	int i = 0;
	int start_i = 0;
	int end_i = 0;
	int digit_encountered = 0;
	int minus_count = 0;
	int mul_10 = 1;
	int result = 0;

	while (s[i] != 0)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (!(digit_encountered))
				start_i = i;
			end_i = i;
			digit_encountered = 1;
		}
		else
		{
			if (digit_encountered)
			{
				break;
			}
			else
			{
				if (s[i] == '-')
					minus_count++;
			}
		}
		i++;
	}

	for (i = end_i; i >= start_i; i--)
	{
		result += ((int) s[i] - (int)'0') * mul_10;
		mul_10 *= 10;
	}
	if (minus_count % 2)
		result = -(result);
	return (result);
}
