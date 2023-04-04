#include "lists.h"
/**
 * get_nodeint_at_index - return node at index
 * @head: pointer to head
 * @index: index of node
 * Return: pointer to nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index && head)
	{
		head = head->next;
		index--;
	}

	return (head);
}
