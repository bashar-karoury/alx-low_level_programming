#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - pops head node data of list
* @head: double pointer to head node
*
* Return: int data of head node
*/
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *newhead = NULL;

	if (head == NULL || *head == NULL)
	{
		return (data);
	}
	else
	{
		newhead = (*head)->next;
		data = (*head)->n;
		free(*head);
		(*head) =  newhead;
	}
	return (data);
}
