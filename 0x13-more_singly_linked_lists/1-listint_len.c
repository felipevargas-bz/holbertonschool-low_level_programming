#include "lists.h"
/**
 * listint_len - return number of nodes.
 * @h: pointer.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int iterator = 0;

	while (h)
	{
		h = h->next;
		iterator++;
	}
	return (iterator);
}
