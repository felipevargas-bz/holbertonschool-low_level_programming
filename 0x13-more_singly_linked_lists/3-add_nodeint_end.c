#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: pointer principal;
 * @n: integer:
 * Return: pointer to new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node_new;

		node_new->n = n;
		node_new->next = NULL;

		return (*head);
	}
	else
	{
		listint_t *aux = *head;

		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = node_new;
		node_new->n = n;
		node_new->next = NULL;

		return (aux);
	}
}
