#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a list
* @head: double pointer to list
* @n: Integer of the new head node
*
* Return: pointer to the new node, NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}

