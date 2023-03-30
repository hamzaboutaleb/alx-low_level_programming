#include <stdlib.h>
#include "lists.h"

/**
 * free_node - delete node from memory
 * @node: node to delete
 */
void free_node(list_t *node)
{
	free(node->str);
	free(node);
}
/**
 * free_list - free list from memory
 * @head: pointer to head
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head->next;
		free_node(head);
		head = temp;
	}


}
