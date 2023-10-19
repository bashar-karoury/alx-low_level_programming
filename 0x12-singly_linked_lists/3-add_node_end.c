#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
unsigned int string_length(char *str);


/**
 * add_node_end - adds a new node at end of a list
 * @head: double pointer to list
 * @str: string of the new head node
 *
 * Return: pointer to the new node, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	char *new_string = NULL;
	unsigned int len = 0;
	list_t *trav_node = *head;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_string = strdup(str);
	if (new_string == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len = string_length(new_string);
	new_node->str = new_string;
	new_node->len = len;
	new_node->next = NULL;
	if (trav_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (trav_node->next != NULL)
			trav_node = trav_node->next;
		trav_node->next = new_node;
	}

	return (new_node);
}

/**
 * string_length - calculate length of string
 * @str: pointer to char string
 *
 * Return: string length
 */
unsigned int string_length(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
