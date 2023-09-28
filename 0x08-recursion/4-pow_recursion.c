#include "main.h"

/**
* _pow_recursion - calculates power of value to another one
* @x: base value as int
* @y: power value as int
*
* Return: result as int, -1 if @y is less than 0.
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * (_pow_recursion(x, (y - 1))));
	}

}
