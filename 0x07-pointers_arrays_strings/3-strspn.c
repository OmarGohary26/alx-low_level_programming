#include "main.h"

/**
 * _strspn - gets the length
 * @s: 1sr para
 * @accept: 2nd para
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
