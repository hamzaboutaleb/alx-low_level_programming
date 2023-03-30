#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print list
 * @h: pointer to list
 * Return: length of list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
