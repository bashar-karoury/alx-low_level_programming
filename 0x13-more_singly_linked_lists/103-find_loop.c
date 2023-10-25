#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* find_listint_loop - detects loop in linkint_t linked list
* @head: pointer to head node
*
* Return: pointer to loop node
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *check_node = NULL;
	listint_t *h = head;

	while (head != NULL)
	{
		check_node = h;
		while (check_node != head)
		{
			if ((head->next == check_node) || (head->next == head))
			{
				return (head->next);
			}
			check_node = check_node->next;
		}
		head = head->next;
	}
	return (NULL);
}
