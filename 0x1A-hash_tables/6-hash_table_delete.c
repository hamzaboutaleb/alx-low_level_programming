#include "hash_tables.h"
#include <stdlib.h>

/**
  * hash_table_delete - free all hash table
  * @ht: pointer to hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next;
	unsigned long int i;


	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}
	free(ht->array);
	free(ht);
}
