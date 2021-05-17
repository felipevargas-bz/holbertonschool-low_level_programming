#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 *                    of a dlistint_t linked list.
 * @head: pointer to firts node.
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *aux = NULL;
int sum = 0;

if (head == NULL)
{
return (0);
}
aux = head;
while (aux)
{
sum += aux->n;
aux = aux->next;
}
return (sum);
}
