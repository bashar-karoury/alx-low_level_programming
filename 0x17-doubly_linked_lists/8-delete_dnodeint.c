#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the nth node of double linked list
 * @head: head pointer to list
 * @index: index of node to be returned
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *trav_node = *head;

	if (head == NULL)
		return (-1);
	while (trav_node != NULL && i < index)
	{
		trav_node = trav_node->next;
		i++;
	}

	if (trav_node == NULL)
	{
		return (-1);
	}
	else
	{
		if ((trav_node->prev))
			(trav_node->prev)->next = trav_node->next;
		else
			*head = trav_node->next;
		if ((trav_node->next))
			(trav_node->next)->prev = trav_node->prev;
		free(trav_node);
		return (1);
	}
}
