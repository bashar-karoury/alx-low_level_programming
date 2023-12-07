#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of double linked list
 * @head: head pointer to list
 * @index: index of node to be returned
 *
 * Return: pointer to returned node, NULL if no node found at that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	if (head == NULL)
		return (NULL);
	else
		return (head);
}
