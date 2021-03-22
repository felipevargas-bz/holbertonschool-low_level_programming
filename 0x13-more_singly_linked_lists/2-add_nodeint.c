#include "lists.h"
/**
 * add_nodeint - return number of nodes.
 * @head: pointer.
 * @n: num to print.
 * Return: number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;

	node->next = *head;
	*head = node;

	return (node);
}
