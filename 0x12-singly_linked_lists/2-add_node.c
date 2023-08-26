#include "lists.h"

/**
 * add_node - adds node to the LL
 * @head: para
 * @str: para
 * Return: int
*/

list_t *add_node(list_t **head, const char *str)
{
	if (!head || !str)
	{
		return (NULL);
	}

	list_t *n_head = malloc(sizeof(list_t));

	if (!n_head)
	{
		return (NULL);
	}

	n_head->str = strdup(str);
	if (!n_head->str)
	{
		free(n_head);
		return (NULL);
	}

	n_head->len = _strlen(n_head->str);
	n_head->next = *head;
	*head = n_head;

	return (n_head);
}
