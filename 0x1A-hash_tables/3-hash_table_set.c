#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds element to the hash table
 * @ht: pointer to hash table
 * @key: key of the element
 * @value: value of the element
 *
 * Return: 1 if successeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element = NULL;
	hash_node_t *head_element = NULL;
	/*Check hash table*/
	if (ht == NULL)
		return (0);
	/*Calculate hash of key*/
	index = key_index((const unsigned char *)key, ht->size);

	/*Allocate memory for new element*/
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);
	/*Allocate key memory for new node*/
	new_element->key = malloc(strlen(key) + 1);
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}

	/*Allcoate value memeory for new node*/
	new_element->value = malloc(strlen(value) + 1);
	if (new_element->value == NULL)
	{
		free(new_element->key);
		free(new_element);
		return (0);
	}
	/*Get head node at index*/
	head_element = ht->array[index];
	/*head now is the new element*/
	new_element->next = head_element;
	ht->array[index] = new_element;
	return (1);
}
