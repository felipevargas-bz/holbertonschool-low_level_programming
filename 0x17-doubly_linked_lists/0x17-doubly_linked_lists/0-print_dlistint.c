#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to firts node.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *aux = NULL;
size_t number_nodes = 0;

aux = h;
while (aux)
{
number_nodes++;
printf("%d\n", aux->n);
aux = aux->next;
}
return (number_nodes);
}
