#include "lists.h"

/**
* get_nodeint_at_index - return the nth node of linked list listint_t
* @head: pointer to head node
* @index: index of node that should be returned
*
* Return: pointer to acquired node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trav_node = head;
	listint_t *result_node = NULL;
	unsigned int idx = 0;

	while (trav_node != NULL && idx < index)
	{
		trav_node = trav_node->next;
		idx++;
	}
	if (trav_node != NULL && (idx == index))
	{
		result_node = trav_node;
	}
	return (result_node);
}
