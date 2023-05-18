#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - add node at the end of dbly linked list
  * @head: head
  * @n: value
  * Return: node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *curr;

	node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	curr = *head;
	if (!curr)
	{
		(*head) = node;
		return (node);
	}
	while (curr->next)
		curr = curr->next;
	node->prev = curr;
	curr->next = node;

	return (node);
}
