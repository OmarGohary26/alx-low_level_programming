#include "lists.h"

/**
 * delete_nodeint_at_index - deletes
 * @head: pointer to the head
 * @index: index to delete
 * Return: 1 on success, -1 on fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *prev;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prev = node;
		node = node->next;
	}
	return (-1);
}
