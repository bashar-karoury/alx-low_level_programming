#include "3-calc.h"

/**
 * op_add - sum two numbers
 * @a: first number as int
 * @b: seconde number as int
 *
 * Return: int as sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: first number as int
 * @b: seconde number as int
 *
 * Return: int as sub of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply two numbers
 * @a: first number as int
 * @b: seconde number as int
 *
 * Return: int as multiplication of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: first number as int
 * @b: seconde number as int, shouldn't be zero or function
 * will exit with code 100
 *
 * Return: int as division of a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calcualte modulus two numbers
 * @a: first number as int
 * @b: seconde number as int , shouldn't be zero or function
 * will exit with code 100
 *
 * Return: int as mod of a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
