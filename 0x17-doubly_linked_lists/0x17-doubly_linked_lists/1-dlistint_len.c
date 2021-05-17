#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to firts node.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *aux = NULL;
size_t number_nodes = 0;

aux = h;
while (aux)
{
number_nodes++;
aux = aux->next;
}
return (number_nodes);
}
