#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to date.
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	int iterator = 0;

	while (h)
	{
		if (h->str == NULL)
			h = h->next;

		h = h->next;
		iterator++;
	}
	return (iterator);
}
