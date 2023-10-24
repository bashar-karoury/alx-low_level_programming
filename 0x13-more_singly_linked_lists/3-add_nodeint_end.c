#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * add_nodeint_end - adds a new node at end of a list
 * @head: double pointer to listint_t
 * @n: Integer of new node
 *
 * Return: pointer to the new node, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *trav_node = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (trav_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (trav_node->next != NULL)
			trav_node = trav_node->next;
		trav_node->next = new_node;
	}

	return (new_node);
}
