#include <stdlib.h>
#include "main.h"

void	multiply_by_number_and_sum(char *n, int len,
							char number, char *result);
void	add(char *n1, char *n2);
void	multiply(char *n1, char *n2, int n1_len, int n2_len, char *mul);
int		is_number(char *n);
void	_atoi(char *n, int len);
void	_itoa(char *n, int len);
void	reverse(char *n, int len);
int		number_length(char *n);
void	printString(char *s);

/**
* main - multiply two positive numbers
* @argc: number of arguments
* @argv: vector of arguments
*
* Return: Exit code
*/
int main(int argc, char **argv)
{
	int n1_len = 0;
	int n2_len = 0;
	int n3_len = 0;
	char *n1 = argv[1];
	char *n2 = argv[2];
	char *n3 = NULL;

	if (argc != 3)
	{
		printString("Error\n");
		exit(98);
	}

	if ((!(is_number(n1))) || (!(is_number(n2))))
	{
		printString("Error\n");
		exit(98);
	}

	n1_len = number_length(n1);
	n2_len = number_length(n2);
	n3_len = n1_len + n2_len;
	_atoi(n1, n1_len);
	_atoi(n2, n2_len);

	reverse(n1, n1_len);
	reverse(n2, n2_len);

	n3 = (char *)calloc((n3_len + 1), 1);

	if (n3 == NULL)
	{
		return (98);
	}


	multiply(n1, n2, n1_len, n2_len, n3);

	while (n3[n3_len - 1] == 0)
	{
		n3_len--;
	}
	reverse(n3, n3_len);
	_itoa(n3, n3_len);
	n3[n3_len] = '\0';

	printString(n3);
	printString("\n");
	free(n3);
	return (0);
}

/**
* multiply_by_number_and_sum - multiply array by number and sum to result
* @n: pointer to array number
* @len: length of array number
* @number: number to be multiplied by
* @result: pointer to array to sum result of muliplication and return result
*/
void  multiply_by_number_and_sum(char *n, int len, char number, char *result)
{
	int i;
	int carry = 0;
	int mul = 0;
	int temp = 0;

	for (i = 0; i < len; i++)
	{
		mul = n[i] * number;
		temp = result[i] + mul + carry;
		result[i] = ((temp) % 10);
		carry = (temp) / 10;
	}

	if (carry)
		result[i] += carry;
}
/**
* multiply - multiply two positive stored in arrays
* @n1: pointer to first array number
* @n2: pointer to seconde array number
* @n1_len: length of first array number
* @n2_len: length of seconde array number
* @mul: pointer to array to store result of multiplication
*/
void multiply(char *n1, char *n2, int n1_len, int n2_len, char *mul)
{
	int i;

	for (i = 0; i < n2_len; i++)
	{
		multiply_by_number_and_sum(n1, n1_len, n2[i], (mul + i));
	}
}

/**
* is_number - check if string number only contains digist characters
* @n: number string
*
* Return: 1: if number string is true number, 0 otherwise
*/
int	is_number(char *n)
{
	int i = 0;
	int result = 1;

	while (n[i] != '\0')
	{
		if ((n[i] < '0') || (n[i] > '9'))
		{
			result = 0;
			break;
		}
		i++;
	}

	return (result);
}

/**
* reverse - reverse order of bytes in array
* @n: pointer to array
* @len: length of array
*/
void reverse(char *n, int len)
{
	int i;
	int temp = 0;

	for (i = 0; i < (len / 2); i++)
	{
		temp = n[i];
		n[i] = n[len - i - 1];
		n[len - i - 1] = temp;
	}

}

/**
* number_length - get length of number string
* @n: number string
*
* Return: lenght of string
*/
int	number_length(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* _atoi - converts items of array from ascii to int
* @n: pointer to array
* @len: length of array
* Return:
*/
void _atoi(char *n, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		n[i] -= '0';
	}
}

/**
* _itoa - convert items of array to ascii
* @n: pointer to array of int
* @len: lenght of array
*/
void _itoa(char *n, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		n[i] += '0';
	}
}

/**
* printString - print string to stdout
* @s: string to be printed
*
*/
void printString(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);
}
