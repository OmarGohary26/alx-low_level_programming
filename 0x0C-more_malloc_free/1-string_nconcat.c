#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 * @s: para
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;

	return (size);
}

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
	int i, j;
	unsigned int s1_l, s2_l;

	if (s1 == 0)
		s1 = "";
	if (s1 == 0)
		s2 = "";

	s1_l = _strlen(s1);
	s1_l = _strlen(s2);

	s = malloc(s1_l + n + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';
	return (s);
}
