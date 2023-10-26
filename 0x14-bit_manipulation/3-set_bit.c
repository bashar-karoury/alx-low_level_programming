#include "main.h"
/**
 * set_bit - set the value of a bit at a given index
 * @n: pointer to number to set bit in
 * @index: index of bit to set
 *
 * Return: 1 if operation is success , -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int result = -1;

	if (index < (8 * sizeof(unsigned long int)))
	{
		(*n) = (*n) | (0x01 << index);
		result = 1;
	}

	return (result);
}
