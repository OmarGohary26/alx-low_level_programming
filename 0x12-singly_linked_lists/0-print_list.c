#include "lists.h"

/**
 * print_list - print the list
 * @h: para
 * Return: size of list
*/

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->str, "(nil)");
		else
			 printf("[%d] %s\n", h->str, h->str);
		h = h->next;
	}
	printf("[%d] %s\n", h->str, "(nil)");
	return (i);
}
