#include "main.h"

/**
 * _strcmp - function to compare
 *
 * @s1: 1st parameter
 * @s2: 2nd parameter
 * Return: 1 if true 0 is fail
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
