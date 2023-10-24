#include "lists.h"
#include <stdio.h>

listint_t *reverse(listint_t *node, listint_t **head);

/**
* reverse_listint - reverses nodes of linked list
* @head: double pointer to head node of linked list
*
* Return: pointer to first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *Newhead = NULL;

	if (head != NULL && *head != NULL)
	{
		reverse(*head, &Newhead);
		(*head)->next = NULL;
		*head = Newhead;
	}
	return (Newhead);

}

/**
* reverse - reverses linked list from current node
* @node: start node to be reversed
* @head: double pointer to contain address of new head
*
* Return: current Node
*/
listint_t *reverse(listint_t *node, listint_t **head)
{
	listint_t *next_node = NULL;

	if (node->next == NULL)
	{
		*head = node;
		return (node);
	}
	next_node = reverse(node->next, head);
	next_node->next = node;
	return (node);
}
