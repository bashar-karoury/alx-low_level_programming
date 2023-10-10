#include "dog.h"

/**
* init_dog - initialize struct dog with passed fields
* @d: pointer to struct dog
* @name: char pointer to dog name
* @age: age of dog
* @owner: char pointer to owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}

	d->name  = name;
	d->age = age;
	d->owner = owner;
}
