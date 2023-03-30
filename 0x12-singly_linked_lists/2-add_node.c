#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node to list
 * @head: pointer to head
 * @str: string
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
}
