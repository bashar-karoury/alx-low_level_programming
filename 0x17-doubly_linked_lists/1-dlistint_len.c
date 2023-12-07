#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len- count elements of a dlistint_t list
 * @h: pointer to head node
 *
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
