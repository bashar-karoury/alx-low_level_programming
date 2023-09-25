#include "main.h"

/**
* _strstr - finds the first occurence of the substring needle in
* the string haystack.
* @haystack:  char pointer points to scanned string
* @needle:  char pointer points to substring
*
* Return: pointer to beginning of located substring or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; (haystack[i] != '\0' && needle[j] != '\0'); i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}
	}

	if (needle[j] == '\0')
		return ((char *)(&haystack[i - j]));
	else
		return ((char *)(0));
}
