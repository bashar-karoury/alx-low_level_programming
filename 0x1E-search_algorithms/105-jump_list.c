#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* jump_list - searchs for a value in a linked list of integers using
* jump_list algorithm
* @list: pointer to head of list
* @size: size of list
* @value: value to be searched for
*
* Return: a pointer to the first node where value is located or NULL if
* value not found in list or list is NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *result = NULL;
	listint_t *prev_node = list;
	int step = sqrt(size);

	if (list == NULL)
		return (NULL);

	/* determine the range to search for */

	while (list)
	{
		if ((list->index % step) == 0 && list->index != 0)
		{
			printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
			if (value < list->n)
			{
				/*printf("Bingo\n");*/
				printf("Value found between indexes [%ld] and [%ld]\n",
											prev_node->index, list->index);
				break;
			}
			prev_node = list;
		}
		list = list->next;
	}

	/* Now check interval one be one */
	while (prev_node != list)
	{
		printf("Value checked at index [%ld] = [%d]\n",
								prev_node->index, prev_node->n);
		if (value == prev_node->n)
		{
			/*printf("Bingo Bingo Bingo\n");*/
			result = prev_node;
			break;
		}
		prev_node = prev_node->next;
	}
	return (result);
}
