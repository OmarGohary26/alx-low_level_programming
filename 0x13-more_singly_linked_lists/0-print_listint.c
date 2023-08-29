#include "lists.h"

/**
 * print_listint - prints the linked list
 * @h: pointer of the head
 * Return: list's size
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
