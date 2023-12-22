#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: pointer to the newly created hash table, NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	hash_node_t **arr = NULL;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	arr = malloc(sizeof(hash_table_t *) * size);
	if (arr == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	new_ht->array = arr;
	new_ht->count = 0;
	return (new_ht);

}
