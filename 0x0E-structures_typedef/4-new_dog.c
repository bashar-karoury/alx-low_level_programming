#include "dog.h"
#include <stdlib.h>

int __strlen(char *str);
void __strcpy(char *dest, char *src);
/**
 * new_dog - create new instance of struct dog with passed parameterss
 * @name: char pointer to dog name
 * @age: age of dog
 * @owner: char pointer to owner name
 *
 * Return: pointer to newly created struct object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = NULL;
	int name_size, owner_size;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog != NULL)
	{
		name_size = __strlen(name);
		owner_size = __strlen(owner);
		dog->name = (char *)malloc(name_size + 1);
		if (dog->name != NULL)
		{
			__strcpy(dog->name, name);
		}
		else
		{
			free(dog);
			return (NULL);
		}

		dog->owner = (char *)malloc(owner_size + 1);
		if (dog->owner != NULL)
		{
			__strcpy(dog->owner, owner);
		}
		else
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

		dog->age = age;
	}
	return (dog);
}

/**
* __strlen - calculate string length
* @str: char pointer to string
*
* Return: length of string
*/
int __strlen(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
* __strcpy - copy contents of destination buffer from source buffer
* @dest: pointer to destination buffer
* @src: pointer to source buffer
*/
void __strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
}
