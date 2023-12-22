#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *head;
	hash_node_t *freed;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head)
			{
				freed = head;
				head = head->next;
				free(freed->key);
				free(freed->value);
				free(freed);
			}
		}
		free(ht->array);
		free(ht);
	}
}
