#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value of nodes.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *aux = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0' || index >= ht->size)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	if (ht->array[index] == NULL)
	{
		new->value = (char *)value;
		new->key = (char *)key;
		ht->array[index] = new;

		return (1);
	}
	else
	{
		new->value = (char *)value;
		new->key = (char *)key;
		ht->array[index] = new;
		new->next = aux;

		return (1);
	}
	return (0);
}

