#include "lists.h"
/**
 * sum_listint - return sum of number in linked list
 * @head: pointer to head
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
