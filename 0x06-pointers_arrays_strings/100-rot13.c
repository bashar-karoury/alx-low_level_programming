#include "main.h"
/**
* rot13 - encodes a string using rot13
* @s : string to be encoded
*
* Return: pointer to char array pointed to encoded string
*/
char *rot13(char *s)
{
	char keys[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',\
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A',\
			'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',\
			'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	char subs[] =  {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',\
			'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N',\
			'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C',\
			'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	int idx = 0;
	int i;

	while (s[idx] != '\0')
    {
		for (i = 0; i < 52; i++)
		{
			if (s[idx] == keys[i])
			{
				s[idx] = subs[i];
				break;
			}
		}
		idx++;
	}
	return (s);
}
