#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node to las of list
 * @head: pointer to list head
 * @str: string of node
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *node;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	current = *head;
	while (current && current->next != NULL)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		*head = node;
	}
	else
	{
		current->next = node;
	}
	return (node);
}
