#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - struct that represetn dogs
* @name: char pointer to string as dog name
* @age: float as dog age
* @owner: char pointer to strint as owner name
*/
struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
