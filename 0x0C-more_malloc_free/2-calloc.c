#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: Size of memory.
 * @size: Type of data.
 * Return: gt pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *gt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	gt = malloc(nmemb * size);
	if (gt == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		gt[i] = '\0';
	return (gt);
}
