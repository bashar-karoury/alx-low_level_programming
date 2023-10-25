#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_listint_safe - frees a listint linked list even it it has a loop
* @h: double pointer to head node
*
* Return: size of linked list
*/
size_t free_listint_safe(listint_t **h)
{
	const listint_t *trav_node = NULL;
	const listint_t *check_node = NULL;
	int loop = 0;
	size_t n = 0;
	size_t i = 0;

	trav_node = *h;
	while (trav_node != NULL)
	{
		check_node = *h;
		i = 0;
		while (check_node != NULL && (i < n))
		{
			if (trav_node == check_node)
			{
				loop = 1;
				break;
			}
			check_node = check_node->next;
			i++;
		}
		if (loop)
		{
			break;
		}
		trav_node = trav_node->next;
		n++;
	}
	trav_node = *h;
	i = 0;
	while (i < n)
	{
		check_node = trav_node;
		trav_node = trav_node->next;
		free((listint_t *)check_node);
		i++;
	}
	*h = NULL;
	return (n);
}
