#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* linear_skip - searchs for a value in a linked list of integers using
* linear_skip algorithm
* @list: pointer to head of list
* @value: value to be searched for
*
* Return: a pointer to the first node where value is located or NULL if
* value not found in list or list is NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *result = NULL;
	skiplist_t *prev_node = list;
	skiplist_t *exp_node = list->express;

	if (list == NULL)
		return (NULL);

	/* determine the range to search for */

	while (exp_node)
	{
		printf("Value checked at index [%ld] = [%d]\n",
								exp_node->index, exp_node->n);
		if (value <= (exp_node->n))
			break;
		prev_node = exp_node;
		exp_node = exp_node->express;
	}

	if (!exp_node)
	{
		exp_node = prev_node;
		while (exp_node->next)
			exp_node = exp_node->next;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
								prev_node->index, exp_node->index);
	/* Now check interval one be one */
	while (prev_node != exp_node->next)
	{
		printf("Value checked at index [%ld] = [%d]\n",
								prev_node->index, prev_node->n);
		if (value == prev_node->n)
		{
			result = prev_node;
			break;
		}
		prev_node = prev_node->next;
	}
	return (result);
}
