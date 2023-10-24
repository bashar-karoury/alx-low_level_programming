#include "lists.h"
/**
* sum_listint - returns sum of all the data of a linked list
* @head: pointer to head node of linked list
*
* Return: Sum of nodes data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
