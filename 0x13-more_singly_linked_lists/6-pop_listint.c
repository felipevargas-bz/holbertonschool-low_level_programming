#include "lists.h"
/**
 * pop_listint - free a node principal.
 * @head: pointer principal.
 * Return: contain of node deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n = 0;

	if (head && *head)
	{
		aux = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = aux;

		return (n);
	}
	return (0);
}
