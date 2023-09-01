#include "lists.h"

/**
 * pop_listint - pop the node
 * @head: pointer of the head
 * Return: void
*/
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (!head || !*head)
		return (0);

	new = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new;
	return (n);
}
