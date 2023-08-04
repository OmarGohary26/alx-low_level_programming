#include "main.h"
/**
 * *_memcpy - copy memory area
 * @dest: parameter
 * @src: 2nd parameter
 * @n: 3rd parameter
 * Return: pointer of dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
