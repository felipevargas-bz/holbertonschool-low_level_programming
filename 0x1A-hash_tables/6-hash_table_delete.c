#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *aux;
	unsigned long int index = 0;

	for (; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				aux = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = aux;
			}
		}
	}
	free(head->array);
	free(head);
}

