#include "list.h"

/**
 * add_nodeint - adds node to the front
 * @head: head of the list
 * @n: the value of the key
 * Return: pointer to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
