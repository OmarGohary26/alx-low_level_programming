#include "main.h"

/**
 * *_memset - fills memory with constant type
 * @s: parameter
 * @b: 2nd parameter
 * @n: 3rd parameter
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
