#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals of a square
* matrix of integers.
* @a: int pointer points to 2D array
* @size: size of 2D array
*/
void print_diagsums(int *a, int size)
{
	int i;
	int diagonal_sum = 0;
	int back_diagonal_sum = 0;

	for (i = 0; i < size; i++)
	{
		diagonal_sum += *(a + (i * (size + 1)));
		back_diagonal_sum += *(a + ((i + 1) * (size - 1)));
	}
	printf("%d, %d\n", diagonal_sum, back_diagonal_sum);
}

