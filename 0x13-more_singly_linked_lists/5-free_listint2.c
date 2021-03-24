#include "lists.h"
/**
 * free_listint2 - frees a list_t list.
 * @head: pointer principal.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (*head)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
}
