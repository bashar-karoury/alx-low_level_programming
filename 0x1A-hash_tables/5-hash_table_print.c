#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *head;
	int first = 1;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head)
			{
				if (!first)
					printf(", ");
				printf("\'%s': '%s\'", head->key, head->value);
				head = head->next;
				first = 0;
			}
		}
		printf("}\n");
	}
}
