#include "lists.h"

/**
  * get_dnodeint_at_index - get node at specific index
  * @head: head
  * @index: index
  * Return: node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	
	while (head && index--)
	{
		head = head->next;
	}

	return (head);
}
