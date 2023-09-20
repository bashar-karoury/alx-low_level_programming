#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @s: char pointer pointing to string
*
* Return: pointer to capitalized string
*/
char *cap_string(char *s)
{
	int idx = 0;

	for (idx = 1; s[idx] != '\0'; idx++)
	{
		if ((s[idx - 1] == ',') || (s[idx - 1] == ';') ||\
				(s[idx - 1] == '.') || (s[idx - 1] == '!') ||\
				(s[idx - 1] == '\?') || (s[idx - 1] == '\"') ||\
				(s[idx - 1] == '(') || (s[idx - 1] == ')') ||\
				(s[idx - 1] == '{') || (s[idx - 1] == '}') ||\
				(s[idx - 1] == '\n') || (s[idx - 1] == '\t') ||\
				(s[idx - 1] == ' '))
		{	
			if (s[idx] >= 'a' && s[idx] <= 'z')
			{
				s[idx] = s[idx] - 0x20;
			}
		}
	}
	return (s);
}
