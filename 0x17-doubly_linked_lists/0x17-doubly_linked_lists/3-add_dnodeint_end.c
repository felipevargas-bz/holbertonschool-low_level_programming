#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to firts node.
 * @n: number.
 * Return: pointer to new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node = NULL;
dlistint_t *aux = NULL;

aux = *head;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
node->next = NULL;
if (*head == NULL)
{
node->prev = NULL;
*head = node;
return (node);
}
while (aux->next != NULL)
{
aux = aux->next;
}
aux->next = node;
node->prev = aux;
return (node);
}
