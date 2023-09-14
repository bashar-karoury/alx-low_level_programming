#include "main.h"

/**
* _isdigit - test if a character is digit or not
* @c: integer to be teset
*
* Return: 1 if @c is a digit , 0 otherwises
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
