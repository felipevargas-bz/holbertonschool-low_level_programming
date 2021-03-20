#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to date.
 * Return: elements printed.
 */
size_t print_list(const list_t *h)
{
	int iterator = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		iterator++;
	}
	return (iterator);
}
