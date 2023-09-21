#include "main.h"


/**
* leet - encodes a string into 1337
* @s: string to be modified
*
* Return: pointer to char array modified
*/
char *leet(char *s)
{
	char lower_keys[] = {'a', 'e', 'o', 't', 'l'};
	char upper_keys[] = {'A', 'E', 'O', 'T', 'L'};
	char subs[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; i < 5; i++)
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == lower_keys[i] || s[j] == upper_keys[i])
				s[j] = subs[i];
			j++;
		}
	}
	return (s);
}
