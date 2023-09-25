#include "main.h"

/**
* _strpbrk - locates the first occerence in the string s of
* any of the bytes in the string
* @s: string to be scanned
* @accept: set of charater to be scanned for
*
* Return: pointer to byte in s that matches one of the bytes in  accept
* Or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	unsigned char found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			break;
		}

	}
	return (&(s[i]));
}
