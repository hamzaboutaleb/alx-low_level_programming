#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint - add node at the beginning
  * @head: head
  * @n: value
  * Return: new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (!(*head))
	{
		(*head) = new_node;
		return (new_node);
	}
	new_node->next = (*head);
	new_node->prev = NULL;
	(*head)->prev = new_node;
	(*head) = new_node;

	return (new_node);
}
