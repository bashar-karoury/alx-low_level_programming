#include "main.h"
/**
 * clear_bit - clear the value of a bit at a given index
 * @n: pointer to number to clear bit in
 * @index: index of bit to clear
 *
 * Return: 1 if operation is success , -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int result = -1;

	if (index < (8 * sizeof(unsigned long int)))
	{
		(*n) = (*n) & (~(0x01 << index));
		result = 1;
	}

	return (result);
}
