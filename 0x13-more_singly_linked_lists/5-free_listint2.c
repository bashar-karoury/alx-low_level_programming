#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - free listint
* @head: double pointer to head node
*/
void free_listint2(listint_t **head)
{
	listint_t *traverse_node = *head;
	listint_t *temp_node = *head;

	while (traverse_node != NULL)
	{
		temp_node = traverse_node;
		traverse_node = traverse_node->next;
		free(temp_node);
	}
	*head = NULL;
}
