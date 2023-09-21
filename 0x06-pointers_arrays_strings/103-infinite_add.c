#include "main.h"
#include <stdio.h>
int buffer_get_size(char *s);
int get_atoi_sum(char a, char b);
void reverse_char_array(char *a, int n);
/**
 * infinite_add - adds two number represented in strings
 * @n1: char pointer points to first number string
 * @n2: char pointer points to second number string
 * @r: char pointer points to where function should store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int idx1 = buffer_get_size(n1);
	int idx2 = buffer_get_size(n2);
	int idx3 = 0;
	int n1_s = idx1 + 1, n2_s = idx2 + 1;
	int carry = 0;
	int temp;
	int i;

	idx1--;
	idx2--;
	if ((n1_s > (size_r - 1)) || (n2_s > (size_r - 1)))
		r = 0;
	else if (((n1_s == (size_r - 1)) || (n2_s == (size_r - 1))) && (n1_s == n2_s))
	{
		if ((n1[0] + n2[0]) > 9)
			r = 0;
	}
	else
	{
		while (idx1 >= 0 && idx2 >= 0)
		{
			temp = get_atoi_sum(n1[idx1], n2[idx2]);
			r[idx3] = ((temp + carry) % 10) + '0';
			carry = (temp + carry) / 10;
			idx1--;
			idx2--;
			idx3++;
		}
		if (idx1 > idx2)
		{
			for (i = 0; idx1 > idx2; i++)
			{
				temp = get_atoi_sum(n1[idx1--], carry + '0');
				r[idx3++] = (temp % 10) + '0';
				carry = temp / 10;
			}
		}
		else
		{
			for (i = 0; i < (idx2 > idx1); i++)
			{
				temp = get_atoi_sum(n2[idx2--], carry + '0');
				r[idx3++] = (temp % 10) + '0';
				carry = temp / 10;
			}
		}
		if (carry)
		{
			r[idx3++] = carry + '0';
		}

		r[idx3] = '\0';
		reverse_char_array(r, idx3);
	}
	return (r);
}

/**
* get_atoi_sum - returns sum of two ascii numbers as int
* @a : first number
* @b : second number
*
* Return: result of summation as int
*/
int get_atoi_sum(char a, char b)
{
	return ((a - '0') + (b - '0'));

}

/**
* buffer_get_size - returns size of buffer
* @s: char pointer points to buffer
*
* Return: size of buffer as int
*/
int buffer_get_size(char *s)
{
	int idx = 0;

	while (s[idx] != 0)
	{
		idx++;
	}
	return (idx);
}


/**
* reverse_char_array - reverse buffer
* @a: char pointer points to buffer
* @n: size of buffer
*/
void reverse_char_array(char *a, int n)
{
	int middle = n / 2;
	int i;
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] =  temp;
	}
}
