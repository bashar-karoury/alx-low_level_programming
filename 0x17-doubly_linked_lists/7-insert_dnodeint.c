#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node at index in double linked list
 * @h: double pointer to head pointer of list
 * @idx: index at which to insert the ndoe
 * @n: data to be stored at node
 *
 * Return: the newly created node pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node, *next_node, *new_node, *trav_node = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = (*h);
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	while (trav_node != NULL && i < idx - 1)
	{
		i++;
		trav_node = trav_node->next;
	}

	if (trav_node == NULL)
	{
		return (NULL);
	}
	else
	{
		prev_node = trav_node;
		next_node = trav_node->next;
	}
	new_node->next = next_node;
	next_node->prev = new_node;
	new_node->prev = prev_node;
	prev_node->next = new_node;
	return (new_node);
}
