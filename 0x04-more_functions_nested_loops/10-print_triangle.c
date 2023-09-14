#include "main.h"


void print_spaces(int spaces);
void print_hashes(int hashes);

/**
* print_triangle - prints a triangle
* @size: size of triangle
*/
void print_triangle(int size)
{
	int spaces = size - 1;
	int hashes = 1;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		print_spaces(spaces--);
		print_hashes(hashes++);
		_putchar('\n');
	}
}


/**
* print_spaces - print spaces on terminal
* @spaces: number of spaces to be printed
*/
void print_spaces(int spaces)
{
	int i;

	for (i = 0; i < spaces; i++)
	{
		_putchar(' ');
	}
}


/**
* print_hashes - print hashes on terminal
* @hashes: number of hashes to be printed
*/
void print_hashes(int hashes)
{
	 int i;

	for (i = 0; i < hashes; i++)
	{
		_putchar('#');
	}
}
