#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
hash_node_t *get_item_from_bucket(hash_node_t *head, const char *key);
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
	char *new_value = NULL;
	hash_node_t *new_element = NULL, *head_element = NULL, *update_element = NULL;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head_element = ht->array[index];
	update_element = get_item_from_bucket(head_element, key);
	if (update_element)
	{
		new_value = malloc(strlen(value) + 1);
		if (!new_value)
			return (0);
		free(update_element->value);
		update_element->value = new_value;
		return (1);
	}
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);
	new_element->key = malloc(strlen(key) + 1);
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}
	strcpy(new_element->key, key);
	new_element->value = malloc(strlen(value) + 1);
	if (new_element->value == NULL)
	{
		free(new_element->key);
		free(new_element);
		return (0);
	}
	strcpy(new_element->value, value);
	new_element->next = head_element;
	ht->array[index] = new_element;
	return (1);
}

/**
 * get_item_from_bucket - search for item using key
 * @head: head node of index
 * @key: key to search for
 *
 * Return: node if found or NULL otherwise
 */
hash_node_t *get_item_from_bucket(hash_node_t *head, const char *key)
{
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
