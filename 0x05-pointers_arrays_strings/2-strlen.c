#include "main.h"

/**
 * _strlen - return length
 *
 * @s: string to length
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;

	return (c);
}
