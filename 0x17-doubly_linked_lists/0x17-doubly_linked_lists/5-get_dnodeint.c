#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to firts node.
 * @index: number of node to get.
 * Return: pointer to node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *aux = NULL;

aux = head;
while (i != index)
{
if (aux == NULL)
{
return (NULL);
}
aux = aux->next;
i++;
}
return (aux);
}
