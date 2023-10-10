#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print struct dog parameters
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}

	if (!(d->name))
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (!(d->owner))
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
