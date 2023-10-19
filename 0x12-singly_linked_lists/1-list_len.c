#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* list_len - count of number of elements of a list
* @h: pointer to list node
*
* Return: Number of node of list
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
