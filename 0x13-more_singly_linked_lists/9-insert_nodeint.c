#include "lists.h"
/**
 * insert_nodeint_at_index - add node at defined index
 * @head: pointer to head
 * @idx: index
 * @n: value
 * Return: pointer to new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while ((idx - 1) && temp)
	{
		temp = temp->next;
	}

	if (temp == NULL)
		return (NULL);

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
