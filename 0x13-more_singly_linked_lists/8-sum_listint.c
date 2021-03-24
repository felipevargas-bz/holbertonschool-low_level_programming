#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: pointer to node.
 * Return: sum of dates of nodes.
 */
int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int sum = 0;

	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}

	return (sum);
}
