#include "hash_tables.h"
/**
 * key_index - gives index of key
 * @key: the key to calculate the index for
 * @size: size of array of hash table
 *
 * Return: index at which key/value should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;
	return (index);

}
