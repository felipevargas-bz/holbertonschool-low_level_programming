#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned int state = 0;
	unsigned int index = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		aux = ht->array[index];
		while (aux)
		{
			if (state == 0)
				state = 1;
			else
				printf(", ");

			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
		}
		index++;
	}
	printf("}\n");
}

