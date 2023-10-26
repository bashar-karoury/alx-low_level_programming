#include "main.h"
#include <stdio.h>

/**
* flip_bits - return the number of bits you would need to flip to get
* from one number to another
* @n: first number
* @m: seconde number
*
* Return: count of bits that should be filped so the two numbers
* equates
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i = 0;
	int max_bits = 8 * sizeof(unsigned long int);

	for (i = 0; i < max_bits; i++)
	{
		count += (((n >> i) & 0x01) ^ ((m >> i) & 0x01));
	}
	return (count);
}
