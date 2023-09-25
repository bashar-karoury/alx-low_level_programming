#include "main.h"
/**
* _strspn - calculate number of bytes in the initial segment
* which consist only of bytes form accept
* @s: string to be scanned
* @accept: string containing characters to be looking for
*
* Return: Number of bytes similar to accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (!(found))
		{
			break;
		}
		count++;
		i++;
	}
	return (count);
}
