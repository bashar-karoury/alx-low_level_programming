#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts new node at given position
* @head: double pointer to head node
* @idx: position at which the node should be inserted
* @n: data of new node
*
* Return: pointer to the new inserted node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *result_node = NULL;
	listint_t *trav_node = NULL;
	unsigned int i = 0;
	listint_t *next_node = NULL;

	if (head != NULL)
	{
		trav_node = *head;
		while ((trav_node != NULL) && (i < (idx - 1)))
		{
			trav_node = trav_node->next;
			i++;
		}
		if ((trav_node != NULL) && (i == (idx - 1)))
		{
			next_node = trav_node->next;
			result_node = (listint_t *)malloc(sizeof(listint_t));
			if (result_node)
			{
				result_node->n = n;
				trav_node->next = result_node;
				result_node->next = next_node;
			}
		}
	}
	return (result_node);
}
