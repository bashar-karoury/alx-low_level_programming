#include "main.h"

/**
* reverse_array - reverses the contents of an array of integers
* @a: array of integers
* @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int middle = n / 2;
	int i;
	int temp;

	for (i = 0; i < middle; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] =  temp;
	}
}
