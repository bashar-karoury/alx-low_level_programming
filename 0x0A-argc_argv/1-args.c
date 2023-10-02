#include <stdio.h>

/**
* main - program that prints count of command line arguments
* @argc: number of command line arguments
* @argv: char pointer to array of command line arguments
*
* Return: program status as int
*
*/
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc);
	return (0);
}
