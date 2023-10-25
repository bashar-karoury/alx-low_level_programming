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
	size_t n = 0;
	const listint_t *array_nodes[1000] = {0};
	int i = 0;
	int array_len = 0;
	int loop = 0;

	if (head == NULL)
	{
		exit(98);
	}

	trav_node = head;
	while (trav_node != NULL)
	{
		for (i = 0; i < array_len; i++)
		{
			if (trav_node == array_nodes[i])
			{
				loop = 1;
				break;
			}
		}
		if (loop)
		{
			printf("-> [%p] %d\n", (void *)trav_node, trav_node->n);
			break;
		}
		printf("[%p] %d\n", (void *)trav_node, trav_node->n);
		array_nodes[array_len++] = trav_node;
		trav_node = trav_node->next;
		n++;
	}
	return (n);
}
