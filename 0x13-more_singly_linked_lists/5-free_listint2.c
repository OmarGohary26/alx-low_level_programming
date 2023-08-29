#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: pointer to the head
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *n;
	listint_t *tmp;

	if (!head)
		return;

	n = *head;
	while (n)
	{
		tmp = n;
		n = n->next;
		free(tmp);
	}
	*head = NULL;
}
