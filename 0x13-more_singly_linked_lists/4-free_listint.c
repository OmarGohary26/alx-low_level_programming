#include "lists.h"

/**
 * free_listint - frees the list
 * @head: pointer to the head
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(node);
	}
}
