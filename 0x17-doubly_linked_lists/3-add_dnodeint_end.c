#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end- adds a new node at the end of a dlistint_t list
 * @head: double pointer to head node
 * @n: number to be stored in node
 *
 * Return: the new node pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *trav_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;

	if (trav_node == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (trav_node->next != NULL)
			trav_node = trav_node->next;
		trav_node->next = new_node;
		new_node->prev = trav_node;
	}
	return (new_node);
}
