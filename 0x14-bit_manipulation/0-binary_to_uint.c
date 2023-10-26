#include "main.h"
#include <stdlib.h>
/**
* binary_to_uint - convert ascii binaray to unsinged int
* @b: pointer to binary characteres
*
* Return: converted number as unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;
	unsigned int x = 0;

	if (b != NULL)
	{
		while (b[i] != '\0')
			i++;
		i--;
		while (i >= 0)
		{
			if (b[i] == '1')
			{
				result = ((0x1 << x) | result);
			}
			else if (b[i] == '0')
			{

			}
			else
			{
				result = 0;
				break;
			}
			i--;
			x++;
		}
	}
	return (result);
}
