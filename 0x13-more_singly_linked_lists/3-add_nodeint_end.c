#include "lists.h"
/**
 * add_nodeint_end - add node th the end of list
 * @head: pointer to head
 * @n: value of node
 * Return: pointer to new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *head;

	while (current->next)
	{
		current = current->next;
	}

	current->next = new_node;

	return (new_node);
}
