#include <stdlib.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - insert node at specifc index
  * @h: head
  * @idx: index
  * @n: value
  * Return: new node:
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *curr;

	node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;

	if (idx == 0 && !h)
	{
		(*h) = node;
		return (node);
	}
	if (idx == 0)
	{
		node->next = (*h);
		(*h)->prev = node;
		(*h) = node;
		return (node);
	}
	curr = (*h);
	while (curr && idx--)
	{
		curr = curr->next;
	}

	if (!curr && idx > 0)
		return (NULL);
	node->next = curr;
	node->prev = curr->prev;
	(curr->prev)->next = node;
	curr->prev = node;

	return (node);
}
