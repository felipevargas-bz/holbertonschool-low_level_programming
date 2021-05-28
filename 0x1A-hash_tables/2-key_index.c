#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: key.
 * @size: size of array hash table.
 * Return: a index for hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ident = hash_djb2(key);
	unsigned long int index = ident % size;

	return (index);
}

