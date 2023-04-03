#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return number of element in list
 * @h: pointer to list
 * Return: length of lits
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
