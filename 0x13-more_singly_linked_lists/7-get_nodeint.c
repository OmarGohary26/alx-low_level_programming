#include "lists.h"

/**
 * get_nodeint_at_index - return node's index
 * @head: pointer to the head
 * @index: index of the node
 * Return: void
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
