#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int iterator = 0;

	while (h)
	{

		printf("%d\n", h->n);
		h = h->next;
		iterator++;
	}
	return (iterator);
}
