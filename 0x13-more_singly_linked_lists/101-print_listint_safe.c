#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_listint_safe - prints a listint linked list even it it has a loop
* @head: double pointer to head node
*
* Return: size of linked list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *trav_node = NULL;
	const listint_t *check_node = NULL;
	int loop = 0;
	size_t n = 0;
	size_t i = 0;

	trav_node = head;
	while (trav_node != NULL)
	{
		check_node = head;
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
			printf("-> [%p] %d\n", (void *)trav_node, trav_node->n);
			break;
		}
		printf("[%p] %d\n", (void *)trav_node, trav_node->n);
		trav_node = trav_node->next;
		n++;
	}
	return (n);
}
