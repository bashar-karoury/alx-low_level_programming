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
	listint_t *result_node = NULL, *trav_node = NULL, *next_node = NULL;
	unsigned int i = 0;

	if (head != NULL)
	{
		if (idx == 0)
		{
			result_node = (listint_t *)malloc(sizeof(listint_t));
			if (result_node)
			{
				if (*head == NULL)
					result_node->next = NULL;
				else
					result_node->next = *head;
				result_node->n = n;
				*head = result_node;
			}
		}
		else
		{
			trav_node = *head;
			while ((trav_node != NULL) && (i < (idx - 1)))
			{
				trav_node = trav_node->next;
				i++;
			}
			if ((i == (idx - 1)))
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
	}
	return (result_node);
}
