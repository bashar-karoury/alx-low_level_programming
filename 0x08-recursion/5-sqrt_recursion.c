#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
* _sqrt_recursion - calculate natural square root of a number
* @n : Integer to calculate natural square root for.
*
* Return: returns result if @n has natural square root, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	int sq = 0;

	if (n < 1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	sq = _sqrt(n, 2);
	if (sq > 0)
		return (sq);
	else
		return (-1);
}

/**
* _sqrt - test if there is natural square root of a number
* @n: integer as number
* @i: starting testing number
*
* Return: sqrt of number if there is one, 0 otherwise
 */
int _sqrt(int n, int i)
{
	int check;
	int sqrt = 0;

	if (i == n)
		return (0);
	check = ((n / i) == i);
	if (check)
	{
		sqrt = i;
		return (sqrt);
	}
	else
	{
		return ((sqrt) + _sqrt(n, i + 1));
	}

}
