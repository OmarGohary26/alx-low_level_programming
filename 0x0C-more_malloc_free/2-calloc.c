#include <stdlib.h>
#include "main.h"


/**
 * *_calloc - Entry point
 * @nmemb: para
 * @size: para
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}

	return (p);
}
