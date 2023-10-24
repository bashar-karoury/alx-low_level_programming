#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* print_listint - prints all elements of a list
* @h: pointer to list node
*
* Return: Number of node of list
*/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
