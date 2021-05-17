#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 *                                         dlistint_t linked list.
 * @head: pointer to firts node.
 * @index: number of node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *aux = *head;
unsigned int pos = 0;

if (aux == NULL)
{
return (-1);
}
if (index == 0)
{
*head = aux->next;
if (aux->next != NULL)
{
aux->next->prev = NULL;
}
free(aux);
return (1);
}
for (pos = 0; pos < index; pos++)
{
if (aux->next == NULL)
{
return (-1);
}
aux = aux->next;
}
aux->prev->next = aux->next;
if (aux->next != NULL)
{
aux->next->prev = aux->prev;
}
free(aux);
return (1);
}
