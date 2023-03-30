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

void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	temp = current;
	while (current->next && current)
	{
		temp = current->next;
		free_node(current);
		current = temp;
	}


}
