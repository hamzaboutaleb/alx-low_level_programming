#include <stdlib.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - delete node as specifc index
  * @head: head
  * @index: index
  * Return: 1 if succeeded -1 otherwise
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	
	if (index == 0)
	{
		curr = (*head);
		(*head) = curr->next;
		(curr->next)->prev = NULL;
		free(curr);
		return (1);
	}
	curr = (*head);
	while (curr && index--)
	{
		curr = curr->next;
	}

	if (!curr)
		return (-1);
	if (!curr->next)
	{
		(curr->prev)->next = NULL;
		free(curr);
		return (1);
	}
	(curr->prev)->next = curr->next;
	(curr->next)->prev = curr->prev;
	free(curr);
	return (1);
}
