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
	while (aux)
	{
		if (idx == (iterator - 1))
		{
			node->next = aux->next;
			aux->next = node;

			return (aux);
		}
		aux = aux->next;
		if (aux == NULL)
		{
			return (NULL);
		}
		iterator++;
	}
	return (NULL);
}
