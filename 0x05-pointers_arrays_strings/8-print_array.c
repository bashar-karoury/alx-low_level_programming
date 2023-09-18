#include "main.h"
#include <stdio.h>

/**
* print_array - print elements of array
* @a: pointer to int as array
* @n: number of elements to be printed
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
