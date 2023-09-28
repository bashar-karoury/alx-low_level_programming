#include "main.h"
#include <stdio.h>

int check_reminders(int n, int i);
/**
* is_prime_number - test if number is prime number or not
* @n: number as integer
*
* Return: 1 if number is prime, otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 3 || n == 2)
	{
		return (1);
	}

	return (check_reminders(n, n - 1));
}

/**
* check_reminders - check if number if prime
* @n: number to be tested.
* @i: starting number to be tested decreasingly
*
* Return: 1 if number can't be divided by all integers from i to 1
 */
int check_reminders(int n, int i)
{
	int check = 0;

	if (i == 1)
		return (1);

	check = (n % i) == 0 ? 0 : 1;
	return (check & check_reminders(n, i - 1));
}
