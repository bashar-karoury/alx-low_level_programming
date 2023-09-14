#include "stdio.h"

long int next_prime(long int current_prime);

/**
* main -  prints the largest prime factor of the number 612852475143
*
* Return: always 0
*/
int main(void)
{
	long int number = 612852475143;
	long int next_smallest_prime = 2;

	while (number !=  next_smallest_prime)
	{
		while (!(number % next_smallest_prime))
		{
			number /= next_smallest_prime;
		}

		/*find next_smallest_prime */
		next_smallest_prime =  next_prime(next_smallest_prime);
		printf("testing %ld \n", next_smallest_prime);
	}
	printf("%ld \n", number);

	return (0);
}

/**
* next_prime - returns the next prime number after specific number
* @current_prime: current_prime
*
* Return: next prime
*/
long int next_prime(long int current_prime)
{
	int test = current_prime++;

	/*
	* test if test is prime by divide it by all number from test
	* to 2 if is divisable then it is not prime go to next
	*/

	int isPrime = 0;

	while (!(isPrime))
	{
		int i;

		test++;
		isPrime = 1;

		for (i = 2; i < test; i++)
		{
			if (!(test % i))
			{
				isPrime = 0;
				break;
			}
		}

	}

	/*
	 * that means that cuurent test value is a prime number
	 */
	return (test);
}



