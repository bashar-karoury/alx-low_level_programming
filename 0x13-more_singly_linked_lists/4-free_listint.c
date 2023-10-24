#include "lists.h"
#include <stdlib.h>
/**
* free_listint - frees memory ocuupied by single linked list
* @head: pointer to head node of linked list
*/
void free_listint(listint_t *head)
{
	listint_t *trav_node = head;
	listint_t *free_node = NULL;

	while (trav_node != NULL)
	{
		free_node = trav_node;
		trav_node = trav_node->next;
		free(free_node);
	}
}
