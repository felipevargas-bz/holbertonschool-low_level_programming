#include "hash_tables.h"
/**
 * hash_table_create - create a hash_table.
 * @size: size of hast table.
 * Return: hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int index = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	while (index < size)
	{
		table->array[index] = NULL;
		index++;
	}
	return (table);
}

