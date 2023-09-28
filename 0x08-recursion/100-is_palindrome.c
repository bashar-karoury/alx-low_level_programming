#include "main.h"
int string_length(char *s);
int check_palindrome(char *s, int start, int end);
/**
 * is_palindrome - test if string is palindrome
 * @s: char pointer to tested string
 *
 * Return: 1 if string is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len;

	len = string_length(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
* check_palindrome - checks for palindromity of string
* @s: string to be checked
* @start: starting index
* @end: end index
*
* Return: 1 if specifed string from start to end is palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	int check = 0;

	if (start >= end)
	{
		return (1);
	}

	check = (s[start] == s[end]);
	return (check & (check_palindrome(s, start + 1, end - 1)));
}
/**
 * string_length - calculate string length
 * @s: char pointer to string
 *
 * Return: string lenght
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + string_length(s + 1));
}
