#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to firts node.
 * @idx: number of node to add.
 * @n: number.
 * Return:  the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *aux = NULL;
dlistint_t *node = NULL;

aux = *h;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
for (; idx != 1; idx--)
{
aux = aux->next;
if (aux == NULL)
{
return (NULL);
}
}
if (aux->next == NULL)
{
return (add_dnodeint_end(h, n));
}
node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
node->prev = aux;
node->next = aux->next;
aux->next->prev = node;
aux->next = node;
return (node);
}
