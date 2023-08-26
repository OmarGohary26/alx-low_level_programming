#include "lists.h"

/**
 * list_len - gets the length of the LL
 * @h: para
 * Return: int
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while(h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
