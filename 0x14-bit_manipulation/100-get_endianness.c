#include "main.h"

/**
* get_endianness - checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int i = 0x04030201;

	char *p = (char *)&i;

	if (*p == 0x01)
		return (1);
	else
		return (2);
}
