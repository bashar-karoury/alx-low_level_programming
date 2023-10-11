#include "3-calc.h"

/**
 * get_op_func - function that returns a function pointer depending on passed
 * operation
 * @s: char pointer to operation char
 *
 * Return: pointer to function that takes two integers and return int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (!(strcmp((ops[i].op), s)))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
