#include "main.h"

/**
 * *malloc_checked - Entry point
 * @b: parameter
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
