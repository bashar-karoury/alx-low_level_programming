#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees memory ocuupied by single linked list
* @head: pointer to head node of linked list
*/
void free_list(list_t *head)
{
	list_t *trav_node = head;
	list_t *free_node = NULL;

	while (trav_node != NULL)
	{
		free_node = trav_node;
		trav_node = trav_node->next;
		free(free_node->str);
		free(free_node);
	}
}
