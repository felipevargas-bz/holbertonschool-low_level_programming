#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	int state = 0;
	unsigned long int index = 0;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			if (state == 1)
				printf(", ");

			aux = ht->array[index];
			while (aux != NULL)
			{
				printf("%s: '%s'", aux->key, aux->value);
				aux = aux->next;
				if (aux != NULL)
					printf(", ");
			}
			state = 1;
		}
		index++;
	}
	printf("}\n");
}

