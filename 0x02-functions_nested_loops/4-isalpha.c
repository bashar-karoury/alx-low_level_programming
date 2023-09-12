#include "main.h"

/**
* _isalpha - test if character is alphabet character
* @c: character to be tested
*
* Return: 1 if character is alphabet character, otherwise returns 0
*/
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >=  97) && (c <= 122)))
		return (1);
	else
		return (0);
}
