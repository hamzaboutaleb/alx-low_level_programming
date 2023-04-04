#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp;
    listint_t *current;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        temp = (*head)->next;
        free(*head);
        *head = temp;
        return (1);
    }

    current = *head;
    while ((index - 1) && current)
    {
        current = current->next;
        index--;
    }
    if(current == NULL)
        return (-1);

    temp = current->next;
    current->next = current->next->next;
    free(temp);
    return (1);

}
