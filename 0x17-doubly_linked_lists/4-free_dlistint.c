#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head pointer of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node = NULL;

	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}


