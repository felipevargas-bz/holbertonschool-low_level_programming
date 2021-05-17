#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to firts node.
 */
void free_dlistint(dlistint_t *head)
{
if (head != NULL)
{
dlistint_t *aux = NULL;
aux = head;
while (aux->next != NULL)
{
aux = head->next;
free(head);
head = aux;
}
free(aux);
}
}
