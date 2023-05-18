#include "lists.h"

/**
  * dlistint_len - return number of node in dblinkedlist
  * @h: head
  * Return: number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
