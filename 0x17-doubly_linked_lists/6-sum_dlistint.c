#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - sum all data of elements of a dlistint_t list
 * @head: pointer to head node
 *
 * Return: sum of all n data, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
