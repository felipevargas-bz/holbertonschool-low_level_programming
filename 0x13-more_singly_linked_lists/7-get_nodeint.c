#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer main.
 * @index: number of node to return.
 * Return: axu (index node)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int iterator = 0;

	if (head == NULL)
	{
		return (0);
	}

	if (head)
	{
		aux = head;
		while (aux->next != NULL)
		{
			aux = aux->next;
			iterator++;
			if (index == iterator)
			{
				return (aux);
			}
		}
	}
		return (0);
}
