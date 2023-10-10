#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees memory that had been allocated previously by struct dog
* @d: poitner to dog_t struct data type
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
