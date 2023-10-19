#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* print_list - prints all elements of a list
* @h: pointer to list node
*
* Return: Number of node of list
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		n++;
		h = h->next;
	}
	return (n);
}
