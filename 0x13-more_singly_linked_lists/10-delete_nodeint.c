#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes the node at index of linked list
* @head: double pointer to head node
* @index: index of node to be deleted
*
* Return: 1 if the operation is success, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int result = 1;
	listint_t *trav_node = NULL;
	unsigned int i = 0;
	listint_t *pre_node = NULL;
	listint_t *post_node = NULL;

	if (head != NULL)
	{
		trav_node = *head;

		while ((trav_node != NULL) && (i++ < (index - 1)))
			trav_node = trav_node->next;
		if (i == (index - 1))
		{
			pre_node = trav_node;

			trav_node = trav_node->next;
			post_node = trav_node->next;

			free(trav_node);
			pre_node->next = post_node;
		}
		else if (index == 0)
		{
			post_node = trav_node->next;
			free(trav_node);
			*head = post_node;
		}
		else
		{
			result = -1;
		}

	}
	else
	{
		result = -1;
	}
	return (result);
}
