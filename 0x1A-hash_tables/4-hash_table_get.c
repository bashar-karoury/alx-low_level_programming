#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int index;
	hash_node_t *head = NULL;

	/*Check hash table*/
	if (ht == NULL)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);
	/*Calculate hash of key*/
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	if (head == NULL)
	{
		return (NULL);
	}
	/*Traverse thru list*/
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		printf("%s\n", head->key);
		head = head->next;
	}
	return (NULL);
}
