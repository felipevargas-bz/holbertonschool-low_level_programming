#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to node.
 * @idx: number of node to insert.
 * @n: value to new node.
 * Return: poninter to new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	listint_t *node;
	unsigned int iterator = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (aux)
	{
		if ((idx - 1) == iterator)
		{
			node->next = aux->next;
			aux->next = node;

			return (node);
		}
		aux = aux->next;
		if (aux == NULL)
		{
			return (NULL);
		}
		iterator++;
	}
	return (0);
}
