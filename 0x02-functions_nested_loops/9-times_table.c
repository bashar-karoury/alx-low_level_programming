#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0.
*
*/
void times_table(void)
{

	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mul_result = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (mul_result < 10)
					_putchar(' ');
			}
			if (mul_result >= 10)
			{
				int tenth =  mul_result / 10;
				int ones = mul_result % 10;

				_putchar('0' + tenth);
				_putchar('0' + ones);
			}
			else
			{
				_putchar('0' + mul_result);
			}

		}

		_putchar('\n');
	}

}
