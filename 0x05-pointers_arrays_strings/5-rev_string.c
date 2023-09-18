#include "main.h"
int _strlen(char *s);

/**
 * rev_string - reverse string
 * @s : string as char pointer
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}

/**
 * _strlen - count length of string
 * @s : pointer to char
 *
 * Return: length of string as int
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	return (count);
}
