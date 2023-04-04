#include "lists.h"
/**
 * pop_listint - delete first node of linked list
 * @head: pointer to head
 * Return: data in hed node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
