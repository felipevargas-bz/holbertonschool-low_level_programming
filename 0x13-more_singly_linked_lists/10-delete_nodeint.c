#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to node.
 * @index: number to node.
 * Return: 1 or -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *copy = *head;
	unsigned int i = 0;

	if (copy == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);

		return (1);
	}

	while (i < (index - 1))
	{
		if (copy->next == NULL)
		{
			return (-1);
		}
		copy = copy->next;
		i++;
	}
	aux = copy->next;
	copy->next = aux->next;
	free(aux);

	return (1);
}
