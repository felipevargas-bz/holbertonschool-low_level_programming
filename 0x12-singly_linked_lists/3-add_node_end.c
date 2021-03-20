#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer principal;
 * @str: string:
 * Return: pointer to new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_new;
	int i = 0;

	node_new = malloc(sizeof(list_t));

	if (node_new == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	if (*head == NULL)
	{
		*head = node_new;

		node_new->str = strdup(str);
		node_new->len = i;
		node_new->next = NULL;

		return (*head);
	}
	else
	{
		list_t *aux = *head;

		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = node_new;
		node_new->str = strdup(str);
		node_new->len = i;
		node_new->next = NULL;

		return (aux);
	}
}
