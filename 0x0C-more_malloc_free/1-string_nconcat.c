#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - Entry point
 * @s1: para
 * @s2: para
 * @n: para
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, c1, c2;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	for (c1 = 0; s1[c1] != '\0'; c1++)
	;

	for (c2 = 0; s2[c2] != '\0'; c2++)
	;

	c1++;
	c2++;

	s = malloc(c1 + n + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';
	return (s);
}
