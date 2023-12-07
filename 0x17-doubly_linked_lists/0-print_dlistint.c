#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: pointer to head node
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("-> %d elements", i);
	return (i);
}
