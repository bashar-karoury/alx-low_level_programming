#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of bit to get
 *
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result = -1;

	if (index < (8 * sizeof(unsigned long int)))
	{
		result = ((n >> index) & 0x01);
	}

	return (result);
}
