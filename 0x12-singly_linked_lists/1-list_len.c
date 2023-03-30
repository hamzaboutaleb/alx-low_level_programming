#include "lists.h"

/**
 * list_len - get length of list
 * @h: pointer to list
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
